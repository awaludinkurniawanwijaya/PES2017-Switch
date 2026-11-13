#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A0F2A8"))) PPC_WEAK_FUNC(sub_82A0F2A8);
PPC_FUNC_IMPL(__imp__sub_82A0F2A8) {
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
	// bne cr6,0x82a0f388
	if (!cr6.eq) goto loc_82A0F388;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x82a0f2e0
	if (!cr6.eq) goto loc_82A0F2E0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82A0F2E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x82a0f310
	if (cr6.eq) goto loc_82A0F310;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82A0F2F4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a0f2f4
	if (!cr6.eq) goto loc_82A0F2F4;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82A0F310:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a0f320
	if (!cr6.eq) goto loc_82A0F320;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82A0F320:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82a0f34c
	if (cr6.eq) goto loc_82A0F34C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A0F330:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a0f330
	if (!cr6.eq) goto loc_82A0F330;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A0F34C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32095
	ctx.r8.s64 = -2103377920;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-10400
	ctx.r8.s64 = ctx.r8.s64 + -10400;
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
	ctx.lr = 0x82A0F380;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_82A0F388:
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

__attribute__((alias("__imp__sub_82A0F39C"))) PPC_WEAK_FUNC(sub_82A0F39C);
PPC_FUNC_IMPL(__imp__sub_82A0F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F3A0"))) PPC_WEAK_FUNC(sub_82A0F3A0);
PPC_FUNC_IMPL(__imp__sub_82A0F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-22824
	ctx.r8.s64 = ctx.r10.s64 + -22824;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r7,r9,-22216
	ctx.r7.s64 = ctx.r9.s64 + -22216;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// addi r4,r6,-9588
	ctx.r4.s64 = ctx.r6.s64 + -9588;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r10,r5,-19200
	ctx.r10.s64 = ctx.r5.s64 + -19200;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r7,r9,-19040
	ctx.r7.s64 = ctx.r9.s64 + -19040;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// addi r6,r8,-19176
	ctx.r6.s64 = ctx.r8.s64 + -19176;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r9,r5,-19152
	ctx.r9.s64 = ctx.r5.s64 + -19152;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r8,r4,-19116
	ctx.r8.s64 = ctx.r4.s64 + -19116;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// addi r10,r5,-19088
	ctx.r10.s64 = ctx.r5.s64 + -19088;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r5,r4,-22844
	ctx.r5.s64 = ctx.r4.s64 + -22844;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// addi r4,r4,-9692
	ctx.r4.s64 = ctx.r4.s64 + -9692;
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// addi r7,r31,-24656
	ctx.r7.s64 = ctx.r31.s64 + -24656;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r6,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stb r11,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r11.u8);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r5,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stb r11,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r11.u8);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r4,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// addi r4,r6,-9616
	ctx.r4.s64 = ctx.r6.s64 + -9616;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// addi r10,r5,4520
	ctx.r10.s64 = ctx.r5.s64 + 4520;
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// addi r7,r9,-24692
	ctx.r7.s64 = ctx.r9.s64 + -24692;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// addi r6,r8,-24672
	ctx.r6.s64 = ctx.r8.s64 + -24672;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// addi r9,r5,-9560
	ctx.r9.s64 = ctx.r5.s64 + -9560;
	// stw r10,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// addi r8,r4,-9636
	ctx.r8.s64 = ctx.r4.s64 + -9636;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// addi r10,r5,7068
	ctx.r10.s64 = ctx.r5.s64 + 7068;
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// addi r5,r4,-8120
	ctx.r5.s64 = ctx.r4.s64 + -8120;
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// addi r7,r4,11980
	ctx.r7.s64 = ctx.r4.s64 + 11980;
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// addi r4,r31,-24636
	ctx.r4.s64 = ctx.r31.s64 + -24636;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// addi r31,r31,12000
	ctx.r31.s64 = ctx.r31.s64 + 12000;
	// stw r6,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r6.u32);
	// stb r11,324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 324, ctx.r11.u8);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stb r11,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r11.u8);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stw r8,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r8.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stb r11,364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 364, ctx.r11.u8);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r10,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r10.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r11.u8);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r5,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r5.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stb r11,404(r3)
	PPC_STORE_U8(ctx.r3.u32 + 404, ctx.r11.u8);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r7,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r7.u32);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// stw r4,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r4.u32);
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// stw r31,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r31.u32);
	// addi r8,r30,-19064
	ctx.r8.s64 = ctx.r30.s64 + -19064;
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
	// addi r10,r3,480
	ctx.r10.s64 = ctx.r3.s64 + 480;
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// li r9,83
	ctx.r9.s64 = 83;
	// stw r8,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r8.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// addi r8,r8,7056
	ctx.r8.s64 = ctx.r8.s64 + 7056;
loc_82A0F65C:
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bge 0x82a0f65c
	if (!cr0.lt) goto loc_82A0F65C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,3844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3844, ctx.r11.u8);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,3848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3848, ctx.r11.u32);
	// addi r7,r10,-22152
	ctx.r7.s64 = ctx.r10.s64 + -22152;
	// stw r11,3852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3852, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,3856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3856, ctx.r11.u32);
	// stw r7,3840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3840, ctx.r7.u32);
	// addi r10,r3,3900
	ctx.r10.s64 = ctx.r3.s64 + 3900;
	// stb r11,3864(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3864, ctx.r11.u8);
	// addi r6,r8,-22152
	ctx.r6.s64 = ctx.r8.s64 + -22152;
	// stw r11,3868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3868, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,3872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3872, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,3876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3876, ctx.r11.u32);
	// stw r7,3860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3860, ctx.r7.u32);
	// addi r9,r9,-22196
	ctx.r9.s64 = ctx.r9.s64 + -22196;
	// stb r11,3884(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3884, ctx.r11.u8);
	// stw r11,3888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3888, ctx.r11.u32);
	// stw r6,3880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3880, ctx.r6.u32);
	// stw r11,3892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3892, ctx.r11.u32);
	// stw r11,3896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3896, ctx.r11.u32);
	// stb r11,3904(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3904, ctx.r11.u8);
	// stw r11,3908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3908, ctx.r11.u32);
	// stw r11,3912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3912, ctx.r11.u32);
	// stw r11,3916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3916, ctx.r11.u32);
	// stw r6,3900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3900, ctx.r6.u32);
loc_82A0F704:
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a0f704
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0F704;
	// li r9,26
	ctx.r9.s64 = 26;
	// addi r10,r3,4420
	ctx.r10.s64 = ctx.r3.s64 + 4420;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,-22172
	ctx.r9.s64 = ctx.r9.s64 + -22172;
loc_82A0F730:
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a0f730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0F730;
	// li r9,26
	ctx.r9.s64 = 26;
	// addi r10,r3,4940
	ctx.r10.s64 = ctx.r3.s64 + 4940;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,-9668
	ctx.r9.s64 = ctx.r9.s64 + -9668;
loc_82A0F75C:
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a0f75c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0F75C;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r10,r3,5460
	ctx.r10.s64 = ctx.r3.s64 + 5460;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,-22152
	ctx.r9.s64 = ctx.r9.s64 + -22152;
loc_82A0F788:
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a0f788
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0F788;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,5924(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5924, ctx.r11.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,5928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5928, ctx.r11.u32);
	// addi r8,r10,-11248
	ctx.r8.s64 = ctx.r10.s64 + -11248;
	// stw r11,5932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5932, ctx.r11.u32);
	// stw r11,5936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5936, ctx.r11.u32);
	// addi r7,r9,-22936
	ctx.r7.s64 = ctx.r9.s64 + -22936;
	// stw r8,5920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5920, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r11,5944(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5944, ctx.r11.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,5948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5948, ctx.r11.u32);
	// addi r4,r6,-22892
	ctx.r4.s64 = ctx.r6.s64 + -22892;
	// stw r7,5940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5940, ctx.r7.u32);
	// addi r10,r5,-22916
	ctx.r10.s64 = ctx.r5.s64 + -22916;
	// stw r11,5952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5952, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,5956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5956, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r11,5964(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5964, ctx.r11.u8);
	// addi r7,r9,-11736
	ctx.r7.s64 = ctx.r9.s64 + -11736;
	// stw r11,5968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5968, ctx.r11.u32);
	// addi r6,r8,-12356
	ctx.r6.s64 = ctx.r8.s64 + -12356;
	// stw r4,5960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5960, ctx.r4.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,5972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5972, ctx.r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,5976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5976, ctx.r11.u32);
	// addi r9,r5,-22864
	ctx.r9.s64 = ctx.r5.s64 + -22864;
	// stb r11,5984(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5984, ctx.r11.u8);
	// addi r8,r4,9392
	ctx.r8.s64 = ctx.r4.s64 + 9392;
	// stw r11,5988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5988, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,5980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5980, ctx.r10.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r11,5992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5992, ctx.r11.u32);
	// addi r5,r5,-16640
	ctx.r5.s64 = ctx.r5.s64 + -16640;
	// stw r11,5996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5996, ctx.r11.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,6004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6004, ctx.r11.u8);
	// addi r4,r4,7068
	ctx.r4.s64 = ctx.r4.s64 + 7068;
	// stw r11,6008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6008, ctx.r11.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r7,6000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6000, ctx.r7.u32);
	// stw r11,6012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6012, ctx.r11.u32);
	// addi r7,r31,11960
	ctx.r7.s64 = ctx.r31.s64 + 11960;
	// stw r11,6016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6016, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r11,6024(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6024, ctx.r11.u8);
	// addi r10,r3,6120
	ctx.r10.s64 = ctx.r3.s64 + 6120;
	// stw r11,6028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6028, ctx.r11.u32);
	// stw r6,6020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6020, ctx.r6.u32);
	// stw r11,6032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6032, ctx.r11.u32);
	// stw r11,6036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6036, ctx.r11.u32);
	// stb r11,6044(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6044, ctx.r11.u8);
	// stw r11,6048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6048, ctx.r11.u32);
	// stw r9,6040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6040, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,6052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6052, ctx.r11.u32);
	// stw r11,6056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6056, ctx.r11.u32);
	// stb r11,6064(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6064, ctx.r11.u8);
	// stw r11,6068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6068, ctx.r11.u32);
	// stw r11,6072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6072, ctx.r11.u32);
	// stw r11,6076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6076, ctx.r11.u32);
	// stw r8,6060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6060, ctx.r8.u32);
	// stb r11,6084(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6084, ctx.r11.u8);
	// stw r11,6088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6088, ctx.r11.u32);
	// stw r5,6080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6080, ctx.r5.u32);
	// stw r11,6092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6092, ctx.r11.u32);
	// stw r11,6096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6096, ctx.r11.u32);
	// stb r11,6104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6104, ctx.r11.u8);
	// stw r11,6108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6108, ctx.r11.u32);
	// stw r4,6100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6100, ctx.r4.u32);
	// stw r11,6112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6112, ctx.r11.u32);
	// stw r11,6116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6116, ctx.r11.u32);
	// stb r11,6124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6124, ctx.r11.u8);
	// stw r11,6128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6128, ctx.r11.u32);
	// stw r7,6120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6120, ctx.r7.u32);
	// stw r11,6132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6132, ctx.r11.u32);
	// stw r11,6136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6136, ctx.r11.u32);
	// addi r9,r9,9416
	ctx.r9.s64 = ctx.r9.s64 + 9416;
loc_82A0F8E8:
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a0f8e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0F8E8;
	// stb r11,6580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6580, ctx.r11.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0F910"))) PPC_WEAK_FUNC(sub_82A0F910);
PPC_FUNC_IMPL(__imp__sub_82A0F910) {
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
	// bne cr6,0x82a0f934
	if (!cr6.eq) goto loc_82A0F934;
	// bl 0x82936da8
	ctx.lr = 0x82A0F934;
	sub_82936DA8(ctx, base);
loc_82A0F934:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a0f950
	if (!cr6.eq) goto loc_82A0F950;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A0F950:
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

__attribute__((alias("__imp__sub_82A0F968"))) PPC_WEAK_FUNC(sub_82A0F968);
PPC_FUNC_IMPL(__imp__sub_82A0F968) {
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
	// bne cr6,0x82a0f98c
	if (!cr6.eq) goto loc_82A0F98C;
	// bl 0x825cd778
	ctx.lr = 0x82A0F98C;
	sub_825CD778(ctx, base);
loc_82A0F98C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a0f9a8
	if (!cr6.eq) goto loc_82A0F9A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A0F9A8:
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

__attribute__((alias("__imp__sub_82A0F9C0"))) PPC_WEAK_FUNC(sub_82A0F9C0);
PPC_FUNC_IMPL(__imp__sub_82A0F9C0) {
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
	// bne cr6,0x82a0fa24
	if (!cr6.eq) goto loc_82A0FA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0F9F4;
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
	ctx.lr = 0x82A0FA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a0f1b0
	ctx.lr = 0x82A0FA1C;
	sub_82A0F1B0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_82A0FA24:
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

__attribute__((alias("__imp__sub_82A0FA3C"))) PPC_WEAK_FUNC(sub_82A0FA3C);
PPC_FUNC_IMPL(__imp__sub_82A0FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FA40"))) PPC_WEAK_FUNC(sub_82A0FA40);
PPC_FUNC_IMPL(__imp__sub_82A0FA40) {
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
	// bne cr6,0x82a0faa4
	if (!cr6.eq) goto loc_82A0FAA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0FA74;
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
	ctx.lr = 0x82A0FA8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a0f2a8
	ctx.lr = 0x82A0FA9C;
	sub_82A0F2A8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_82A0FAA4:
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

__attribute__((alias("__imp__sub_82A0FABC"))) PPC_WEAK_FUNC(sub_82A0FABC);
PPC_FUNC_IMPL(__imp__sub_82A0FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FAC0"))) PPC_WEAK_FUNC(sub_82A0FAC0);
PPC_FUNC_IMPL(__imp__sub_82A0FAC0) {
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
	// bne cr6,0x82a0fae4
	if (!cr6.eq) goto loc_82A0FAE4;
	// bl 0x82a0fa40
	ctx.lr = 0x82A0FAE4;
	sub_82A0FA40(ctx, base);
loc_82A0FAE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a0fb00
	if (!cr6.eq) goto loc_82A0FB00;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A0FB00:
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

__attribute__((alias("__imp__sub_82A0FB18"))) PPC_WEAK_FUNC(sub_82A0FB18);
PPC_FUNC_IMPL(__imp__sub_82A0FB18) {
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
	// bne cr6,0x82a0fb3c
	if (!cr6.eq) goto loc_82A0FB3C;
	// bl 0x825e1f00
	ctx.lr = 0x82A0FB3C;
	sub_825E1F00(ctx, base);
loc_82A0FB3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a0fb58
	if (!cr6.eq) goto loc_82A0FB58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A0FB58:
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

__attribute__((alias("__imp__sub_82A0FB70"))) PPC_WEAK_FUNC(sub_82A0FB70);
PPC_FUNC_IMPL(__imp__sub_82A0FB70) {
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
	// bne cr6,0x82a0fb94
	if (!cr6.eq) goto loc_82A0FB94;
	// bl 0x825cb7a8
	ctx.lr = 0x82A0FB94;
	sub_825CB7A8(ctx, base);
loc_82A0FB94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a0fbb0
	if (!cr6.eq) goto loc_82A0FBB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A0FBB0:
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

__attribute__((alias("__imp__sub_82A0FBC8"))) PPC_WEAK_FUNC(sub_82A0FBC8);
PPC_FUNC_IMPL(__imp__sub_82A0FBC8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,11784
	ctx.r10.s64 = ctx.r11.s64 + 11784;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82a0fc08
	if (cr6.eq) goto loc_82A0FC08;
	// bl 0x82a0e6f8
	ctx.lr = 0x82A0FC00;
	sub_82A0E6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A0FC08:
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
	// beq cr6,0x82a0fc34
	if (cr6.eq) goto loc_82A0FC34;
	// bl 0x82595188
	ctx.lr = 0x82A0FC24;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A0FC34;
	sub_825952B8(ctx, base);
loc_82A0FC34:
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

__attribute__((alias("__imp__sub_82A0FC50"))) PPC_WEAK_FUNC(sub_82A0FC50);
PPC_FUNC_IMPL(__imp__sub_82A0FC50) {
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r3,r7,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lbz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stb r5,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r5.u8);
	// lhz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lhz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// sth r8,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r8.u16);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_82A0FD6C:
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
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82a0fd6c
	if (!cr0.eq) goto loc_82A0FD6C;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// addi r4,r30,484
	ctx.r4.s64 = ctx.r30.s64 + 484;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r10,476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// lwz r9,480(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x82A0FDBC;
	sub_831CE980(ctx, base);
	// lwz r8,536(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82A0FDE0"))) PPC_WEAK_FUNC(sub_82A0FDE0);
PPC_FUNC_IMPL(__imp__sub_82A0FDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A0FDF4:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r7,-24(r11)
	PPC_STORE_U8(ctx.r11.u32 + -24, ctx.r7.u8);
	// lbz r6,9(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r6,-23(r11)
	PPC_STORE_U8(ctx.r11.u32 + -23, ctx.r6.u8);
	// lbz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r5,-22(r11)
	PPC_STORE_U8(ctx.r11.u32 + -22, ctx.r5.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,-21(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21, ctx.r7.u8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r5,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// lbz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r7,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r7.u8);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r5,33(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbz r9,34(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r7,35(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lbz r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// stb r6,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r6.u8);
	// lbz r5,57(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// stb r5,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r5.u8);
	// lbz r9,58(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 58);
	// stb r9,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r9.u8);
	// lbz r7,59(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 59);
	// stb r7,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r7.u8);
	// lwz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lbz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lwz r6,76(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lbz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// stb r6,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r6.u8);
	// lbz r5,81(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// stb r5,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r5.u8);
	// lbz r9,82(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 82);
	// stb r9,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r9.u8);
	// lbz r7,83(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 83);
	// stb r7,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r7.u8);
	// lwz r6,84(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,88(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// lbz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 92);
	// stb r9,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r9.u8);
	// lwz r7,96(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// lwz r6,100(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lbz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// stb r6,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r6.u8);
	// lbz r5,105(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// stb r5,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r5.u8);
	// lbz r9,106(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 106);
	// stb r9,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r9.u8);
	// lbz r7,107(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 107);
	// stb r7,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r7.u8);
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r5,112(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lbz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 116);
	// stb r9,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r9.u8);
	// lwzu r9,120(r10)
	ea = 120 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x82a0fdf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A0FDF4;
	// lwz r11,720(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r10,720(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r10.u32);
	// lwz r9,720(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// rlwimi r9,r10,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r9.u32);
	// lbz r8,724(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 724);
	// stb r8,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r8.u8);
	// lbz r7,725(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 725);
	// stb r7,725(r3)
	PPC_STORE_U8(ctx.r3.u32 + 725, ctx.r7.u8);
	// lbz r6,726(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 726);
	// stb r6,726(r3)
	PPC_STORE_U8(ctx.r3.u32 + 726, ctx.r6.u8);
	// lbz r5,727(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 727);
	// stb r5,727(r3)
	PPC_STORE_U8(ctx.r3.u32 + 727, ctx.r5.u8);
	// lwz r11,728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// stw r11,728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 728, ctx.r11.u32);
	// lwz r10,732(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 732);
	// stw r10,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r10.u32);
	// lbz r9,736(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 736);
	// stb r9,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r9.u8);
	// lwz r8,740(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 740);
	// stw r8,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1003C"))) PPC_WEAK_FUNC(sub_82A1003C);
PPC_FUNC_IMPL(__imp__sub_82A1003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10040"))) PPC_WEAK_FUNC(sub_82A10040);
PPC_FUNC_IMPL(__imp__sub_82A10040) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lhz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lhz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r5,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r5.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// lhz r9,18(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A100E4"))) PPC_WEAK_FUNC(sub_82A100E4);
PPC_FUNC_IMPL(__imp__sub_82A100E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A100E8"))) PPC_WEAK_FUNC(sub_82A100E8);
PPC_FUNC_IMPL(__imp__sub_82A100E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lhz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// sth r9,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r9.u16);
	// lbz r8,46(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// stb r8,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r8.u8);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1018C"))) PPC_WEAK_FUNC(sub_82A1018C);
PPC_FUNC_IMPL(__imp__sub_82A1018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10190"))) PPC_WEAK_FUNC(sub_82A10190);
PPC_FUNC_IMPL(__imp__sub_82A10190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r6,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r6.u8);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lwz r5,36(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lhz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
	// lbz r10,62(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 62);
	// stb r10,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r10.u8);
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lbz r8,68(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// stb r8,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r8.u8);
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r5,84(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// lwz r9,84(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r5,88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lhz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 112);
	// sth r6,112(r3)
	PPC_STORE_U16(ctx.r3.u32 + 112, ctx.r6.u16);
	// lbz r5,114(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 114);
	// stb r5,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r5.u8);
	// lwz r4,116(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A102FC"))) PPC_WEAK_FUNC(sub_82A102FC);
PPC_FUNC_IMPL(__imp__sub_82A102FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10300"))) PPC_WEAK_FUNC(sub_82A10300);
PPC_FUNC_IMPL(__imp__sub_82A10300) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// lbz r7,6(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// stb r7,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// lbz r6,7(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// stb r6,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r6.u8);
	// bl 0x82a0fc50
	ctx.lr = 0x82A10358;
	sub_82A0FC50(ctx, base);
	// lwz r5,548(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// stw r5,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r5.u32);
	// lwz r4,552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// stw r4,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r4.u32);
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// stw r3,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A1038C"))) PPC_WEAK_FUNC(sub_82A1038C);
PPC_FUNC_IMPL(__imp__sub_82A1038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10390"))) PPC_WEAK_FUNC(sub_82A10390);
PPC_FUNC_IMPL(__imp__sub_82A10390) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
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
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x82a0fde0
	ctx.lr = 0x82A10418;
	sub_82A0FDE0(ctx, base);
	// lwz r4,768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r30,768
	ctx.r10.s64 = ctx.r30.s64 + 768;
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// addi r11,r31,768
	ctx.r11.s64 = ctx.r31.s64 + 768;
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r4.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r11,r30,844
	ctx.r11.s64 = ctx.r30.s64 + 844;
	// addi r10,r31,844
	ctx.r10.s64 = ctx.r31.s64 + 844;
	// lwz r9,768(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r9.u32);
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// lbz r9,780(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 780);
	// stb r9,780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 780, ctx.r9.u8);
	// lbz r8,781(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 781);
	// stb r8,781(r31)
	PPC_STORE_U8(ctx.r31.u32 + 781, ctx.r8.u8);
	// lwz r6,784(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// lwz r5,784(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r5.u32);
	// lwz r3,788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// stw r3,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r3.u32);
	// lwz r9,792(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// stw r9,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r9.u32);
	// lbz r8,796(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 796);
	// stb r8,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r8.u8);
	// lbz r7,797(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 797);
	// stb r7,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r7.u8);
	// lwz r6,800(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r6.u32);
	// lwz r4,800(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r4.u32);
	// lwz r9,804(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// stw r9,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// lwz r8,808(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// stw r8,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r8.u32);
	// lbz r7,812(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 812);
	// stb r7,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r7.u8);
	// lbz r6,813(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 813);
	// stb r6,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r6.u8);
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r5,816(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r3.u32);
	// lwz r8,820(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// stw r8,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r8.u32);
	// lwz r7,824(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r7,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r7.u32);
	// lbz r6,828(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 828);
	// stb r6,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r6.u8);
	// lbz r5,829(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 829);
	// stb r5,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r5.u8);
	// lwz r4,832(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r4.u32);
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r9.u32);
	// lwz r7,836(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r7,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r7.u32);
	// lwz r6,840(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// stw r6,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r6.u32);
	// lbz r5,844(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 844);
	// stb r5,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r5.u8);
	// lbz r4,845(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 845);
	// stb r4,845(r31)
	PPC_STORE_U8(ctx.r31.u32 + 845, ctx.r4.u8);
loc_82A10578:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a10578
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A10578;
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

__attribute__((alias("__imp__sub_82A105A0"))) PPC_WEAK_FUNC(sub_82A105A0);
PPC_FUNC_IMPL(__imp__sub_82A105A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 + 44;
	// addi r11,r3,50
	ctx.r11.s64 = ctx.r3.s64 + 50;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
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
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// lhz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r7,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r7.u16);
	// lhz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r6,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r6.u16);
	// lhz r5,22(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// sth r5,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r5.u16);
	// lhz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r9,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r9.u16);
	// lhz r7,26(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// sth r7,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r7.u16);
	// lhz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// sth r6,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r6.u16);
	// lhz r5,30(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// sth r5,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r5.u16);
	// lhz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// sth r9,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r9.u16);
	// lhz r7,34(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// sth r7,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r7.u16);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
loc_82A10674:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lhz r6,18(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// lhz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r5,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r5.u16);
	// lhz r4,22(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// sth r4,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r4.u16);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r9,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r9.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r7.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r4.u32);
	// lwz r7,26(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r5.u32);
	// lwzu r9,36(r10)
	ea = 36 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,30(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30, ctx.r9.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x82a10674
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A10674;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A10720"))) PPC_WEAK_FUNC(sub_82A10720);
PPC_FUNC_IMPL(__imp__sub_82A10720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r5,36(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lhz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 48);
	// sth r7,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r7.u16);
	// lbz r6,50(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 50);
	// stb r6,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r6.u8);
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lwz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lbz r6,68(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// stb r6,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r6.u8);
	// lbz r5,69(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 69);
	// stb r5,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r5.u8);
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lbz r8,76(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// stb r8,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r8.u8);
	// lfs f13,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lwz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// lwz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r5,92(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lwz r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lwz r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// lwz r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// lwz r5,108(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// lhz r7,120(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 120);
	// sth r7,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r7.u16);
	// lbz r6,122(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 122);
	// stb r6,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r6.u8);
	// lwz r5,124(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// lwz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// lwz r8,132(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// lwz r7,136(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// lbz r6,140(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 140);
	// stb r6,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r6.u8);
	// lbz r5,141(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 141);
	// stb r5,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r5.u8);
	// lwz r9,144(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r9,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r9.u32);
	// lbz r8,148(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 148);
	// stb r8,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r8.u8);
	// lfs f12,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lwz r7,156(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
	// lwz r6,160(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r5,164(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r5.u32);
	// lwz r8,164(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r8.u32);
	// lwz r6,168(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// lwz r5,168(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// lwz r7,172(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r7,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// lwz r6,176(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r6,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r6.u32);
	// lwz r5,180(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r5,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// lwz r9,184(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r9,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// lwz r8,188(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// lhz r7,192(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 192);
	// sth r7,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r7.u16);
	// lbz r6,194(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 194);
	// stb r6,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, ctx.r6.u8);
	// lwz r5,196(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r5,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r5.u32);
	// lwz r9,200(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// lwz r8,204(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r8,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r7,208(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r7,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lbz r6,212(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 212);
	// stb r6,212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 212, ctx.r6.u8);
	// lbz r5,213(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 213);
	// stb r5,213(r3)
	PPC_STORE_U8(ctx.r3.u32 + 213, ctx.r5.u8);
	// lwz r9,216(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r9,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// lbz r8,220(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 220);
	// stb r8,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, ctx.r8.u8);
	// lfs f11,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,224(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r7,228(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// lwz r6,232(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r6,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r6.u32);
	// lwz r5,236(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,236(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,236(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r8.u32);
	// lwz r6,240(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r5,240(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r9,240(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// lwz r7,244(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r7,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r7.u32);
	// lwz r6,248(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// stw r6,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r6.u32);
	// lwz r5,252(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r5,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r5.u32);
	// lwz r9,256(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// lwz r8,260(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r8,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r8.u32);
	// lhz r7,264(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 264);
	// sth r7,264(r3)
	PPC_STORE_U16(ctx.r3.u32 + 264, ctx.r7.u16);
	// lbz r6,266(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 266);
	// stb r6,266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 266, ctx.r6.u8);
	// lwz r5,268(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// lwz r9,272(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// lwz r8,276(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// stw r8,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r8.u32);
	// lwz r7,280(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// lbz r6,284(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 284);
	// stb r6,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r6.u8);
	// lbz r5,285(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 285);
	// stb r5,285(r3)
	PPC_STORE_U8(ctx.r3.u32 + 285, ctx.r5.u8);
	// lwz r9,288(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// stw r9,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r9.u32);
	// lbz r8,292(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 292);
	// stb r8,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r8.u8);
	// lfs f10,296(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,296(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// lwz r7,300(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	// stw r7,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r7.u32);
	// lwz r6,304(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// stw r6,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r6.u32);
	// lwz r5,308(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r9,308(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r9.u32);
	// lwz r8,308(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r8.u32);
	// lwz r5,312(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r6,312(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r6.u32);
	// lwz r9,312(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// lwz r7,316(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// lwz r6,320(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 320);
	// stw r6,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r6.u32);
	// lwz r5,324(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	// stw r5,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r5.u32);
	// lwz r9,328(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// lwz r8,332(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// stw r8,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r8.u32);
	// lhz r7,336(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 336);
	// sth r7,336(r3)
	PPC_STORE_U16(ctx.r3.u32 + 336, ctx.r7.u16);
	// lbz r6,338(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 338);
	// stb r6,338(r3)
	PPC_STORE_U8(ctx.r3.u32 + 338, ctx.r6.u8);
	// lwz r5,340(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// stw r5,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r5.u32);
	// lwz r9,344(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// stw r9,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r9.u32);
	// lwz r8,348(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	// stw r8,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r8.u32);
	// lwz r7,352(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	// stw r7,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r7.u32);
	// lbz r6,356(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 356);
	// stb r6,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r6.u8);
	// lbz r5,357(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 357);
	// stb r5,357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 357, ctx.r5.u8);
	// lwz r9,360(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// stw r9,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r9.u32);
	// lbz r8,364(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 364);
	// stb r8,364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 364, ctx.r8.u8);
	// lfs f9,368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,368(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// lwz r7,372(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// stw r7,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r7.u32);
	// lwz r6,376(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	// stw r6,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r6.u32);
	// lwz r9,380(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// lwz r5,380(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,380(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r8.u32);
	// lwz r5,384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// lwz r6,384(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r6.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,384(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// lwz r7,388(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// stw r7,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r7.u32);
	// lwz r6,392(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 392);
	// stw r6,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r6.u32);
	// lwz r5,396(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// stw r5,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r5.u32);
	// lwz r9,400(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 400);
	// stw r9,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r9.u32);
	// lwz r8,404(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 404);
	// stw r8,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r8.u32);
	// lhz r7,408(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 408);
	// sth r7,408(r3)
	PPC_STORE_U16(ctx.r3.u32 + 408, ctx.r7.u16);
	// lbz r6,410(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 410);
	// stb r6,410(r3)
	PPC_STORE_U8(ctx.r3.u32 + 410, ctx.r6.u8);
	// lwz r5,412(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 412);
	// stw r5,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r5.u32);
	// lwz r9,416(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// lwz r8,420(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// stw r8,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r8.u32);
	// lwz r7,424(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 424);
	// stw r7,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r7.u32);
	// lbz r6,428(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 428);
	// stb r6,428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 428, ctx.r6.u8);
	// lbz r5,429(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 429);
	// stb r5,429(r3)
	PPC_STORE_U8(ctx.r3.u32 + 429, ctx.r5.u8);
	// lwz r9,432(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// stw r9,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r9.u32);
	// lbz r8,436(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 436);
	// stb r8,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, ctx.r8.u8);
	// lfs f8,440(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,440(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// lwz r7,444(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 444);
	// stw r7,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r7.u32);
	// lwz r6,448(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// stw r6,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r6.u32);
	// lwz r5,452(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// lwz r9,452(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 452);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,452(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 452);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r7.u32);
	// lwz r5,456(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r6,456(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 456);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r6.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,456(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 456);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r9.u32);
	// lwz r7,460(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// stw r7,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r7.u32);
	// lwz r6,464(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// lwz r5,468(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// stw r5,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// lwz r9,472(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 472);
	// stw r9,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// lwz r8,476(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r8,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r8.u32);
	// lhz r7,480(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 480);
	// sth r7,480(r3)
	PPC_STORE_U16(ctx.r3.u32 + 480, ctx.r7.u16);
	// lbz r6,482(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 482);
	// stb r6,482(r3)
	PPC_STORE_U8(ctx.r3.u32 + 482, ctx.r6.u8);
	// lwz r5,484(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 484);
	// stw r5,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r5.u32);
	// lwz r9,488(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// stw r9,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r9.u32);
	// lwz r8,492(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 492);
	// stw r8,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r8.u32);
	// lwz r7,496(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// stw r7,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r7.u32);
	// lbz r6,500(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 500);
	// stb r6,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r6.u8);
	// lbz r5,501(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 501);
	// stb r5,501(r3)
	PPC_STORE_U8(ctx.r3.u32 + 501, ctx.r5.u8);
	// lwz r9,504(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// stw r9,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lbz r8,508(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 508);
	// stb r8,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r8.u8);
	// lfs f7,512(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 512);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,512(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// lwz r7,516(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// stw r7,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r7.u32);
	// lwz r6,520(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// stw r6,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r6.u32);
	// lwz r5,524(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lwz r9,524(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r9.u32);
	// lwz r8,524(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r8.u32);
	// lwz r5,528(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lwz r6,528(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 528);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r6.u32);
	// lwz r9,528(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 528);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r9.u32);
	// lwz r7,532(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 532);
	// stw r7,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r7.u32);
	// lwz r6,536(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 536);
	// stw r6,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r6.u32);
	// lwz r5,540(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	// stw r5,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r5.u32);
	// lwz r9,544(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 544);
	// stw r9,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r9.u32);
	// lwz r8,548(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 548);
	// stw r8,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r8.u32);
	// lhz r7,552(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 552);
	// sth r7,552(r3)
	PPC_STORE_U16(ctx.r3.u32 + 552, ctx.r7.u16);
	// lbz r6,554(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 554);
	// stb r6,554(r3)
	PPC_STORE_U8(ctx.r3.u32 + 554, ctx.r6.u8);
	// addi r11,r4,724
	ctx.r11.s64 = ctx.r4.s64 + 724;
	// addi r11,r3,724
	ctx.r11.s64 = ctx.r3.s64 + 724;
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r5,556(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 556);
	// stw r5,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r5.u32);
	// lwz r11,560(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 560);
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// lwz r9,564(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 564);
	// stw r9,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r9.u32);
	// lwz r8,568(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 568);
	// stw r8,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r8.u32);
	// lbz r7,572(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 572);
	// stb r7,572(r3)
	PPC_STORE_U8(ctx.r3.u32 + 572, ctx.r7.u8);
	// lbz r6,573(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 573);
	// stb r6,573(r3)
	PPC_STORE_U8(ctx.r3.u32 + 573, ctx.r6.u8);
	// lwz r5,576(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 576);
	// stw r5,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r5.u32);
	// lbz r11,580(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 580);
	// stb r11,580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 580, ctx.r11.u8);
	// lfs f6,584(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 584);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,584(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 584, temp.u32);
	// lwz r9,588(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 588);
	// stw r9,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r9.u32);
	// lwz r8,592(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 592);
	// stw r8,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r8.u32);
	// lwz r7,596(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// lwz r6,596(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 596);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,596(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 596);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r5.u32);
	// lwz r9,600(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// lwz r8,600(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,600(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r6.u32);
	// lwz r5,604(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 604);
	// stw r5,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r5.u32);
	// lwz r11,608(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	// stw r11,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r11.u32);
	// lwz r9,612(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 612);
	// stw r9,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r9.u32);
	// lwz r8,616(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 616);
	// stw r8,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, ctx.r8.u32);
	// lwz r7,620(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	// stw r7,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r7.u32);
	// lhz r6,624(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 624);
	// sth r6,624(r3)
	PPC_STORE_U16(ctx.r3.u32 + 624, ctx.r6.u16);
	// lbz r5,626(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 626);
	// stb r5,626(r3)
	PPC_STORE_U8(ctx.r3.u32 + 626, ctx.r5.u8);
	// lwz r11,628(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	// stw r11,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r11.u32);
	// lwz r9,632(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// stw r9,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r9.u32);
	// lwz r8,636(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// stw r8,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r8.u32);
	// lwz r7,640(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 640);
	// stw r7,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r7.u32);
	// lbz r6,644(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 644);
	// stb r6,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r6.u8);
	// lbz r5,645(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 645);
	// stb r5,645(r3)
	PPC_STORE_U8(ctx.r3.u32 + 645, ctx.r5.u8);
	// lwz r11,648(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// stw r11,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r11.u32);
	// lbz r9,652(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 652);
	// stb r9,652(r3)
	PPC_STORE_U8(ctx.r3.u32 + 652, ctx.r9.u8);
	// lfs f5,656(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 656);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,656(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 656, temp.u32);
	// lwz r8,660(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 660);
	// stw r8,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r8.u32);
	// lwz r7,664(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 664);
	// stw r7,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r7.u32);
	// lwz r6,668(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r5,668(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 668);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,668(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 668);
	// rlwimi r10,r7,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r10.u32);
	// lwz r5,672(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,672(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 672);
	// addi r9,r4,796
	ctx.r9.s64 = ctx.r4.s64 + 796;
	// addi r8,r3,796
	ctx.r8.s64 = ctx.r3.s64 + 796;
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r6.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,672(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 672);
	// rlwimi r10,r7,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r6,676(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 676);
	// stw r6,676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 676, ctx.r6.u32);
	// lwz r5,680(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 680);
	// stw r5,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r5.u32);
	// lwz r10,684(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// stw r10,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r10.u32);
	// lwz r7,688(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 688);
	// stw r7,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r7.u32);
	// lwz r6,692(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 692);
	// stw r6,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r6.u32);
	// lhz r5,696(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 696);
	// sth r5,696(r3)
	PPC_STORE_U16(ctx.r3.u32 + 696, ctx.r5.u16);
	// lbz r10,698(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 698);
	// stb r10,698(r3)
	PPC_STORE_U8(ctx.r3.u32 + 698, ctx.r10.u8);
	// lwz r7,700(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 700);
	// stw r7,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r7.u32);
	// lwz r6,704(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	// stw r6,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r6.u32);
	// lwz r5,708(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 708);
	// stw r5,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r5.u32);
	// lwz r10,712(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 712);
	// stw r10,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r10.u32);
	// lbz r7,716(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 716);
	// stb r7,716(r3)
	PPC_STORE_U8(ctx.r3.u32 + 716, ctx.r7.u8);
	// lbz r6,717(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 717);
	// stb r6,717(r3)
	PPC_STORE_U8(ctx.r3.u32 + 717, ctx.r6.u8);
	// lwz r5,720(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// stw r5,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r5.u32);
	// lbz r10,724(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 724);
	// stb r10,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r10.u8);
	// lfs f4,728(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,728(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 728, temp.u32);
	// lwz r7,732(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 732);
	// stw r7,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r7.u32);
	// lwz r6,736(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 736);
	// stw r6,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r6.u32);
	// lwz r10,740(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 740);
	// lwz r5,740(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// rlwimi r5,r10,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r5.u32);
	// lwz r7,740(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 740);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r5.u32);
	// lwz r6,744(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// lwz r5,744(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r7,744(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r7.u32);
	// lwz r6,748(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 748);
	// stw r6,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r6.u32);
	// lwz r5,752(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 752);
	// stw r5,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r5.u32);
	// lwz r10,756(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 756);
	// stw r10,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r10.u32);
	// lwz r7,760(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 760);
	// stw r7,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r7.u32);
	// lwz r6,764(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 764);
	// stw r6,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r6.u32);
	// lhz r5,768(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 768);
	// sth r5,768(r3)
	PPC_STORE_U16(ctx.r3.u32 + 768, ctx.r5.u16);
	// lbz r10,770(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 770);
	// stb r10,770(r3)
	PPC_STORE_U8(ctx.r3.u32 + 770, ctx.r10.u8);
	// lwz r7,772(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 772);
	// stw r7,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r7.u32);
	// lwz r6,776(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 776);
	// stw r6,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, ctx.r6.u32);
	// lwz r5,780(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 780);
	// stw r5,780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 780, ctx.r5.u32);
	// lwz r10,784(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 784);
	// stw r10,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r10.u32);
	// lbz r7,788(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 788);
	// stb r7,788(r3)
	PPC_STORE_U8(ctx.r3.u32 + 788, ctx.r7.u8);
	// lbz r6,789(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 789);
	// stb r6,789(r3)
	PPC_STORE_U8(ctx.r3.u32 + 789, ctx.r6.u8);
	// lwz r5,792(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 792);
	// stw r5,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r5.u32);
loc_82A11038:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a11038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11038;
	// lbz r11,809(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 809);
	// stb r11,809(r3)
	PPC_STORE_U8(ctx.r3.u32 + 809, ctx.r11.u8);
	// lwz r10,812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 812);
	// lwz r9,812(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 812);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r10.u32);
	// lwz r8,812(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 812);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r8.u32);
	// lwz r7,816(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// lwz r6,816(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// lwz r11,816(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// rlwimi r11,r5,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r11.u32);
	// lhz r10,820(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 820);
	// sth r10,820(r3)
	PPC_STORE_U16(ctx.r3.u32 + 820, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A11098"))) PPC_WEAK_FUNC(sub_82A11098);
PPC_FUNC_IMPL(__imp__sub_82A11098) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
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
	// bl 0x82a0fde0
	ctx.lr = 0x82A110E0;
	sub_82A0FDE0(ctx, base);
	// addi r4,r30,760
	ctx.r4.s64 = ctx.r30.s64 + 760;
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82a0fde0
	ctx.lr = 0x82A110EC;
	sub_82A0FDE0(ctx, base);
	// li r9,576
	ctx.r9.s64 = 576;
	// addi r10,r30,1500
	ctx.r10.s64 = ctx.r30.s64 + 1500;
	// addi r11,r31,1506
	ctx.r11.s64 = ctx.r31.s64 + 1506;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11100:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,9(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r4,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r3,11(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r6,14(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// lbz r5,15(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r5,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r5.u8);
	// lbz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r4,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r4.u8);
	// lbz r3,17(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// stb r3,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r3.u8);
	// lbz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r4.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r9.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r6.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r5,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r5.u32);
	// lwzu r9,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r9.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82a11100
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11100;
	// lhz r10,19936(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19936);
	// addi r11,r30,19936
	ctx.r11.s64 = ctx.r30.s64 + 19936;
	// addi r11,r31,19936
	ctx.r11.s64 = ctx.r31.s64 + 19936;
	// addi r4,r30,19968
	ctx.r4.s64 = ctx.r30.s64 + 19968;
	// addi r3,r31,19968
	ctx.r3.s64 = ctx.r31.s64 + 19968;
	// li r5,3496
	ctx.r5.s64 = 3496;
	// sth r10,19936(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19936, ctx.r10.u16);
	// lhz r9,19938(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19938);
	// sth r9,19938(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19938, ctx.r9.u16);
	// lbz r8,19940(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19940);
	// stb r8,19940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19940, ctx.r8.u8);
	// lbz r7,19941(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19941);
	// stb r7,19941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19941, ctx.r7.u8);
	// lbz r6,19942(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19942);
	// stb r6,19942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19942, ctx.r6.u8);
	// lbz r11,19943(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19943);
	// stb r11,19943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19943, ctx.r11.u8);
	// lbz r10,19944(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19944);
	// stb r10,19944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19944, ctx.r10.u8);
	// lbz r9,19945(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19945);
	// stb r9,19945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19945, ctx.r9.u8);
	// lbz r8,19946(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19946);
	// stb r8,19946(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19946, ctx.r8.u8);
	// lbz r7,19947(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19947);
	// stb r7,19947(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19947, ctx.r7.u8);
	// lbz r6,19948(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19948);
	// stb r6,19948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19948, ctx.r6.u8);
	// lbz r11,19949(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19949);
	// stb r11,19949(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19949, ctx.r11.u8);
	// lbz r10,19950(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19950);
	// stb r10,19950(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19950, ctx.r10.u8);
	// lwz r8,19952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19952);
	// lwz r9,19952(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19952);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,19952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19952, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,19952(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19952);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,19952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19952, ctx.r7.u32);
	// lwz r11,19956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19956);
	// lwz r10,19956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19956);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,19956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19956, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,19956(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19956);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,19956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19956, ctx.r9.u32);
	// lwz r7,19960(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19960);
	// stw r7,19960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19960, ctx.r7.u32);
	// lwz r6,19964(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19964);
	// stw r6,19964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19964, ctx.r6.u32);
	// bl 0x831ce980
	ctx.lr = 0x82A11290;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82A112AC"))) PPC_WEAK_FUNC(sub_82A112AC);
PPC_FUNC_IMPL(__imp__sub_82A112AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A112B0"))) PPC_WEAK_FUNC(sub_82A112B0);
PPC_FUNC_IMPL(__imp__sub_82A112B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_82A112D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a112d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A112D0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A112EC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a112ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A112EC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 + 52;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11308:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11308;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11324:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11324;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11340:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11340
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11340;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,124
	ctx.r11.s64 = ctx.r4.s64 + 124;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A1135C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1135c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1135C;
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// addi r11,r4,152
	ctx.r11.s64 = ctx.r4.s64 + 152;
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// lwz r9,156(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lwz r8,160(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lhz r7,164(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 164);
	// sth r7,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r7.u16);
	// lhz r6,166(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 166);
	// sth r6,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r6.u16);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r5,168(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// lwz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lwz r8,172(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// lbz r7,176(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 176);
	// stb r7,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r7.u8);
	// lwz r6,180(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r6,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r5,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// lwz r11,188(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lwz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// lwz r8,200(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// lwz r7,204(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r7,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A11408"))) PPC_WEAK_FUNC(sub_82A11408);
PPC_FUNC_IMPL(__imp__sub_82A11408) {
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
	// bl 0x82a10190
	ctx.lr = 0x82A11428;
	sub_82A10190(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,120
	ctx.r11.s64 = ctx.r30.s64 + 120;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r11,r31,154
	ctx.r11.s64 = ctx.r31.s64 + 154;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lhz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// lhz r7,122(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// sth r7,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r7.u16);
	// lhz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// sth r6,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r6.u16);
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// sth r5,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r5.u16);
	// lhz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 128);
	// sth r4,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r4.u16);
	// lhz r3,130(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 130);
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// lhz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// sth r9,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r9.u16);
	// lhz r7,134(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 134);
	// sth r7,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r7.u16);
	// lhz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 136);
	// sth r6,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r6.u16);
	// lhz r5,138(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 138);
	// sth r5,138(r31)
	PPC_STORE_U16(ctx.r31.u32 + 138, ctx.r5.u16);
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lwz r7,144(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// lwz r5,148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_82A114DC:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// lhz r3,14(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// sth r3,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r3.u16);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r9,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lhz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// lhz r5,22(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// sth r5,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r5.u16);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r4.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r6.u32);
	// lwz r4,26(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r4.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r3,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r9.u32);
	// lwzu r9,36(r10)
	ea = 36 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,30(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30, ctx.r9.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x82a114dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A114DC;
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

__attribute__((alias("__imp__sub_82A115A0"))) PPC_WEAK_FUNC(sub_82A115A0);
PPC_FUNC_IMPL(__imp__sub_82A115A0) {
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
	// bl 0x82a10190
	ctx.lr = 0x82A115C0;
	sub_82A10190(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lbz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r5,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r5.u8);
	// lbz r4,145(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
	// stb r4,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_82A1161C"))) PPC_WEAK_FUNC(sub_82A1161C);
PPC_FUNC_IMPL(__imp__sub_82A1161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A11620"))) PPC_WEAK_FUNC(sub_82A11620);
PPC_FUNC_IMPL(__imp__sub_82A11620) {
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
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A11654;
	sub_831CE420(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A11670"))) PPC_WEAK_FUNC(sub_82A11670);
PPC_FUNC_IMPL(__imp__sub_82A11670) {
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
	// bl 0x82a11098
	ctx.lr = 0x82A11690;
	sub_82A11098(ctx, base);
	// lbz r9,23464(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23464);
	// addi r11,r31,23472
	ctx.r11.s64 = ctx.r31.s64 + 23472;
	// addi r10,r30,23472
	ctx.r10.s64 = ctx.r30.s64 + 23472;
	// addi r11,r30,23632
	ctx.r11.s64 = ctx.r30.s64 + 23632;
	// addi r10,r31,23632
	ctx.r10.s64 = ctx.r31.s64 + 23632;
	// stb r9,23464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23464, ctx.r9.u8);
	// lbz r8,23465(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23465);
	// stb r8,23465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23465, ctx.r8.u8);
	// lbz r7,23466(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23466);
	// stb r7,23466(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23466, ctx.r7.u8);
	// lbz r6,23467(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23467);
	// stb r6,23467(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23467, ctx.r6.u8);
	// lbz r5,23468(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23468);
	// stb r5,23468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23468, ctx.r5.u8);
	// lwz r4,23472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23472);
	// lwz r3,23472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23472);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,23472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23472, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,23472(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23472);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23472, ctx.r9.u32);
	// lwz r7,23488(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23488);
	// lwz r6,23476(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23476);
	// stw r6,23476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23476, ctx.r6.u32);
	// lwz r5,23480(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23480);
	// stw r5,23480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23480, ctx.r5.u32);
	// lbz r4,23484(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23484);
	// stb r4,23484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23484, ctx.r4.u8);
	// lbz r3,23485(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23485);
	// stb r3,23485(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23485, ctx.r3.u8);
	// lwz r9,23488(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23488);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,23488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23488, ctx.r9.u32);
	// lwz r8,23488(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23488);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,23488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23488, ctx.r8.u32);
	// lwz r6,23492(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23492);
	// stw r6,23492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23492, ctx.r6.u32);
	// lwz r5,23496(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23496);
	// stw r5,23496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23496, ctx.r5.u32);
	// lbz r4,23500(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23500);
	// stb r4,23500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23500, ctx.r4.u8);
	// lbz r3,23501(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23501);
	// stb r3,23501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23501, ctx.r3.u8);
	// lwz r8,23504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23504);
	// lwz r9,23504(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23504);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23504, ctx.r9.u32);
	// lwz r7,23504(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23504);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23504, ctx.r7.u32);
	// lwz r5,23508(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23508);
	// stw r5,23508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23508, ctx.r5.u32);
	// lwz r4,23512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23512);
	// stw r4,23512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23512, ctx.r4.u32);
	// lbz r3,23516(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23516);
	// stb r3,23516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23516, ctx.r3.u8);
	// lbz r9,23517(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23517);
	// stb r9,23517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23517, ctx.r9.u8);
	// lwz r8,23520(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23520);
	// lwz r7,23520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23520);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r8.u32);
	// lwz r6,23520(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23520);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r6.u32);
	// lwz r4,23524(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23524);
	// stw r4,23524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23524, ctx.r4.u32);
	// lwz r3,23528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23528);
	// stw r3,23528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23528, ctx.r3.u32);
	// lbz r9,23532(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23532);
	// stb r9,23532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23532, ctx.r9.u8);
	// lbz r8,23533(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23533);
	// stb r8,23533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23533, ctx.r8.u8);
	// lwz r6,23536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23536);
	// lwz r7,23536(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23536);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,23536(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23536);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r4.u32);
	// lwz r3,23540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23540);
	// stw r3,23540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23540, ctx.r3.u32);
	// lwz r9,23544(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23544);
	// stw r9,23544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23544, ctx.r9.u32);
	// lbz r8,23548(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23548);
	// stb r8,23548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23548, ctx.r8.u8);
	// lbz r7,23549(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23549);
	// stb r7,23549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23549, ctx.r7.u8);
	// lwz r6,23552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23552);
	// lwz r5,23552(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23552);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r5.u32);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,23552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23552);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r3.u32);
	// lwz r9,23556(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23556);
	// stw r9,23556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23556, ctx.r9.u32);
	// lwz r8,23560(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23560);
	// stw r8,23560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23560, ctx.r8.u32);
	// lbz r7,23564(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23564);
	// stb r7,23564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23564, ctx.r7.u8);
	// lbz r6,23565(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23565);
	// stb r6,23565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23565, ctx.r6.u8);
	// lwz r4,23568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23568);
	// lwz r5,23568(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23568);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23568, ctx.r5.u32);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,23568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23568);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,23568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23568, ctx.r3.u32);
	// lwz r8,23572(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23572);
	// stw r8,23572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23572, ctx.r8.u32);
	// lwz r7,23576(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23576);
	// stw r7,23576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23576, ctx.r7.u32);
	// lbz r6,23580(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23580);
	// stb r6,23580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23580, ctx.r6.u8);
	// lbz r5,23581(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23581);
	// stb r5,23581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23581, ctx.r5.u8);
	// lwz r3,23584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23584);
	// lwz r4,23584(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23584);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23584, ctx.r4.u32);
	// lwz r8,23584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23584);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23584, ctx.r8.u32);
	// lwz r7,23588(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23588);
	// stw r7,23588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23588, ctx.r7.u32);
	// lwz r6,23592(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23592);
	// stw r6,23592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23592, ctx.r6.u32);
	// lbz r5,23596(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23596);
	// stb r5,23596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23596, ctx.r5.u8);
	// lbz r4,23597(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23597);
	// stb r4,23597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23597, ctx.r4.u8);
	// lwz r9,23600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23600);
	// lwz r3,23600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23600);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,23600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23600, ctx.r3.u32);
	// lwz r7,23600(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23600);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,23600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23600, ctx.r7.u32);
	// lwz r6,23604(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23604);
	// stw r6,23604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23604, ctx.r6.u32);
	// lwz r5,23608(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23608);
	// stw r5,23608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23608, ctx.r5.u32);
	// lbz r4,23612(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23612);
	// stb r4,23612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23612, ctx.r4.u8);
	// lbz r3,23613(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23613);
	// stb r3,23613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23613, ctx.r3.u8);
	// lwz r9,23616(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23616);
	// lwz r8,23616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23616);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,23616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23616, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r6,23616(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23616);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23616, ctx.r6.u32);
	// lwz r5,23620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23620);
	// stw r5,23620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23620, ctx.r5.u32);
	// lwz r4,23624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23624);
	// stw r4,23624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23624, ctx.r4.u32);
	// lbz r3,23628(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23628);
	// stb r3,23628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23628, ctx.r3.u8);
	// lbz r9,23629(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23629);
	// stb r9,23629(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23629, ctx.r9.u8);
	// lwz r7,23632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23632);
	// lwz r8,23632(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23632);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,23632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23632, ctx.r8.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,23632(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23632);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23632, ctx.r6.u32);
	// lwz r4,23636(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23636);
	// stw r4,23636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23636, ctx.r4.u32);
	// lwz r3,23640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23640);
	// stw r3,23640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23640, ctx.r3.u32);
	// lbz r9,23644(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23644);
	// stb r9,23644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23644, ctx.r9.u8);
	// lwz r8,23648(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
	// lbz r7,23645(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23645);
	// stb r7,23645(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23645, ctx.r7.u8);
	// lwz r6,23648(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23648);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23648, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,23648(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23648);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,23648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23648, ctx.r5.u32);
	// lwz r3,23652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23652);
	// stw r3,23652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23652, ctx.r3.u32);
	// lwz r9,23656(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23656);
	// stw r9,23656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23656, ctx.r9.u32);
	// lbz r8,23660(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23660);
	// stb r8,23660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23660, ctx.r8.u8);
	// lbz r7,23661(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23661);
	// stb r7,23661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23661, ctx.r7.u8);
	// lwz r6,23664(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23664);
	// lwz r5,23664(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23664);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23664, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,23664(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23664);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,23664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23664, ctx.r4.u32);
	// lwz r9,23668(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23668);
	// stw r9,23668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23668, ctx.r9.u32);
	// lwz r8,23672(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23672);
	// stw r8,23672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23672, ctx.r8.u32);
	// lbz r7,23676(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23676);
	// stb r7,23676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23676, ctx.r7.u8);
	// lbz r6,23677(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23677);
	// stb r6,23677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23677, ctx.r6.u8);
	// lwz r4,23680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
	// lwz r5,23680(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23680);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23680, ctx.r5.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r9,23680(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23680);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23680, ctx.r9.u32);
	// lwz r8,23684(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23684);
	// stw r8,23684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23684, ctx.r8.u32);
	// lwz r7,23688(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23688);
	// stw r7,23688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23688, ctx.r7.u32);
	// lbz r6,23692(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23692);
	// stb r6,23692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23692, ctx.r6.u8);
	// lbz r5,23693(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23693);
	// stb r5,23693(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23693, ctx.r5.u8);
	// lwz r4,23696(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23696);
	// lwz r3,23696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23696);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// addi r3,r31,23800
	ctx.r3.s64 = ctx.r31.s64 + 23800;
	// stw r4,23696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23696, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,23696(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23696);
	// addi r4,r30,23800
	ctx.r4.s64 = ctx.r30.s64 + 23800;
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23696, ctx.r9.u32);
	// lwz r7,23700(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23700);
	// stw r7,23700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23700, ctx.r7.u32);
	// lwz r6,23704(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23704);
	// stw r6,23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23704, ctx.r6.u32);
	// lbz r5,23708(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23708);
	// stb r5,23708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23708, ctx.r5.u8);
	// lbz r9,23709(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23709);
	// stb r9,23709(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23709, ctx.r9.u8);
	// lwz r7,23712(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23712);
	// lwz r8,23712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23712);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,23712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23712, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,23712(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23712);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,23712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23712, ctx.r5.u32);
	// lwz r9,23716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23716);
	// stw r9,23716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23716, ctx.r9.u32);
	// lwz r8,23720(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23720);
	// stw r8,23720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23720, ctx.r8.u32);
	// lbz r7,23724(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23724);
	// stb r7,23724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23724, ctx.r7.u8);
	// lbz r6,23725(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23725);
	// stb r6,23725(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23725, ctx.r6.u8);
	// lwz r9,23728(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23728);
	// lwz r5,23728(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23728);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23728, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,23728(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23728);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23728, ctx.r8.u32);
	// lwz r6,23732(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23732);
	// stw r6,23732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23732, ctx.r6.u32);
	// lwz r5,23736(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23736);
	// stw r5,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r5.u32);
	// lbz r9,23740(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23740);
	// stb r9,23740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23740, ctx.r9.u8);
	// lbz r8,23741(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23741);
	// stb r8,23741(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23741, ctx.r8.u8);
	// lwz r7,23744(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23744);
	// lwz r6,23744(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23744);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23744, ctx.r6.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,23744(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23744);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23744, ctx.r9.u32);
	// lwz r8,23748(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23748);
	// stw r8,23748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23748, ctx.r8.u32);
	// lwz r7,23752(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23752);
	// stw r7,23752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23752, ctx.r7.u32);
	// lbz r6,23756(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23756);
	// stb r6,23756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23756, ctx.r6.u8);
	// lbz r5,23757(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23757);
	// stb r5,23757(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23757, ctx.r5.u8);
	// lwz r8,23760(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23760);
	// lwz r9,23760(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23760);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,23760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23760, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r6,23760(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23760);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23760, ctx.r6.u32);
	// lwz r5,23764(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23764);
	// stw r5,23764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23764, ctx.r5.u32);
	// lwz r9,23768(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23768);
	// stw r9,23768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23768, ctx.r9.u32);
	// lbz r8,23772(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23772);
	// stb r8,23772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23772, ctx.r8.u8);
	// lbz r7,23773(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23773);
	// stb r7,23773(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23773, ctx.r7.u8);
	// lwz r6,23776(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23776);
	// lwz r5,23776(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23776);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23776, ctx.r6.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r8,23776(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23776);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23776, ctx.r8.u32);
	// lwz r7,23780(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23780);
	// stw r7,23780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23780, ctx.r7.u32);
	// lwz r6,23784(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23784);
	// stw r6,23784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23784, ctx.r6.u32);
	// lbz r5,23788(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23788);
	// stb r5,23788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23788, ctx.r5.u8);
	// lbz r9,23789(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23789);
	// stb r9,23789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23789, ctx.r9.u8);
	// lwz r8,23792(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23792);
	// stw r8,23792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23792, ctx.r8.u32);
	// lwz r7,23796(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23796);
	// stw r7,23796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23796, ctx.r7.u32);
	// bl 0x82a11098
	ctx.lr = 0x82A11BE4;
	sub_82A11098(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r6,47264
	ctx.r11.u64 = ctx.r6.u64 | 47264;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lbz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// stb r8,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// stb r7,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82A11C50"))) PPC_WEAK_FUNC(sub_82A11C50);
PPC_FUNC_IMPL(__imp__sub_82A11C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A11C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r4,12
	ctx.r29.s64 = ctx.r4.s64 + 12;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82a10190
	ctx.lr = 0x82A11CB8;
	sub_82A10190(ctx, base);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// bl 0x82a10040
	ctx.lr = 0x82A11CC4;
	sub_82A10040(ctx, base);
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82a11408
	ctx.lr = 0x82A11CD0;
	sub_82A11408(ctx, base);
	// addi r4,r30,516
	ctx.r4.s64 = ctx.r30.s64 + 516;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82a115a0
	ctx.lr = 0x82A11CDC;
	sub_82A115A0(ctx, base);
	// lwz r8,664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r30,664
	ctx.r10.s64 = ctx.r30.s64 + 664;
	// addi r10,r31,664
	ctx.r10.s64 = ctx.r31.s64 + 664;
	// addi r10,r30,704
	ctx.r10.s64 = ctx.r30.s64 + 704;
	// stw r8,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r8.u32);
	// addi r9,r31,704
	ctx.r9.s64 = ctx.r31.s64 + 704;
	// lwz r7,668(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r7,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r7.u32);
	// lwz r6,672(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// stw r6,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r6.u32);
	// lwz r5,676(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// stw r5,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r5.u32);
	// lwz r4,680(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r4.u32);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// rlwimi r11,r8,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lbz r7,684(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 684);
	// stb r7,684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 684, ctx.r7.u8);
	// lbz r6,685(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 685);
	// stb r6,685(r31)
	PPC_STORE_U8(ctx.r31.u32 + 685, ctx.r6.u8);
	// lbz r5,686(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 686);
	// stb r5,686(r31)
	PPC_STORE_U8(ctx.r31.u32 + 686, ctx.r5.u8);
	// lbz r4,687(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 687);
	// stb r4,687(r31)
	PPC_STORE_U8(ctx.r31.u32 + 687, ctx.r4.u8);
	// lwz r3,688(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// stw r3,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r3.u32);
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// lbz r8,696(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 696);
	// stb r8,696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 696, ctx.r8.u8);
	// lwz r7,700(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// stw r7,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r7.u32);
	// lwz r6,704(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stw r6,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r6.u32);
loc_82A11D7C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a11d7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11D7C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,724
	ctx.r11.s64 = ctx.r30.s64 + 724;
	// addi r10,r31,724
	ctx.r10.s64 = ctx.r31.s64 + 724;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11D98:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11d98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11D98;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,744
	ctx.r11.s64 = ctx.r30.s64 + 744;
	// addi r10,r31,744
	ctx.r10.s64 = ctx.r31.s64 + 744;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A11DB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11db4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11DCC"))) PPC_WEAK_FUNC(sub_82A11DCC);
PPC_FUNC_IMPL(__imp__sub_82A11DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A11DD0"))) PPC_WEAK_FUNC(sub_82A11DD0);
PPC_FUNC_IMPL(__imp__sub_82A11DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A11DD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a100e8
	ctx.lr = 0x82A11DE8;
	sub_82A100E8(ctx, base);
	// lhz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 52);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,32
	ctx.r28.s64 = 32;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_82A11E0C:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a112b0
	ctx.lr = 0x82A11E18;
	sub_82A112B0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// bne 0x82a11e0c
	if (!cr0.eq) goto loc_82A11E0C;
	// addi r4,r30,6720
	ctx.r4.s64 = ctx.r30.s64 + 6720;
	// addi r3,r31,6720
	ctx.r3.s64 = ctx.r31.s64 + 6720;
	// bl 0x82a112b0
	ctx.lr = 0x82A11E30;
	sub_82A112B0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r30,6932
	ctx.r11.s64 = ctx.r30.s64 + 6932;
	// addi r10,r31,6932
	ctx.r10.s64 = ctx.r31.s64 + 6932;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,6928(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6928);
	// stw r9,6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6928, ctx.r9.u32);
	// lwz r8,6932(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6932);
	// stw r8,6932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6932, ctx.r8.u32);
loc_82A11E50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a11e50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A11E50;
	// addi r4,r30,6976
	ctx.r4.s64 = ctx.r30.s64 + 6976;
	// addi r3,r31,6976
	ctx.r3.s64 = ctx.r31.s64 + 6976;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11E6C;
	sub_831CE980(ctx, base);
	// addi r4,r30,7032
	ctx.r4.s64 = ctx.r30.s64 + 7032;
	// addi r3,r31,7032
	ctx.r3.s64 = ctx.r31.s64 + 7032;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11E7C;
	sub_831CE980(ctx, base);
	// addi r4,r30,7088
	ctx.r4.s64 = ctx.r30.s64 + 7088;
	// addi r3,r31,7088
	ctx.r3.s64 = ctx.r31.s64 + 7088;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11E8C;
	sub_831CE980(ctx, base);
	// addi r4,r30,7144
	ctx.r4.s64 = ctx.r30.s64 + 7144;
	// addi r3,r31,7144
	ctx.r3.s64 = ctx.r31.s64 + 7144;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11E9C;
	sub_831CE980(ctx, base);
	// addi r4,r30,7200
	ctx.r4.s64 = ctx.r30.s64 + 7200;
	// addi r3,r31,7200
	ctx.r3.s64 = ctx.r31.s64 + 7200;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11EAC;
	sub_831CE980(ctx, base);
	// addi r4,r30,7256
	ctx.r4.s64 = ctx.r30.s64 + 7256;
	// addi r3,r31,7256
	ctx.r3.s64 = ctx.r31.s64 + 7256;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11EBC;
	sub_831CE980(ctx, base);
	// addi r4,r30,7312
	ctx.r4.s64 = ctx.r30.s64 + 7312;
	// addi r3,r31,7312
	ctx.r3.s64 = ctx.r31.s64 + 7312;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11ECC;
	sub_831CE980(ctx, base);
	// addi r4,r30,7368
	ctx.r4.s64 = ctx.r30.s64 + 7368;
	// addi r3,r31,7368
	ctx.r3.s64 = ctx.r31.s64 + 7368;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11EDC;
	sub_831CE980(ctx, base);
	// addi r4,r30,7424
	ctx.r4.s64 = ctx.r30.s64 + 7424;
	// addi r3,r31,7424
	ctx.r3.s64 = ctx.r31.s64 + 7424;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82A11EEC;
	sub_831CE980(ctx, base);
	// addi r4,r30,7480
	ctx.r4.s64 = ctx.r30.s64 + 7480;
	// addi r3,r31,7480
	ctx.r3.s64 = ctx.r31.s64 + 7480;
	// bl 0x82a11c50
	ctx.lr = 0x82A11EF8;
	sub_82A11C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11F04"))) PPC_WEAK_FUNC(sub_82A11F04);
PPC_FUNC_IMPL(__imp__sub_82A11F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A11F08"))) PPC_WEAK_FUNC(sub_82A11F08);
PPC_FUNC_IMPL(__imp__sub_82A11F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A11F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a11f48
	if (cr6.eq) goto loc_82A11F48;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A11F40;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A11F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11F50"))) PPC_WEAK_FUNC(sub_82A11F50);
PPC_FUNC_IMPL(__imp__sub_82A11F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A11F58;
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
	// beq cr6,0x82a120e4
	if (cr6.eq) goto loc_82A120E4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi. r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a11fbc
	if (!cr0.eq) goto loc_82A11FBC;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a120e4
	if (cr6.eq) goto loc_82A120E4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A11FA8;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A11FBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a12004
	if (cr6.gt) goto loc_82A12004;
	// bl 0x82a11620
	ctx.lr = 0x82A11FD8;
	sub_82A11620(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A12004:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82a1206c
	if (cr6.gt) goto loc_82A1206C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a11620
	ctx.lr = 0x82A12028;
	sub_82A11620(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a120e0
	if (cr6.eq) goto loc_82A120E0;
loc_82A1203C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a1204c
	if (cr6.eq) goto loc_82A1204C;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
loc_82A1204C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a1203c
	if (!cr6.eq) goto loc_82A1203C;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1206C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a12088
	if (cr6.eq) goto loc_82A12088;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A12088;
	sub_825952B8(ctx, base);
loc_82A12088:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// bl 0x826908f8
	ctx.lr = 0x82A120A0;
	sub_826908F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a120e4
	if (cr6.eq) goto loc_82A120E4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a120e0
	if (cr6.eq) goto loc_82A120E0;
loc_82A120C0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a120d0
	if (cr6.eq) goto loc_82A120D0;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
loc_82A120D0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a120c0
	if (!cr6.eq) goto loc_82A120C0;
loc_82A120E0:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A120E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A120F0"))) PPC_WEAK_FUNC(sub_82A120F0);
PPC_FUNC_IMPL(__imp__sub_82A120F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A120F8;
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
	// beq cr6,0x82a12284
	if (cr6.eq) goto loc_82A12284;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi. r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a1215c
	if (!cr0.eq) goto loc_82A1215C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a12284
	if (cr6.eq) goto loc_82A12284;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A12148;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1215C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a121a4
	if (cr6.gt) goto loc_82A121A4;
	// bl 0x834b3fe0
	ctx.lr = 0x82A12178;
	sub_834B3FE0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A121A4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82a1220c
	if (cr6.gt) goto loc_82A1220C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x834b3fe0
	ctx.lr = 0x82A121C8;
	sub_834B3FE0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a12280
	if (cr6.eq) goto loc_82A12280;
loc_82A121DC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a121ec
	if (cr6.eq) goto loc_82A121EC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82A121EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a121dc
	if (!cr6.eq) goto loc_82A121DC;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1220C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a12228
	if (cr6.eq) goto loc_82A12228;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A12228;
	sub_825952B8(ctx, base);
loc_82A12228:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x8378d6d8
	ctx.lr = 0x82A12240;
	sub_8378D6D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a12284
	if (cr6.eq) goto loc_82A12284;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a12280
	if (cr6.eq) goto loc_82A12280;
loc_82A12260:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a12270
	if (cr6.eq) goto loc_82A12270;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82A12270:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a12260
	if (!cr6.eq) goto loc_82A12260;
loc_82A12280:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A12284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12290"))) PPC_WEAK_FUNC(sub_82A12290);
PPC_FUNC_IMPL(__imp__sub_82A12290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A12298;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r4,48
	ctx.r30.s64 = ctx.r4.s64 + 48;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82A122B0:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82a120f0
	ctx.lr = 0x82A122BC;
	sub_82A120F0(ctx, base);
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a11f50
	ctx.lr = 0x82A122C8;
	sub_82A11F50(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82a120f0
	ctx.lr = 0x82A122D4;
	sub_82A120F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82a11f50
	ctx.lr = 0x82A122E0;
	sub_82A11F50(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x82a122b0
	if (!cr0.eq) goto loc_82A122B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A122FC"))) PPC_WEAK_FUNC(sub_82A122FC);
PPC_FUNC_IMPL(__imp__sub_82A122FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12300"))) PPC_WEAK_FUNC(sub_82A12300);
PPC_FUNC_IMPL(__imp__sub_82A12300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A12308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a10300
	ctx.lr = 0x82A12318;
	sub_82A10300(ctx, base);
	// addi r4,r30,560
	ctx.r4.s64 = ctx.r30.s64 + 560;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82a11670
	ctx.lr = 0x82A12324;
	sub_82A11670(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,47840
	ctx.r11.u64 = ctx.r11.u64 | 47840;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a10390
	ctx.lr = 0x82A12338;
	sub_82A10390(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r10,48708
	ctx.r11.u64 = ctx.r10.u64 | 48708;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a105a0
	ctx.lr = 0x82A1234C;
	sub_82A105A0(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r29,r29,-16600
	ctx.r29.s64 = ctx.r29.s64 + -16600;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A1235C:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a11dd0
	ctx.lr = 0x82A12368;
	sub_82A11DD0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,8248
	ctx.r29.s64 = ctx.r29.s64 + 8248;
	// bne 0x82a1235c
	if (!cr0.eq) goto loc_82A1235C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65432
	ctx.r11.u64 = ctx.r11.u64 | 65432;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a10720
	ctx.lr = 0x82A12388;
	sub_82A10720(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r10,720
	ctx.r11.u64 = ctx.r10.u64 | 720;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a12290
	ctx.lr = 0x82A1239C;
	sub_82A12290(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r11,r9,848
	ctx.r11.u64 = ctx.r9.u64 | 848;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r8,r8,849
	ctx.r8.u64 = ctx.r8.u64 | 849;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r10,r7,850
	ctx.r10.u64 = ctx.r7.u64 | 850;
	// ori r9,r4,852
	ctx.r9.u64 = ctx.r4.u64 | 852;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// ori r11,r3,876
	ctx.r11.u64 = ctx.r3.u64 | 876;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stbx r6,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u8);
	// lbzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// stbx r5,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r8,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwimi r10,r8,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// stb r5,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r5.u8);
	// lbz r10,5(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// stb r10,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
	// lbz r9,6(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// stb r9,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r9.u8);
	// lbz r8,7(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// stb r8,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r8.u8);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lbz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// stb r9,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r9.u8);
	// lwz r8,20(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// lbz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stb r4,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r4.u8);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// stb r11,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// lbz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// stb r10,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r10.u8);
	// lbz r9,7(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// stb r9,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r9.u8);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r7,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// stb r6,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r6.u8);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r5,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A124C0"))) PPC_WEAK_FUNC(sub_82A124C0);
PPC_FUNC_IMPL(__imp__sub_82A124C0) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1253c
	if (cr6.eq) goto loc_82A1253C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0df78
	ctx.lr = 0x82A124F0;
	sub_82A0DF78(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a12534
	if (cr6.eq) goto loc_82A12534;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82A12510;
	sub_82595150(ctx, base);
	// lwz r30,-3564(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a1252c
	if (cr6.eq) goto loc_82A1252C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e798
	ctx.lr = 0x82A12524;
	sub_82A0E798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82A1252C;
	sub_82416268(ctx, base);
loc_82A1252C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82A12534;
	sub_82595170(ctx, base);
loc_82A12534:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3564, ctx.r11.u32);
loc_82A1253C:
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

__attribute__((alias("__imp__sub_82A12554"))) PPC_WEAK_FUNC(sub_82A12554);
PPC_FUNC_IMPL(__imp__sub_82A12554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12558"))) PPC_WEAK_FUNC(sub_82A12558);
PPC_FUNC_IMPL(__imp__sub_82A12558) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-3088
	ctx.r9.s64 = ctx.r11.s64 + -3088;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,11684
	ctx.r8.s64 = ctx.r10.s64 + 11684;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A125A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a124c0
	ctx.lr = 0x82A125B0;
	sub_82A124C0(ctx, base);
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

__attribute__((alias("__imp__sub_82A125C4"))) PPC_WEAK_FUNC(sub_82A125C4);
PPC_FUNC_IMPL(__imp__sub_82A125C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A125C8"))) PPC_WEAK_FUNC(sub_82A125C8);
PPC_FUNC_IMPL(__imp__sub_82A125C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A125D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82A125E4:
	// lbzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a12720
	if (cr6.eq) goto loc_82A12720;
	// cmplwi cr6,r27,19
	cr6.compare<uint32_t>(ctx.r27.u32, 19, xer);
	// bgt cr6,0x82a12720
	if (cr6.gt) goto loc_82A12720;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9744
	ctx.r12.s64 = ctx.r12.s64 + 9744;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_82A12660;
	case 1:
		goto loc_82A12720;
	case 2:
		goto loc_82A1266C;
	case 3:
		goto loc_82A12678;
	case 4:
		goto loc_82A12720;
	case 5:
		goto loc_82A12720;
	case 6:
		goto loc_82A12720;
	case 7:
		goto loc_82A12720;
	case 8:
		goto loc_82A12720;
	case 9:
		goto loc_82A12720;
	case 10:
		goto loc_82A12720;
	case 11:
		goto loc_82A12684;
	case 12:
		goto loc_82A12690;
	case 13:
		goto loc_82A1269C;
	case 14:
		goto loc_82A126B4;
	case 15:
		goto loc_82A12720;
	case 16:
		goto loc_82A126A8;
	case 17:
		goto loc_82A12720;
	case 18:
		goto loc_82A12720;
	case 19:
		goto loc_82A126C0;
	default:
		return;
	}
	// lwz r21,9824(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9824);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,9836(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9836);
	// lwz r21,9848(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9848);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,9860(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9860);
	// lwz r21,9872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9872);
	// lwz r21,9884(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9884);
	// lwz r21,9908(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9908);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,9896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9896);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,10016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10016);
	// lwz r21,9920(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 9920);
loc_82A12660:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d7b08
	ctx.lr = 0x82A12668;
	sub_825D7B08(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A1266C:
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x825b4a28
	ctx.lr = 0x82A12674;
	sub_825B4A28(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A12678:
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x825b4748
	ctx.lr = 0x82A12680;
	sub_825B4748(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A12684:
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// bl 0x825b49a8
	ctx.lr = 0x82A1268C;
	sub_825B49A8(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A12690:
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x825cd778
	ctx.lr = 0x82A12698;
	sub_825CD778(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A1269C:
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// bl 0x825cb7a8
	ctx.lr = 0x82A126A4;
	sub_825CB7A8(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A126A8:
	// addi r3,r28,120
	ctx.r3.s64 = ctx.r28.s64 + 120;
	// bl 0x825b4da8
	ctx.lr = 0x82A126B0;
	sub_825B4DA8(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A126B4:
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// bl 0x825b1e40
	ctx.lr = 0x82A126BC;
	sub_825B1E40(ctx, base);
	// b 0x82a12720
	goto loc_82A12720;
loc_82A126C0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
loc_82A126C8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// bl 0x825b6308
	ctx.lr = 0x82A126E8;
	sub_825B6308(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A12700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82936cb0
	ctx.lr = 0x82A12710;
	sub_82936CB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// blt cr6,0x82a126c8
	if (cr6.lt) goto loc_82A126C8;
loc_82A12720:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,37
	cr6.compare<int32_t>(ctx.r27.s32, 37, xer);
	// blt cr6,0x82a125e4
	if (cr6.lt) goto loc_82A125E4;
	// addi r3,r28,600
	ctx.r3.s64 = ctx.r28.s64 + 600;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A1273C;
	sub_831CE980(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12744"))) PPC_WEAK_FUNC(sub_82A12744);
PPC_FUNC_IMPL(__imp__sub_82A12744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12748"))) PPC_WEAK_FUNC(sub_82A12748);
PPC_FUNC_IMPL(__imp__sub_82A12748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A12750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,637(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 637);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12878
	if (!cr6.eq) goto loc_82A12878;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r3,600
	ctx.r27.s64 = ctx.r3.s64 + 600;
loc_82A1276C:
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a12864
	if (cr6.eq) goto loc_82A12864;
	// cmplwi cr6,r28,19
	cr6.compare<uint32_t>(ctx.r28.u32, 19, xer);
	// bgt cr6,0x82a12864
	if (cr6.gt) goto loc_82A12864;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10136
	ctx.r12.s64 = ctx.r12.s64 + 10136;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_82A127E8;
	case 1:
		goto loc_82A12864;
	case 2:
		goto loc_82A127F4;
	case 3:
		goto loc_82A12800;
	case 4:
		goto loc_82A12864;
	case 5:
		goto loc_82A12864;
	case 6:
		goto loc_82A12864;
	case 7:
		goto loc_82A12864;
	case 8:
		goto loc_82A12864;
	case 9:
		goto loc_82A12864;
	case 10:
		goto loc_82A12864;
	case 11:
		goto loc_82A1280C;
	case 12:
		goto loc_82A12818;
	case 13:
		goto loc_82A12824;
	case 14:
		goto loc_82A1283C;
	case 15:
		goto loc_82A12864;
	case 16:
		goto loc_82A12830;
	case 17:
		goto loc_82A12864;
	case 18:
		goto loc_82A12864;
	case 19:
		goto loc_82A12848;
	default:
		return;
	}
	// lwz r21,10216(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10216);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10228(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10228);
	// lwz r21,10240(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10240);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10252(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10252);
	// lwz r21,10264(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10264);
	// lwz r21,10276(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10276);
	// lwz r21,10300(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10300);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10288(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10288);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10340);
	// lwz r21,10312(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10312);
loc_82A127E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e13e8
	ctx.lr = 0x82A127F0;
	sub_828E13E8(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A127F4:
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x825b4aa8
	ctx.lr = 0x82A127FC;
	sub_825B4AA8(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A12800:
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x825b47c8
	ctx.lr = 0x82A12808;
	sub_825B47C8(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A1280C:
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// bl 0x825ba3d8
	ctx.lr = 0x82A12814;
	sub_825BA3D8(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A12818:
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x82a0f968
	ctx.lr = 0x82A12820;
	sub_82A0F968(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A12824:
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82a0fb70
	ctx.lr = 0x82A1282C;
	sub_82A0FB70(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A12830:
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// bl 0x825b4e28
	ctx.lr = 0x82A12838;
	sub_825B4E28(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A1283C:
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x825b1ec0
	ctx.lr = 0x82A12844;
	sub_825B1EC0(ctx, base);
	// b 0x82a12864
	goto loc_82A12864;
loc_82A12848:
	// addi r30,r29,160
	ctx.r30.s64 = ctx.r29.s64 + 160;
	// li r31,22
	ctx.r31.s64 = 22;
loc_82A12850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0f910
	ctx.lr = 0x82A12858;
	sub_82A0F910(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82a12850
	if (!cr0.eq) goto loc_82A12850;
loc_82A12864:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,37
	cr6.compare<int32_t>(ctx.r28.s32, 37, xer);
	// blt cr6,0x82a1276c
	if (cr6.lt) goto loc_82A1276C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,637(r29)
	PPC_STORE_U8(ctx.r29.u32 + 637, ctx.r11.u8);
loc_82A12878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12880"))) PPC_WEAK_FUNC(sub_82A12880);
PPC_FUNC_IMPL(__imp__sub_82A12880) {
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
	// bne cr6,0x82a12960
	if (!cr6.eq) goto loc_82A12960;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x82a128b8
	if (!cr6.eq) goto loc_82A128B8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82A128B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x82a128e8
	if (cr6.eq) goto loc_82A128E8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82A128CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a128cc
	if (!cr6.eq) goto loc_82A128CC;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82A128E8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a128f8
	if (!cr6.eq) goto loc_82A128F8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82A128F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82a12924
	if (cr6.eq) goto loc_82A12924;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A12908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a12908
	if (!cr6.eq) goto loc_82A12908;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A12924:
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32095
	ctx.r8.s64 = -2103377920;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,10584
	ctx.r10.s64 = ctx.r11.s64 + 10584;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-8464
	ctx.r8.s64 = ctx.r8.s64 + -8464;
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
	ctx.lr = 0x82A12958;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_82A12960:
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

__attribute__((alias("__imp__sub_82A12974"))) PPC_WEAK_FUNC(sub_82A12974);
PPC_FUNC_IMPL(__imp__sub_82A12974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12978"))) PPC_WEAK_FUNC(sub_82A12978);
PPC_FUNC_IMPL(__imp__sub_82A12978) {
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
	// bne cr6,0x82a129dc
	if (!cr6.eq) goto loc_82A129DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A129AC;
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
	ctx.lr = 0x82A129C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a12880
	ctx.lr = 0x82A129D4;
	sub_82A12880(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_82A129DC:
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

__attribute__((alias("__imp__sub_82A129F4"))) PPC_WEAK_FUNC(sub_82A129F4);
PPC_FUNC_IMPL(__imp__sub_82A129F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A129F8"))) PPC_WEAK_FUNC(sub_82A129F8);
PPC_FUNC_IMPL(__imp__sub_82A129F8) {
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
	// bne cr6,0x82a12a1c
	if (!cr6.eq) goto loc_82A12A1C;
	// bl 0x82a12978
	ctx.lr = 0x82A12A1C;
	sub_82A12978(ctx, base);
loc_82A12A1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12a38
	if (!cr6.eq) goto loc_82A12A38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A12A38:
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

__attribute__((alias("__imp__sub_82A12A50"))) PPC_WEAK_FUNC(sub_82A12A50);
PPC_FUNC_IMPL(__imp__sub_82A12A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A12A58;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825b4670
	ctx.lr = 0x82A12A64;
	sub_825B4670(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x825b87b8
	ctx.lr = 0x82A12A6C;
	sub_825B87B8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x825e1f00
	ctx.lr = 0x82A12A74;
	sub_825E1F00(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x825bf400
	ctx.lr = 0x82A12A7C;
	sub_825BF400(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x825bf380
	ctx.lr = 0x82A12A84;
	sub_825BF380(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x825bf480
	ctx.lr = 0x82A12A8C;
	sub_825BF480(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x825bf558
	ctx.lr = 0x82A12A94;
	sub_825BF558(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x825bf708
	ctx.lr = 0x82A12A9C;
	sub_825BF708(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x825bf630
	ctx.lr = 0x82A12AA4;
	sub_825BF630(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x825b4878
	ctx.lr = 0x82A12AAC;
	sub_825B4878(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x825e1dd0
	ctx.lr = 0x82A12AB4;
	sub_825E1DD0(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x825aa000
	ctx.lr = 0x82A12ABC;
	sub_825AA000(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x825e1c98
	ctx.lr = 0x82A12AC4;
	sub_825E1C98(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x826279e8
	ctx.lr = 0x82A12ACC;
	sub_826279E8(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x825ab6c8
	ctx.lr = 0x82A12AD4;
	sub_825AB6C8(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x825a9e30
	ctx.lr = 0x82A12ADC;
	sub_825A9E30(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x825e2058
	ctx.lr = 0x82A12AE4;
	sub_825E2058(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x825e1fd8
	ctx.lr = 0x82A12AEC;
	sub_825E1FD8(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x829f0218
	ctx.lr = 0x82A12AF4;
	sub_829F0218(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x825f7078
	ctx.lr = 0x82A12AFC;
	sub_825F7078(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82a0f9c0
	ctx.lr = 0x82A12B04;
	sub_82A0F9C0(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x825aa080
	ctx.lr = 0x82A12B0C;
	sub_825AA080(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82a0fa40
	ctx.lr = 0x82A12B14;
	sub_82A0FA40(ctx, base);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// bl 0x825bf930
	ctx.lr = 0x82A12B1C;
	sub_825BF930(ctx, base);
	// addi r3,r31,5920
	ctx.r3.s64 = ctx.r31.s64 + 5920;
	// bl 0x825d7b08
	ctx.lr = 0x82A12B24;
	sub_825D7B08(ctx, base);
	// addi r3,r31,5940
	ctx.r3.s64 = ctx.r31.s64 + 5940;
	// bl 0x825b4a28
	ctx.lr = 0x82A12B2C;
	sub_825B4A28(ctx, base);
	// addi r3,r31,5960
	ctx.r3.s64 = ctx.r31.s64 + 5960;
	// bl 0x825b4748
	ctx.lr = 0x82A12B34;
	sub_825B4748(ctx, base);
	// addi r3,r31,5980
	ctx.r3.s64 = ctx.r31.s64 + 5980;
	// bl 0x825b49a8
	ctx.lr = 0x82A12B3C;
	sub_825B49A8(ctx, base);
	// addi r3,r31,6000
	ctx.r3.s64 = ctx.r31.s64 + 6000;
	// bl 0x825cd778
	ctx.lr = 0x82A12B44;
	sub_825CD778(ctx, base);
	// addi r3,r31,6020
	ctx.r3.s64 = ctx.r31.s64 + 6020;
	// bl 0x825cb7a8
	ctx.lr = 0x82A12B4C;
	sub_825CB7A8(ctx, base);
	// addi r3,r31,6040
	ctx.r3.s64 = ctx.r31.s64 + 6040;
	// bl 0x825b4da8
	ctx.lr = 0x82A12B54;
	sub_825B4DA8(ctx, base);
	// addi r3,r31,6060
	ctx.r3.s64 = ctx.r31.s64 + 6060;
	// bl 0x825b1e40
	ctx.lr = 0x82A12B5C;
	sub_825B1E40(ctx, base);
	// addi r3,r31,6080
	ctx.r3.s64 = ctx.r31.s64 + 6080;
	// bl 0x825c39e8
	ctx.lr = 0x82A12B64;
	sub_825C39E8(ctx, base);
	// addi r3,r31,6100
	ctx.r3.s64 = ctx.r31.s64 + 6100;
	// bl 0x828c6d28
	ctx.lr = 0x82A12B6C;
	sub_828C6D28(ctx, base);
	// addi r3,r31,6120
	ctx.r3.s64 = ctx.r31.s64 + 6120;
	// bl 0x82a12978
	ctx.lr = 0x82A12B74;
	sub_82A12978(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r25,r11,7000
	ctx.r25.s64 = ctx.r11.s64 + 7000;
loc_82A12B8C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x82a12c34
	if (cr6.eq) goto loc_82A12C34;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r28,12
	ctx.r27.s64 = ctx.r28.s64 + 12;
loc_82A12B9C:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,20
	ctx.r4.s64 = 20;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,500
	ctx.r3.s64 = ctx.r11.s64 + 500;
	// bl 0x831d0b08
	ctx.lr = 0x82A12BC8;
	sub_831D0B08(ctx, base);
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a12c28
	if (!cr6.eq) goto loc_82A12C28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A12BFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A12C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x828c6780
	ctx.lr = 0x82A12C24;
	sub_828C6780(ctx, base);
	// stb r23,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r23.u8);
loc_82A12C28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(ctx.r30.s32, 28, xer);
	// blt cr6,0x82a12b9c
	if (cr6.lt) goto loc_82A12B9C;
loc_82A12C34:
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r28,84
	cr6.compare<int32_t>(ctx.r28.s32, 84, xer);
	// blt cr6,0x82a12b8c
	if (cr6.lt) goto loc_82A12B8C;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r29,r8,-25152
	ctx.r29.s64 = ctx.r8.s64 + -25152;
	// addi r28,r9,-25140
	ctx.r28.s64 = ctx.r9.s64 + -25140;
	// addi r27,r11,-25136
	ctx.r27.s64 = ctx.r11.s64 + -25136;
loc_82A12C64:
	// addi r11,r10,192
	ctx.r11.s64 = ctx.r10.s64 + 192;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a12cbc
	if (!cr6.eq) goto loc_82A12CBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A12C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a145d8
	ctx.lr = 0x82A12CA4;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A12CB4;
	sub_825A9F08(ctx, base);
	// stb r23,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r23.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A12CBC:
	// addi r11,r10,194
	ctx.r11.s64 = ctx.r10.s64 + 194;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a12d28
	if (!cr6.eq) goto loc_82A12D28;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// beq cr6,0x82a12cec
	if (cr6.eq) goto loc_82A12CEC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82A12CEC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x82A12CFC;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A12D10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a93f0
	ctx.lr = 0x82A12D20;
	sub_825A93F0(ctx, base);
	// stb r23,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r23.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A12D28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x82a12c64
	if (cr6.lt) goto loc_82A12C64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r31,4440
	ctx.r30.s64 = ctx.r31.s64 + 4440;
loc_82A12D40:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// bl 0x825b6308
	ctx.lr = 0x82A12D60;
	sub_825B6308(ctx, base);
	// lwz r10,-520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -520);
	// addi r28,r30,-520
	ctx.r28.s64 = ctx.r30.s64 + -520;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A12D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b83d0
	ctx.lr = 0x82A12D8C;
	sub_825B83D0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A12DA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b84c8
	ctx.lr = 0x82A12DB0;
	sub_825B84C8(ctx, base);
	// lwz r6,1040(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// addi r28,r30,1040
	ctx.r28.s64 = ctx.r30.s64 + 1040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A12DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b88e8
	ctx.lr = 0x82A12DD8;
	sub_825B88E8(ctx, base);
	// lwz r4,1700(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// addi r28,r30,1700
	ctx.r28.s64 = ctx.r30.s64 + 1700;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A12DF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82936cb0
	ctx.lr = 0x82A12E00;
	sub_82936CB0(ctx, base);
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r28,r30,520
	ctx.r28.s64 = ctx.r30.s64 + 520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A12E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e15f0
	ctx.lr = 0x82A12E28;
	sub_825E15F0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x82a12d40
	if (cr6.lt) goto loc_82A12D40;
	// li r30,22
	ctx.r30.s64 = 22;
	// addi r31,r31,4880
	ctx.r31.s64 = ctx.r31.s64 + 4880;
loc_82A12E40:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// bl 0x825b6308
	ctx.lr = 0x82A12E60;
	sub_825B6308(ctx, base);
	// lwz r10,-520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -520);
	// addi r29,r31,-520
	ctx.r29.s64 = ctx.r31.s64 + -520;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A12E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b83d0
	ctx.lr = 0x82A12E8C;
	sub_825B83D0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A12EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b84c8
	ctx.lr = 0x82A12EB0;
	sub_825B84C8(ctx, base);
	// lwz r6,520(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A12EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e15f0
	ctx.lr = 0x82A12ED8;
	sub_825E15F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r30,25
	cr6.compare<int32_t>(ctx.r30.s32, 25, xer);
	// blt cr6,0x82a12e40
	if (cr6.lt) goto loc_82A12E40;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12EF0"))) PPC_WEAK_FUNC(sub_82A12EF0);
PPC_FUNC_IMPL(__imp__sub_82A12EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A12EF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6580(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6580);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13940
	if (!cr6.eq) goto loc_82A13940;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12f24
	if (!cr6.eq) goto loc_82A12F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b87b8
	ctx.lr = 0x82A12F24;
	sub_825B87B8(ctx, base);
loc_82A12F24:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12f40
	if (!cr6.eq) goto loc_82A12F40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A12F40:
	// lbz r11,184(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 184);
	// addi r31,r26,180
	ctx.r31.s64 = ctx.r26.s64 + 180;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12f58
	if (!cr6.eq) goto loc_82A12F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4878
	ctx.lr = 0x82A12F58;
	sub_825B4878(ctx, base);
loc_82A12F58:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12f74
	if (!cr6.eq) goto loc_82A12F74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A12F74:
	// lbz r11,224(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 224);
	// addi r31,r26,220
	ctx.r31.s64 = ctx.r26.s64 + 220;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12f8c
	if (!cr6.eq) goto loc_82A12F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa000
	ctx.lr = 0x82A12F8C;
	sub_825AA000(ctx, base);
loc_82A12F8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12fa8
	if (!cr6.eq) goto loc_82A12FA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A12FA8:
	// lbz r11,204(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 204);
	// addi r31,r26,200
	ctx.r31.s64 = ctx.r26.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12fc0
	if (!cr6.eq) goto loc_82A12FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1dd0
	ctx.lr = 0x82A12FC0;
	sub_825E1DD0(ctx, base);
loc_82A12FC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12fdc
	if (!cr6.eq) goto loc_82A12FDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A12FDC:
	// lbz r11,6104(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6104);
	// addi r31,r26,6100
	ctx.r31.s64 = ctx.r26.s64 + 6100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a12ff4
	if (!cr6.eq) goto loc_82A12FF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6d28
	ctx.lr = 0x82A12FF4;
	sub_828C6D28(ctx, base);
loc_82A12FF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13010
	if (!cr6.eq) goto loc_82A13010;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13010:
	// lbz r11,284(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 284);
	// addi r31,r26,280
	ctx.r31.s64 = ctx.r26.s64 + 280;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13028
	if (!cr6.eq) goto loc_82A13028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x82A13028;
	sub_825AB6C8(ctx, base);
loc_82A13028:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13044
	if (!cr6.eq) goto loc_82A13044;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13044:
	// lbz r11,304(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 304);
	// addi r31,r26,300
	ctx.r31.s64 = ctx.r26.s64 + 300;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1305c
	if (!cr6.eq) goto loc_82A1305C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x82A1305C;
	sub_825A9E30(ctx, base);
loc_82A1305C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13078
	if (!cr6.eq) goto loc_82A13078;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13078:
	// lbz r11,6124(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6124);
	// addi r31,r26,6120
	ctx.r31.s64 = ctx.r26.s64 + 6120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13090
	if (!cr6.eq) goto loc_82A13090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a12978
	ctx.lr = 0x82A13090;
	sub_82A12978(ctx, base);
loc_82A13090:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a130ac
	if (!cr6.eq) goto loc_82A130AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A130AC:
	// lbz r11,384(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 384);
	// addi r31,r26,380
	ctx.r31.s64 = ctx.r26.s64 + 380;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a130c4
	if (!cr6.eq) goto loc_82A130C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f7078
	ctx.lr = 0x82A130C4;
	sub_825F7078(ctx, base);
loc_82A130C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a130e0
	if (!cr6.eq) goto loc_82A130E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A130E0:
	// lbz r11,404(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 404);
	// addi r31,r26,400
	ctx.r31.s64 = ctx.r26.s64 + 400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a130f8
	if (!cr6.eq) goto loc_82A130F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f9c0
	ctx.lr = 0x82A130F8;
	sub_82A0F9C0(ctx, base);
loc_82A130F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13114
	if (!cr6.eq) goto loc_82A13114;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13114:
	// lbz r11,464(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 464);
	// addi r31,r26,460
	ctx.r31.s64 = ctx.r26.s64 + 460;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1312c
	if (!cr6.eq) goto loc_82A1312C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf930
	ctx.lr = 0x82A1312C;
	sub_825BF930(ctx, base);
loc_82A1312C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13148
	if (!cr6.eq) goto loc_82A13148;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13148:
	// lbz r11,444(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 444);
	// addi r31,r26,440
	ctx.r31.s64 = ctx.r26.s64 + 440;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13160
	if (!cr6.eq) goto loc_82A13160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0fa40
	ctx.lr = 0x82A13160;
	sub_82A0FA40(ctx, base);
loc_82A13160:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1317c
	if (!cr6.eq) goto loc_82A1317C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A1317C:
	// lbz r11,244(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 244);
	// addi r31,r26,240
	ctx.r31.s64 = ctx.r26.s64 + 240;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13194
	if (!cr6.eq) goto loc_82A13194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1c98
	ctx.lr = 0x82A13194;
	sub_825E1C98(ctx, base);
loc_82A13194:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a131b0
	if (!cr6.eq) goto loc_82A131B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A131B0:
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// addi r31,r26,40
	ctx.r31.s64 = ctx.r26.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a131c8
	if (!cr6.eq) goto loc_82A131C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1f00
	ctx.lr = 0x82A131C8;
	sub_825E1F00(ctx, base);
loc_82A131C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a131e4
	if (!cr6.eq) goto loc_82A131E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A131E4:
	// lbz r11,344(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 344);
	// addi r31,r26,340
	ctx.r31.s64 = ctx.r26.s64 + 340;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a131fc
	if (!cr6.eq) goto loc_82A131FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1fd8
	ctx.lr = 0x82A131FC;
	sub_825E1FD8(ctx, base);
loc_82A131FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13218
	if (!cr6.eq) goto loc_82A13218;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13218:
	// lbz r11,424(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 424);
	// addi r31,r26,420
	ctx.r31.s64 = ctx.r26.s64 + 420;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13230
	if (!cr6.eq) goto loc_82A13230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x82A13230;
	sub_825AA080(ctx, base);
loc_82A13230:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1324c
	if (!cr6.eq) goto loc_82A1324C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A1324C:
	// lbz r11,324(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 324);
	// addi r31,r26,320
	ctx.r31.s64 = ctx.r26.s64 + 320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13264
	if (!cr6.eq) goto loc_82A13264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2058
	ctx.lr = 0x82A13264;
	sub_825E2058(ctx, base);
loc_82A13264:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13280
	if (!cr6.eq) goto loc_82A13280;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13280:
	// lbz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// addi r31,r26,60
	ctx.r31.s64 = ctx.r26.s64 + 60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13298
	if (!cr6.eq) goto loc_82A13298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf400
	ctx.lr = 0x82A13298;
	sub_825BF400(ctx, base);
loc_82A13298:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a132b4
	if (!cr6.eq) goto loc_82A132B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A132B4:
	// lbz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 104);
	// addi r31,r26,100
	ctx.r31.s64 = ctx.r26.s64 + 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a132cc
	if (!cr6.eq) goto loc_82A132CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf480
	ctx.lr = 0x82A132CC;
	sub_825BF480(ctx, base);
loc_82A132CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a132e8
	if (!cr6.eq) goto loc_82A132E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A132E8:
	// lbz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 124);
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13300
	if (!cr6.eq) goto loc_82A13300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf558
	ctx.lr = 0x82A13300;
	sub_825BF558(ctx, base);
loc_82A13300:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1331c
	if (!cr6.eq) goto loc_82A1331C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A1331C:
	// lbz r11,144(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 144);
	// addi r31,r26,140
	ctx.r31.s64 = ctx.r26.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13334
	if (!cr6.eq) goto loc_82A13334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf708
	ctx.lr = 0x82A13334;
	sub_825BF708(ctx, base);
loc_82A13334:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13350
	if (!cr6.eq) goto loc_82A13350;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13350:
	// lbz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 164);
	// addi r31,r26,160
	ctx.r31.s64 = ctx.r26.s64 + 160;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13368
	if (!cr6.eq) goto loc_82A13368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf630
	ctx.lr = 0x82A13368;
	sub_825BF630(ctx, base);
loc_82A13368:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13384
	if (!cr6.eq) goto loc_82A13384;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13384:
	// lbz r11,6084(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6084);
	// addi r31,r26,6080
	ctx.r31.s64 = ctx.r26.s64 + 6080;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1339c
	if (!cr6.eq) goto loc_82A1339C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c39e8
	ctx.lr = 0x82A1339C;
	sub_825C39E8(ctx, base);
loc_82A1339C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a133b8
	if (!cr6.eq) goto loc_82A133B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A133B8:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a133cc
	if (!cr6.eq) goto loc_82A133CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b4670
	ctx.lr = 0x82A133CC;
	sub_825B4670(ctx, base);
loc_82A133CC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a133e8
	if (!cr6.eq) goto loc_82A133E8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
loc_82A133E8:
	// lbz r11,364(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 364);
	// addi r31,r26,360
	ctx.r31.s64 = ctx.r26.s64 + 360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13400
	if (!cr6.eq) goto loc_82A13400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f0218
	ctx.lr = 0x82A13400;
	sub_829F0218(ctx, base);
loc_82A13400:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1341c
	if (!cr6.eq) goto loc_82A1341C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A1341C:
	// lbz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 264);
	// addi r31,r26,260
	ctx.r31.s64 = ctx.r26.s64 + 260;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13434
	if (!cr6.eq) goto loc_82A13434;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826279e8
	ctx.lr = 0x82A13434;
	sub_826279E8(ctx, base);
loc_82A13434:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13450
	if (!cr6.eq) goto loc_82A13450;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13450:
	// lbz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 84);
	// addi r31,r26,80
	ctx.r31.s64 = ctx.r26.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13468
	if (!cr6.eq) goto loc_82A13468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf380
	ctx.lr = 0x82A13468;
	sub_825BF380(ctx, base);
loc_82A13468:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13484
	if (!cr6.eq) goto loc_82A13484;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13484:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,12
	ctx.r29.s64 = 12;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A13490:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x82a13524
	if (cr6.eq) goto loc_82A13524;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A1349C:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a134fc
	if (!cr6.eq) goto loc_82A134FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A134D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A134E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x828c6780
	ctx.lr = 0x82A134F8;
	sub_828C6780(ctx, base);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
loc_82A134FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13518
	if (!cr6.eq) goto loc_82A13518;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A13518:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(ctx.r30.s32, 28, xer);
	// blt cr6,0x82a1349c
	if (cr6.lt) goto loc_82A1349C;
loc_82A13524:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,96
	cr6.compare<int32_t>(ctx.r29.s32, 96, xer);
	// blt cr6,0x82a13490
	if (cr6.lt) goto loc_82A13490;
	// addi r31,r26,3844
	ctx.r31.s64 = ctx.r26.s64 + 3844;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82A1353C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1358c
	if (!cr6.eq) goto loc_82A1358C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A13560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A13578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A13588;
	sub_825A9F08(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_82A1358C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a135a8
	if (!cr6.eq) goto loc_82A135A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82A135A8:
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a135f8
	if (!cr6.eq) goto loc_82A135F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A135CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A135E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825a93f0
	ctx.lr = 0x82A135F4;
	sub_825A93F0(ctx, base);
	// stb r27,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r27.u8);
loc_82A135F8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13614
	if (!cr6.eq) goto loc_82A13614;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82A13614:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82a1353c
	if (!cr0.eq) goto loc_82A1353C;
	// addi r31,r26,3924
	ctx.r31.s64 = ctx.r26.s64 + 3924;
	// li r29,22
	ctx.r29.s64 = 22;
loc_82A13628:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13678
	if (!cr6.eq) goto loc_82A13678;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A1364C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A13664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825b83d0
	ctx.lr = 0x82A13674;
	sub_825B83D0(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_82A13678:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13694
	if (!cr6.eq) goto loc_82A13694;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82A13694:
	// lbz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a136e4
	if (!cr6.eq) goto loc_82A136E4;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r30,r31,516
	ctx.r30.s64 = ctx.r31.s64 + 516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A136B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A136D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825b84c8
	ctx.lr = 0x82A136E0;
	sub_825B84C8(ctx, base);
	// stb r27,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r27.u8);
loc_82A136E4:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13700
	if (!cr6.eq) goto loc_82A13700;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
loc_82A13700:
	// lbz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1560);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13750
	if (!cr6.eq) goto loc_82A13750;
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// addi r30,r31,1556
	ctx.r30.s64 = ctx.r31.s64 + 1556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A13724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A1373C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825b88e8
	ctx.lr = 0x82A1374C;
	sub_825B88E8(ctx, base);
	// stb r27,1560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1560, ctx.r27.u8);
loc_82A13750:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1376c
	if (!cr6.eq) goto loc_82A1376C;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r10.u32);
loc_82A1376C:
	// lbz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a137bc
	if (!cr6.eq) goto loc_82A137BC;
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r30,r31,1036
	ctx.r30.s64 = ctx.r31.s64 + 1036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A13790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A137A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825e15f0
	ctx.lr = 0x82A137B8;
	sub_825E15F0(ctx, base);
	// stb r27,1040(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1040, ctx.r27.u8);
loc_82A137BC:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a137d8
	if (!cr6.eq) goto loc_82A137D8;
	// lwz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
loc_82A137D8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82a13628
	if (!cr0.eq) goto loc_82A13628;
	// addi r31,r26,4364
	ctx.r31.s64 = ctx.r26.s64 + 4364;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82A137EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1383c
	if (!cr6.eq) goto loc_82A1383C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A13810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A13828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825b83d0
	ctx.lr = 0x82A13838;
	sub_825B83D0(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_82A1383C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13858
	if (!cr6.eq) goto loc_82A13858;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82A13858:
	// lbz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a138a8
	if (!cr6.eq) goto loc_82A138A8;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r30,r31,516
	ctx.r30.s64 = ctx.r31.s64 + 516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A1387C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A13894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825b84c8
	ctx.lr = 0x82A138A4;
	sub_825B84C8(ctx, base);
	// stb r27,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r27.u8);
loc_82A138A8:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a138c4
	if (!cr6.eq) goto loc_82A138C4;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
loc_82A138C4:
	// lbz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13914
	if (!cr6.eq) goto loc_82A13914;
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r30,r31,1036
	ctx.r30.s64 = ctx.r31.s64 + 1036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A138E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A13900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825e15f0
	ctx.lr = 0x82A13910;
	sub_825E15F0(ctx, base);
	// stb r27,1040(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1040, ctx.r27.u8);
loc_82A13914:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13930
	if (!cr6.eq) goto loc_82A13930;
	// lwz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
loc_82A13930:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82a137ec
	if (!cr0.eq) goto loc_82A137EC;
	// stb r27,6580(r26)
	PPC_STORE_U8(ctx.r26.u32 + 6580, ctx.r27.u8);
loc_82A13940:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13948"))) PPC_WEAK_FUNC(sub_82A13948);
PPC_FUNC_IMPL(__imp__sub_82A13948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82a12ef0
	sub_82A12EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1395C"))) PPC_WEAK_FUNC(sub_82A1395C);
PPC_FUNC_IMPL(__imp__sub_82A1395C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13960"))) PPC_WEAK_FUNC(sub_82A13960);
PPC_FUNC_IMPL(__imp__sub_82A13960) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x82a139c8
	if (cr6.eq) goto loc_82A139C8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A13998:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a13998
	if (!cr6.eq) goto loc_82A13998;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a139c8
	if (cr6.eq) goto loc_82A139C8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8354ff00
	ctx.lr = 0x82A139C8;
	sub_8354FF00(ctx, base);
loc_82A139C8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,11668
	ctx.r11.s64 = ctx.r11.s64 + 11668;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r6,-32166
	ctx.r6.s64 = -2108030976;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r7,-32097
	ctx.r7.s64 = -2103508992;
	// lis r5,-32095
	ctx.r5.s64 = -2103377920;
	// lis r4,-31913
	ctx.r4.s64 = -2091450368;
	// addi r9,r6,18120
	ctx.r9.s64 = ctx.r6.s64 + 18120;
	// addi r10,r7,-704
	ctx.r10.s64 = ctx.r7.s64 + -704;
	// addi r8,r5,-10688
	ctx.r8.s64 = ctx.r5.s64 + -10688;
	// addi r6,r4,10584
	ctx.r6.s64 = ctx.r4.s64 + 10584;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8353f448
	ctx.lr = 0x82A13A24;
	sub_8353F448(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832d24b8
	ctx.lr = 0x82A13A48;
	sub_832D24B8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82A13A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a35938
	ctx.lr = 0x82A13A54;
	sub_82A35938(ctx, base);
	// bl 0x82a35958
	ctx.lr = 0x82A13A58;
	sub_82A35958(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x82a13a4c
	if (cr6.lt) goto loc_82A13A4C;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a13aa8
	if (!cr6.eq) goto loc_82A13AA8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,6584
	ctx.r4.s64 = 6584;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82A13A8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a13b14
	if (cr6.eq) goto loc_82A13B14;
	// bl 0x82a0f3a0
	ctx.lr = 0x82A13A98;
	sub_82A0F3A0(ctx, base);
	// stw r3,-3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3564, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a13aa8
	if (cr6.eq) goto loc_82A13AA8;
	// bl 0x82a12a50
	ctx.lr = 0x82A13AA8;
	sub_82A12A50(ctx, base);
loc_82A13AA8:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a13acc
	if (cr6.eq) goto loc_82A13ACC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A13AC8;
	sub_8353F3B8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82A13ACC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a13afc
	if (cr6.eq) goto loc_82A13AFC;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x838adab0
	ctx.lr = 0x82A13AE8;
	sub_838ADAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A13AFC;
	sub_825952B8(ctx, base);
loc_82A13AFC:
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
loc_82A13B14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3564, ctx.r30.u32);
	// b 0x82a13aa8
	goto loc_82A13AA8;
}

__attribute__((alias("__imp__sub_82A13B20"))) PPC_WEAK_FUNC(sub_82A13B20);
PPC_FUNC_IMPL(__imp__sub_82A13B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13B2C"))) PPC_WEAK_FUNC(sub_82A13B2C);
PPC_FUNC_IMPL(__imp__sub_82A13B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13B30"))) PPC_WEAK_FUNC(sub_82A13B30);
PPC_FUNC_IMPL(__imp__sub_82A13B30) {
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
	// bl 0x82a47fd0
	ctx.lr = 0x82A13B48;
	sub_82A47FD0(ctx, base);
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

__attribute__((alias("__imp__sub_82A13B60"))) PPC_WEAK_FUNC(sub_82A13B60);
PPC_FUNC_IMPL(__imp__sub_82A13B60) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,12168
	ctx.r9.s64 = ctx.r11.s64 + 12168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a13b94
	if (cr6.eq) goto loc_82A13B94;
	// bl 0x82416268
	ctx.lr = 0x82A13B90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A13B94:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82A13BA8"))) PPC_WEAK_FUNC(sub_82A13BA8);
PPC_FUNC_IMPL(__imp__sub_82A13BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-3536
	ctx.r11.s64 = ctx.r11.s64 + -3536;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13BBC"))) PPC_WEAK_FUNC(sub_82A13BBC);
PPC_FUNC_IMPL(__imp__sub_82A13BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13BC0"))) PPC_WEAK_FUNC(sub_82A13BC0);
PPC_FUNC_IMPL(__imp__sub_82A13BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82A13BCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,15348(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15348, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a13bcc
	if (cr6.lt) goto loc_82A13BCC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13BE8"))) PPC_WEAK_FUNC(sub_82A13BE8);
PPC_FUNC_IMPL(__imp__sub_82A13BE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3815
	ctx.r11.s64 = ctx.r4.s64 + 3815;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13BF8"))) PPC_WEAK_FUNC(sub_82A13BF8);
PPC_FUNC_IMPL(__imp__sub_82A13BF8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3826
	ctx.r11.s64 = ctx.r4.s64 + 3826;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13C08"))) PPC_WEAK_FUNC(sub_82A13C08);
PPC_FUNC_IMPL(__imp__sub_82A13C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,30092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30092);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a13c24
	if (!cr6.lt) goto loc_82A13C24;
	// lwz r11,30096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30096);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A13C24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13C2C"))) PPC_WEAK_FUNC(sub_82A13C2C);
PPC_FUNC_IMPL(__imp__sub_82A13C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13C30"))) PPC_WEAK_FUNC(sub_82A13C30);
PPC_FUNC_IMPL(__imp__sub_82A13C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A13C38;
	__savegprlr_28(ctx, base);
	// addi r11,r4,1166
	ctx.r11.s64 = ctx.r4.s64 + 1166;
	// addi r10,r4,1177
	ctx.r10.s64 = ctx.r4.s64 + 1177;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r5,1166
	ctx.r9.s64 = ctx.r5.s64 + 1166;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r5,1177
	ctx.r11.s64 = ctx.r5.s64 + 1177;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stw r31,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r31.u32);
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r30.u32);
	// lfs f12,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r29.u32);
	// lfs f11,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r28.u32);
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// lfs f9,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f9.f64 = double(temp.f32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lfs f8,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beq cr6,0x82a13d7c
	if (cr6.eq) goto loc_82A13D7C;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bge cr6,0x82a13d3c
	if (!cr6.lt) goto loc_82A13D3C;
	// addi r11,r4,3826
	ctx.r11.s64 = ctx.r4.s64 + 3826;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82a13d40
	goto loc_82A13D40;
loc_82A13D3C:
	// lwz r10,15304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
loc_82A13D40:
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// bge cr6,0x82a13d58
	if (!cr6.lt) goto loc_82A13D58;
	// addi r11,r5,3826
	ctx.r11.s64 = ctx.r5.s64 + 3826;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// b 0x82a13d5c
	goto loc_82A13D5C;
loc_82A13D58:
	// lwz r11,15304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
loc_82A13D5C:
	// addi r9,r4,3826
	ctx.r9.s64 = ctx.r4.s64 + 3826;
	// addi r8,r5,3826
	ctx.r8.s64 = ctx.r5.s64 + 3826;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// stb r9,30104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30104, ctx.r9.u8);
loc_82A13D7C:
	// stw r5,30096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30096, ctx.r5.u32);
	// stw r4,30092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30092, ctx.r4.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13D88"))) PPC_WEAK_FUNC(sub_82A13D88);
PPC_FUNC_IMPL(__imp__sub_82A13D88) {
	PPC_FUNC_PROLOGUE();
	// stb r4,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13D90"))) PPC_WEAK_FUNC(sub_82A13D90);
PPC_FUNC_IMPL(__imp__sub_82A13D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,253(r3)
	PPC_STORE_U8(ctx.r3.u32 + 253, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13DA4"))) PPC_WEAK_FUNC(sub_82A13DA4);
PPC_FUNC_IMPL(__imp__sub_82A13DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13DA8"))) PPC_WEAK_FUNC(sub_82A13DA8);
PPC_FUNC_IMPL(__imp__sub_82A13DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,51
	ctx.r11.s64 = ctx.r4.s64 + 51;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13DB8"))) PPC_WEAK_FUNC(sub_82A13DB8);
PPC_FUNC_IMPL(__imp__sub_82A13DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13DC0"))) PPC_WEAK_FUNC(sub_82A13DC0);
PPC_FUNC_IMPL(__imp__sub_82A13DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A13DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,9778
	ctx.r11.s64 = ctx.r4.s64 + 9778;
	// addi r10,r4,753
	ctx.r10.s64 = ctx.r4.s64 + 753;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r5,196(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a19460
	ctx.lr = 0x82A13DFC;
	sub_82A19460(ctx, base);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// bl 0x82a513f0
	ctx.lr = 0x82A13E10;
	sub_82A513F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13E18"))) PPC_WEAK_FUNC(sub_82A13E18);
PPC_FUNC_IMPL(__imp__sub_82A13E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A13E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,9778
	ctx.r11.s64 = ctx.r4.s64 + 9778;
	// addi r10,r4,753
	ctx.r10.s64 = ctx.r4.s64 + 753;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r5,196(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a19460
	ctx.lr = 0x82A13E58;
	sub_82A19460(ctx, base);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r11,308
	ctx.r31.s64 = ctx.r11.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a513f0
	ctx.lr = 0x82A13E70;
	sub_82A513F0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A13E80:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a13e80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A13E80;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13E94"))) PPC_WEAK_FUNC(sub_82A13E94);
PPC_FUNC_IMPL(__imp__sub_82A13E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13E98"))) PPC_WEAK_FUNC(sub_82A13E98);
PPC_FUNC_IMPL(__imp__sub_82A13E98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13EA8"))) PPC_WEAK_FUNC(sub_82A13EA8);
PPC_FUNC_IMPL(__imp__sub_82A13EA8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13EB8"))) PPC_WEAK_FUNC(sub_82A13EB8);
PPC_FUNC_IMPL(__imp__sub_82A13EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,276
	ctx.r10.s64 = ctx.r11.s64 + 276;
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,280(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,284(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13EE0"))) PPC_WEAK_FUNC(sub_82A13EE0);
PPC_FUNC_IMPL(__imp__sub_82A13EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,292
	ctx.r10.s64 = ctx.r11.s64 + 292;
	// stfs f0,292(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,296(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13F08"))) PPC_WEAK_FUNC(sub_82A13F08);
PPC_FUNC_IMPL(__imp__sub_82A13F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A13F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,9778
	ctx.r11.s64 = ctx.r4.s64 + 9778;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,753
	ctx.r9.s64 = ctx.r4.s64 + 753;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r9,52
	ctx.r11.s64 = ctx.r9.s64 * 52;
	// stwx r29,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r29.u32);
	// lwz r5,196(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a19460
	ctx.lr = 0x82A13F44;
	sub_82A19460(ctx, base);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,308
	ctx.r30.s64 = ctx.r31.s64 + 308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a513f0
	ctx.lr = 0x82A13F5C;
	sub_82A513F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stb r29,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r29.u8);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// bl 0x82a513f0
	ctx.lr = 0x82A13F90;
	sub_82A513F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13F98"))) PPC_WEAK_FUNC(sub_82A13F98);
PPC_FUNC_IMPL(__imp__sub_82A13F98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,245
	ctx.r11.s64 = ctx.r4.s64 + 245;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13FA8"))) PPC_WEAK_FUNC(sub_82A13FA8);
PPC_FUNC_IMPL(__imp__sub_82A13FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,298
	ctx.r11.s64 = ctx.r4.s64 + 298;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13FB8"))) PPC_WEAK_FUNC(sub_82A13FB8);
PPC_FUNC_IMPL(__imp__sub_82A13FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,309
	ctx.r11.s64 = ctx.r4.s64 + 309;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blt cr6,0x82a13ffc
	if (cr6.lt) goto loc_82A13FFC;
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// bge cr6,0x82a13ffc
	if (!cr6.lt) goto loc_82A13FFC;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r5,r10
	ctx.r9.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
loc_82A13FFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14010"))) PPC_WEAK_FUNC(sub_82A14010);
PPC_FUNC_IMPL(__imp__sub_82A14010) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14018"))) PPC_WEAK_FUNC(sub_82A14018);
PPC_FUNC_IMPL(__imp__sub_82A14018) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14020"))) PPC_WEAK_FUNC(sub_82A14020);
PPC_FUNC_IMPL(__imp__sub_82A14020) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1380, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14028"))) PPC_WEAK_FUNC(sub_82A14028);
PPC_FUNC_IMPL(__imp__sub_82A14028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,1388(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1388, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1403C"))) PPC_WEAK_FUNC(sub_82A1403C);
PPC_FUNC_IMPL(__imp__sub_82A1403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14040"))) PPC_WEAK_FUNC(sub_82A14040);
PPC_FUNC_IMPL(__imp__sub_82A14040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a14058
	if (cr6.eq) goto loc_82A14058;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A14058:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14060"))) PPC_WEAK_FUNC(sub_82A14060);
PPC_FUNC_IMPL(__imp__sub_82A14060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,39108
	ctx.r10.u64 = ctx.r11.u64 | 39108;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a1407c
	if (cr6.eq) goto loc_82A1407C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A1407C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,39100
	ctx.r10.u64 = ctx.r11.u64 | 39100;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1408C"))) PPC_WEAK_FUNC(sub_82A1408C);
PPC_FUNC_IMPL(__imp__sub_82A1408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14090"))) PPC_WEAK_FUNC(sub_82A14090);
PPC_FUNC_IMPL(__imp__sub_82A14090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39100
	ctx.r11.u64 = ctx.r11.u64 | 39100;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A140A0"))) PPC_WEAK_FUNC(sub_82A140A0);
PPC_FUNC_IMPL(__imp__sub_82A140A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgt cr6,0x82a14128
	if (cr6.gt) goto loc_82A14128;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a140d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A140D8;
	// bdzf 4*cr6+eq,0x82a14128
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A14128;
	// bdzf 4*cr6+eq,0x82a140ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A140EC;
	// bdzf 4*cr6+eq,0x82a14100
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A14100;
	// bne cr6,0x82a14114
	if (!cr6.eq) goto loc_82A14114;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82A140D8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82A140EC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82A14100:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82A14114:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82A14128:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r9,r10,39100
	ctx.r9.u64 = ctx.r10.u64 | 39100;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1413C"))) PPC_WEAK_FUNC(sub_82A1413C);
PPC_FUNC_IMPL(__imp__sub_82A1413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14140"))) PPC_WEAK_FUNC(sub_82A14140);
PPC_FUNC_IMPL(__imp__sub_82A14140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39104
	ctx.r11.u64 = ctx.r11.u64 | 39104;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14150"))) PPC_WEAK_FUNC(sub_82A14150);
PPC_FUNC_IMPL(__imp__sub_82A14150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39104
	ctx.r11.u64 = ctx.r11.u64 | 39104;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14160"))) PPC_WEAK_FUNC(sub_82A14160);
PPC_FUNC_IMPL(__imp__sub_82A14160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39108
	ctx.r11.u64 = ctx.r11.u64 | 39108;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14170"))) PPC_WEAK_FUNC(sub_82A14170);
PPC_FUNC_IMPL(__imp__sub_82A14170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14178"))) PPC_WEAK_FUNC(sub_82A14178);
PPC_FUNC_IMPL(__imp__sub_82A14178) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,892
	ctx.r11.s64 = ctx.r4.s64 + 892;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14188"))) PPC_WEAK_FUNC(sub_82A14188);
PPC_FUNC_IMPL(__imp__sub_82A14188) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,892
	ctx.r11.s64 = ctx.r4.s64 + 892;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14198"))) PPC_WEAK_FUNC(sub_82A14198);
PPC_FUNC_IMPL(__imp__sub_82A14198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25744
	ctx.r11.s64 = ctx.r11.s64 + -25744;
loc_82A141A8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82a141cc
	if (cr6.eq) goto loc_82A141CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82a141a8
	if (cr6.lt) goto loc_82A141A8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A141CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A141D4"))) PPC_WEAK_FUNC(sub_82A141D4);
PPC_FUNC_IMPL(__imp__sub_82A141D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A141D8"))) PPC_WEAK_FUNC(sub_82A141D8);
PPC_FUNC_IMPL(__imp__sub_82A141D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A141E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-30988
	ctx.r28.s64 = ctx.r28.s64 + -30988;
	// addi r27,r3,3612
	ctx.r27.s64 = ctx.r3.s64 + 3612;
	// li r29,15260
	ctx.r29.s64 = 15260;
loc_82A141FC:
	// lbz r11,253(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 253);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x829175b0
	ctx.lr = 0x82A14228;
	sub_829175B0(ctx, base);
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82a14238
	if (!cr6.lt) goto loc_82A14238;
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// b 0x82a1423c
	goto loc_82A1423C;
loc_82A14238:
	// lwz r11,15260(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15260);
loc_82A1423C:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a14260
	if (!cr6.eq) goto loc_82A14260;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r29,15304
	cr6.compare<int32_t>(ctx.r29.s32, 15304, xer);
	// blt cr6,0x82a141fc
	if (cr6.lt) goto loc_82A141FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A14260:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1426C"))) PPC_WEAK_FUNC(sub_82A1426C);
PPC_FUNC_IMPL(__imp__sub_82A1426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14270"))) PPC_WEAK_FUNC(sub_82A14270);
PPC_FUNC_IMPL(__imp__sub_82A14270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,1114
	cr6.compare<int32_t>(ctx.r4.s32, 1114, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,9959
	ctx.r11.s64 = ctx.r4.s64 + 9959;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14298"))) PPC_WEAK_FUNC(sub_82A14298);
PPC_FUNC_IMPL(__imp__sub_82A14298) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// b 0x82917b48
	sub_82917B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A142A4"))) PPC_WEAK_FUNC(sub_82A142A4);
PPC_FUNC_IMPL(__imp__sub_82A142A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A142A8"))) PPC_WEAK_FUNC(sub_82A142A8);
PPC_FUNC_IMPL(__imp__sub_82A142A8) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A142C4;
	sub_82917B48(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82A142D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a142d4
	if (cr6.lt) goto loc_82A142D4;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14310"))) PPC_WEAK_FUNC(sub_82A14310);
PPC_FUNC_IMPL(__imp__sub_82A14310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A14318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r28,-30988
	ctx.r28.s64 = ctx.r28.s64 + -30988;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r27,255
	ctx.r27.s64 = 255;
loc_82A14334:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917b48
	ctx.lr = 0x82A14344;
	sub_82917B48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82A14350:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a14350
	if (cr6.lt) goto loc_82A14350;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r27,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r27.u32);
	// stb r31,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r31.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r27,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r27.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a14334
	if (cr6.lt) goto loc_82A14334;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14394"))) PPC_WEAK_FUNC(sub_82A14394);
PPC_FUNC_IMPL(__imp__sub_82A14394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14398"))) PPC_WEAK_FUNC(sub_82A14398);
PPC_FUNC_IMPL(__imp__sub_82A14398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A143A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r27,r27,-30988
	ctx.r27.s64 = ctx.r27.s64 + -30988;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
loc_82A143BC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82917b48
	ctx.lr = 0x82A143CC;
	sub_82917B48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82A143D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a143d8
	if (cr6.lt) goto loc_82A143D8;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// stb r31,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r31.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a143bc
	if (cr6.lt) goto loc_82A143BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1441C"))) PPC_WEAK_FUNC(sub_82A1441C);
PPC_FUNC_IMPL(__imp__sub_82A1441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14420"))) PPC_WEAK_FUNC(sub_82A14420);
PPC_FUNC_IMPL(__imp__sub_82A14420) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A14448;
	sub_82917B48(ctx, base);
	// stb r31,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r31.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82A14460"))) PPC_WEAK_FUNC(sub_82A14460);
PPC_FUNC_IMPL(__imp__sub_82A14460) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A1447C;
	sub_82917B48(ctx, base);
	// lbz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14490"))) PPC_WEAK_FUNC(sub_82A14490);
PPC_FUNC_IMPL(__imp__sub_82A14490) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A144AC;
	sub_82917B48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,14
	ctx.r9.s64 = 14;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addc r6,r7,r8
	temp.u8 = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	xer.ca = temp.u8;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A144D8"))) PPC_WEAK_FUNC(sub_82A144D8);
PPC_FUNC_IMPL(__imp__sub_82A144D8) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A144F4;
	sub_82917B48(ctx, base);
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
}

__attribute__((alias("__imp__sub_82A14508"))) PPC_WEAK_FUNC(sub_82A14508);
PPC_FUNC_IMPL(__imp__sub_82A14508) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// li r31,255
	ctx.r31.s64 = 255;
	// bl 0x82917b48
	ctx.lr = 0x82A1452C;
	sub_82917B48(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 + 5;
	// addi r7,r3,6
	ctx.r7.s64 = ctx.r3.s64 + 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
loc_82A14548:
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a14558
	if (cr6.eq) goto loc_82A14558;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A14558:
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a14568
	if (cr6.eq) goto loc_82A14568;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82A14568:
	// lbzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a14578
	if (cr6.eq) goto loc_82A14578;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_82A14578:
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a14588
	if (cr6.eq) goto loc_82A14588;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
loc_82A14588:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a14548
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14548;
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

__attribute__((alias("__imp__sub_82A145A8"))) PPC_WEAK_FUNC(sub_82A145A8);
PPC_FUNC_IMPL(__imp__sub_82A145A8) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A145C4;
	sub_82917B48(ctx, base);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A145D8"))) PPC_WEAK_FUNC(sub_82A145D8);
PPC_FUNC_IMPL(__imp__sub_82A145D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// bne cr6,0x82a145f4
	if (!cr6.eq) goto loc_82A145F4;
	// addi r11,r11,12680
	ctx.r11.s64 = ctx.r11.s64 + 12680;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// blr 
	return;
loc_82A145F4:
	// addi r3,r11,12680
	ctx.r3.s64 = ctx.r11.s64 + 12680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A145FC"))) PPC_WEAK_FUNC(sub_82A145FC);
PPC_FUNC_IMPL(__imp__sub_82A145FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14600"))) PPC_WEAK_FUNC(sub_82A14600);
PPC_FUNC_IMPL(__imp__sub_82A14600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bgt cr6,0x82a14680
	if (cr6.gt) goto loc_82A14680;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17956
	ctx.r12.s64 = ctx.r12.s64 + 17956;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82A1464C;
	case 1:
		goto loc_82A14658;
	case 2:
		goto loc_82A14658;
	case 3:
		goto loc_82A14664;
	case 4:
		goto loc_82A14664;
	case 5:
		goto loc_82A14670;
	case 6:
		goto loc_82A14670;
	case 7:
		goto loc_82A1467C;
	case 8:
		goto loc_82A1467C;
	case 9:
		goto loc_82A1467C;
	default:
		return;
	}
	// lwz r21,17996(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17996);
	// lwz r21,18008(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18008);
	// lwz r21,18008(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18008);
	// lwz r21,18020(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18020);
	// lwz r21,18020(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18020);
	// lwz r21,18032(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18032);
	// lwz r21,18032(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18032);
	// lwz r21,18044(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18044);
	// lwz r21,18044(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18044);
	// lwz r21,18044(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18044);
loc_82A1464C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A14658:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A14664:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A14670:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A1467C:
	// li r11,9
	ctx.r11.s64 = 9;
loc_82A14680:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14688"))) PPC_WEAK_FUNC(sub_82A14688);
PPC_FUNC_IMPL(__imp__sub_82A14688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r3,248
	ctx.r6.s64 = ctx.r3.s64 + 248;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
loc_82A146C0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a146c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A146C0;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r7,r3,260
	ctx.r7.s64 = ctx.r3.s64 + 260;
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82A146E0:
	// stw r5,-172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -172, ctx.r5.u32);
	// stw r9,-128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -128, ctx.r9.u32);
	// stw r8,-84(r11)
	PPC_STORE_U32(ctx.r11.u32 + -84, ctx.r8.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a146e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A146E0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r8.u32);
	// stw r8,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r8.u32);
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1471C"))) PPC_WEAK_FUNC(sub_82A1471C);
PPC_FUNC_IMPL(__imp__sub_82A1471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14720"))) PPC_WEAK_FUNC(sub_82A14720);
PPC_FUNC_IMPL(__imp__sub_82A14720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A14728;
	__savegprlr_20(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,15256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15256, temp.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r30,11
	ctx.r30.s64 = 11;
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
loc_82A14758:
	// addi r8,r10,3826
	ctx.r8.s64 = ctx.r10.s64 + 3826;
	// addi r9,r10,3815
	ctx.r9.s64 = ctx.r10.s64 + 3815;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,7480
	ctx.r29.s64 = ctx.r10.s64 + 7480;
	// addi r7,r10,7450
	ctx.r7.s64 = ctx.r10.s64 + 7450;
	// addi r28,r10,7512
	ctx.r28.s64 = ctx.r10.s64 + 7512;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u32);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r27,r10,7604
	ctx.r27.s64 = ctx.r10.s64 + 7604;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r23,r3
	PPC_STORE_U32(ctx.r23.u32 + ctx.r3.u32, ctx.r4.u32);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,15348(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15348, ctx.r11.u8);
	// addi r26,r10,7615
	ctx.r26.s64 = ctx.r10.s64 + 7615;
	// addi r25,r10,7626
	ctx.r25.s64 = ctx.r10.s64 + 7626;
	// stwx r6,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// addi r24,r10,7637
	ctx.r24.s64 = ctx.r10.s64 + 7637;
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// rlwinm r27,r26,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r29,r3
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r31.u32);
	// addi r22,r10,7582
	ctx.r22.s64 = ctx.r10.s64 + 7582;
	// stwx r11,r28,r3
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r21,r10,7593
	ctx.r21.s64 = ctx.r10.s64 + 7593;
	// addi r20,r10,7527
	ctx.r20.s64 = ctx.r10.s64 + 7527;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r24,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r11.u32);
	// rlwinm r25,r22,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r21,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r20,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,3769
	ctx.r27.s64 = ctx.r10.s64 + 3769;
	// stwx r11,r26,r3
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r11,30686(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30686, ctx.r11.u8);
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r5,30664(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30664, ctx.r5.u8);
	// stwx r11,r25,r3
	PPC_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r29,r3
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r28,r3
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82A14804:
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// stwx r6,r29,r3
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r6.u32);
	// blt cr6,0x82a14804
	if (cr6.lt) goto loc_82A14804;
	// addi r8,r10,7560
	ctx.r8.s64 = ctx.r10.s64 + 7560;
	// addi r7,r10,7571
	ctx.r7.s64 = ctx.r10.s64 + 7571;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,7683
	ctx.r29.s64 = ctx.r10.s64 + 7683;
	// addi r28,r10,7694
	ctx.r28.s64 = ctx.r10.s64 + 7694;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,7709
	ctx.r27.s64 = ctx.r10.s64 + 7709;
	// addi r26,r10,7466
	ctx.r26.s64 = ctx.r10.s64 + 7466;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,15448
	ctx.r8.s64 = ctx.r10.s64 + 15448;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r5,30644(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30644, ctx.r5.u8);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,30675(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30675, ctx.r11.u8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r5,30697(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30697, ctx.r5.u8);
	// stb r11,30708(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30708, ctx.r11.u8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stb r11,30719(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30719, ctx.r11.u8);
	// stfsx f13,r29,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, temp.u32);
	// stwx r11,r28,r3
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u32);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,30820(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30820, ctx.r11.u8);
	// stwx r11,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r11.u32);
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// stwx r30,r26,r3
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r30.u32);
	// stb r11,30884(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30884, ctx.r11.u8);
	// sthx r11,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u16);
	// stb r11,30924(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30924, ctx.r11.u8);
	// blt cr6,0x82a14758
	if (cr6.lt) goto loc_82A14758;
	// stfs f0,30596(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 30596, temp.u32);
	// stw r11,30592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30592, ctx.r11.u32);
	// stb r11,29788(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29788, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r6,30656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30656, ctx.r6.u32);
	// stw r6,30660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30660, ctx.r6.u32);
	// sth r11,30832(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30832, ctx.r11.u16);
	// stw r11,30880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30880, ctx.r11.u32);
loc_82A148C4:
	// addi r9,r10,3762
	ctx.r9.s64 = ctx.r10.s64 + 3762;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stwx r30,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r30.u32);
	// blt cr6,0x82a148c4
	if (cr6.lt) goto loc_82A148C4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82A148E4:
	// mulli r9,r5,11
	ctx.r9.s64 = ctx.r5.s64 * 11;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r9,3701
	ctx.r7.s64 = ctx.r9.s64 + 3701;
loc_82A148F8:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// stw r11,29604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29604, ctx.r11.u32);
	// bdnz 0x82a148f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A148F8;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x82a148e4
	if (cr6.lt) goto loc_82A148E4;
	// stfs f0,29796(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 29796, temp.u32);
	// stw r6,29792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29792, ctx.r6.u32);
	// stfs f0,29780(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 29780, temp.u32);
	// stw r6,29844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29844, ctx.r6.u32);
	// stw r6,29848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29848, ctx.r6.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r6,29852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29852, ctx.r6.u32);
	// stw r6,29860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29860, ctx.r6.u32);
	// stw r11,29908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29908, ctx.r11.u32);
	// stw r11,29912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29912, ctx.r11.u32);
loc_82A14958:
	// addi r9,r10,10004
	ctx.r9.s64 = ctx.r10.s64 + 10004;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stb r11,30013(r8)
	PPC_STORE_U8(ctx.r8.u32 + 30013, ctx.r11.u8);
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// stb r11,30014(r8)
	PPC_STORE_U8(ctx.r8.u32 + 30014, ctx.r11.u8);
	// blt cr6,0x82a14958
	if (cr6.lt) goto loc_82A14958;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r3,30028
	ctx.r10.s64 = ctx.r3.s64 + 30028;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A14998:
	// stw r6,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r6.u32);
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a14998
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14998;
loc_82A149A4:
	// addi r10,r11,3768
	ctx.r10.s64 = ctx.r11.s64 + 3768;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stwx r6,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// blt cr6,0x82a149a4
	if (cr6.lt) goto loc_82A149A4;
	// stfs f0,30040(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 30040, temp.u32);
	// stw r6,15060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15060, ctx.r6.u32);
	// stfs f0,30044(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 30044, temp.u32);
	// stw r6,15064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15064, ctx.r6.u32);
	// stfs f0,29784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 29784, temp.u32);
	// stw r6,15068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15068, ctx.r6.u32);
	// stw r6,15104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15104, ctx.r6.u32);
	// stw r6,15108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15108, ctx.r6.u32);
	// stw r6,15112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15112, ctx.r6.u32);
	// stw r6,15116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15116, ctx.r6.u32);
	// stw r6,30920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30920, ctx.r6.u32);
	// stw r6,15120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15120, ctx.r6.u32);
	// stw r6,29856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29856, ctx.r6.u32);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A149F8"))) PPC_WEAK_FUNC(sub_82A149F8);
PPC_FUNC_IMPL(__imp__sub_82A149F8) {
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
	ctx.lr = 0x82A14A00;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A14A20:
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A14A34:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a14a34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14A34;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bge 0x82a14a20
	if (!cr0.lt) goto loc_82A14A20;
	// addi r5,r23,15304
	ctx.r5.s64 = ctx.r23.s64 + 15304;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mulli r25,r22,11
	ctx.r25.s64 = ctx.r22.s64 * 11;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82A14A5C:
	// add r7,r25,r10
	ctx.r7.u64 = ctx.r25.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a14a70
	if (!cr6.lt) goto loc_82A14A70;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82a14a74
	goto loc_82A14A74;
loc_82A14A70:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82A14A74:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a14a80
	if (cr6.eq) goto loc_82A14A80;
	// bl 0x82a14600
	ctx.lr = 0x82A14A80;
	sub_82A14600(ctx, base);
loc_82A14A80:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blt cr6,0x82a14a5c
	if (cr6.lt) goto loc_82A14A5C;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A14AD8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a14ad8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14AD8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-17874
	ctx.r8.s64 = -1171390464;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r26,255
	ctx.r26.s64 = 255;
	// ori r29,r8,35747
	ctx.r29.u64 = ctx.r8.u64 | 35747;
	// addi r27,r11,12776
	ctx.r27.s64 = ctx.r11.s64 + 12776;
loc_82A14B04:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a14ccc
	if (cr6.eq) goto loc_82A14CCC;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A14B28:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a14b28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14B28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cdbb0
	ctx.lr = 0x82A14B3C;
	sub_825CDBB0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a14c48
	if (cr6.eq) goto loc_82A14C48;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A14B5C:
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a14b8c
	if (cr6.lt) goto loc_82A14B8C;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// bge cr6,0x82a14b8c
	if (!cr6.lt) goto loc_82A14B8C;
	// mulhwu r11,r9,r29
	ctx.r11.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 * 11;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// b 0x82a14b90
	goto loc_82A14B90;
loc_82A14B8C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A14B90:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfs f0,14000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82a14bb8
	if (cr6.lt) goto loc_82A14BB8;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a14bbc
	if (cr6.lt) goto loc_82A14BBC;
loc_82A14BB8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A14BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a14c3c
	if (cr6.eq) goto loc_82A14C3C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82a14bd8
	if (!cr6.lt) goto loc_82A14BD8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a14c00
	goto loc_82A14C00;
loc_82A14BD8:
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bge cr6,0x82a14be8
	if (!cr6.lt) goto loc_82A14BE8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a14c00
	goto loc_82A14C00;
loc_82A14BE8:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// eqv r8,r11,r9
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_82A14C00:
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// mulli r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 * 11;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stwx r9,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_82A14C3C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// bdnz 0x82a14b5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14B5C;
loc_82A14C48:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3f1b8
	ctx.lr = 0x82A14C54;
	sub_82A3F1B8(ctx, base);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a14ccc
	if (cr6.eq) goto loc_82A14CCC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r8,r11,-10
	ctx.r8.s64 = ctx.r11.s64 + -10;
loc_82A14C78:
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bge cr6,0x82a14ca0
	if (!cr6.lt) goto loc_82A14CA0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a14ca0
	if (!cr6.lt) goto loc_82A14CA0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82a14ca4
	goto loc_82A14CA4;
loc_82A14CA0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82A14CA4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r28
	PPC_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// bdnz 0x82a14c78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A14C78;
loc_82A14CCC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// blt cr6,0x82a14b04
	if (cr6.lt) goto loc_82A14B04;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14CF0"))) PPC_WEAK_FUNC(sub_82A14CF0);
PPC_FUNC_IMPL(__imp__sub_82A14CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A14CF8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f31,15256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 15256);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a229e8
	ctx.lr = 0x82A14D1C;
	sub_82A229E8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r26,24(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r27,4460(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// bl 0x82a0c710
	ctx.lr = 0x82A14D3C;
	sub_82A0C710(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r31,15304
	ctx.r28.s64 = ctx.r31.s64 + 15304;
	// addis r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f11,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r4,-21136
	ctx.r4.s64 = ctx.r4.s64 + -21136;
	// addi r11,r31,15128
	ctx.r11.s64 = ctx.r31.s64 + 15128;
	// addi r5,r3,320
	ctx.r5.s64 = ctx.r3.s64 + 320;
	// li r8,11
	ctx.r8.s64 = 11;
loc_82A14D64:
	// cmpwi cr6,r7,11
	cr6.compare<int32_t>(ctx.r7.s32, 11, xer);
	// bge cr6,0x82a14dd4
	if (!cr6.lt) goto loc_82A14DD4;
	// lwz r10,-5288(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -5288);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a14dd4
	if (!cr6.eq) goto loc_82A14DD4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// beq cr6,0x82a14dd4
	if (cr6.eq) goto loc_82A14DD4;
	// lwz r10,-12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a14dd4
	if (!cr6.eq) goto loc_82A14DD4;
	// lbz r9,5(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a14dc8
	if (cr6.eq) goto loc_82A14DC8;
	// cmpwi cr6,r7,11
	cr6.compare<int32_t>(ctx.r7.s32, 11, xer);
	// bge cr6,0x82a14dc8
	if (!cr6.lt) goto loc_82A14DC8;
	// lwz r10,14804(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14804);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a14dc8
	if (cr6.eq) goto loc_82A14DC8;
	// lfs f0,-872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -868);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -864);
	ctx.f12.f64 = double(temp.f32);
loc_82A14DC8:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x82a14ee0
	goto loc_82A14EE0;
loc_82A14DD4:
	// lwz r10,-872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -872);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// lwz r9,-868(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -868);
	// lwz r31,-864(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -864);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bne cr6,0x82a14e30
	if (!cr6.eq) goto loc_82A14E30;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x82a14e30
	if (!cr6.eq) goto loc_82A14E30;
	// cmplwi cr6,r7,11
	cr6.compare<uint32_t>(ctx.r7.u32, 11, xer);
	// bge cr6,0x82a14e0c
	if (!cr6.lt) goto loc_82A14E0C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82a14e10
	goto loc_82A14E10;
loc_82A14E0C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82A14E10:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x82a14e30
	if (cr6.lt) goto loc_82A14E30;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x82a14ee0
	goto loc_82A14EE0;
loc_82A14E30:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f11
	cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// ble cr6,0x82a14ed0
	if (!cr6.gt) goto loc_82A14ED0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x82a14ea4
	if (!cr6.eq) goto loc_82A14EA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a14ea4
	if (cr6.eq) goto loc_82A14EA4;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82a14e68
	if (cr6.eq) goto loc_82A14E68;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82a14ea4
	if (!cr6.eq) goto loc_82A14EA4;
loc_82A14E68:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a14ea4
	if (!cr6.eq) goto loc_82A14EA4;
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,-740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	ctx.f13.f64 = double(temp.f32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x82a14ea4
	if (!cr6.gt) goto loc_82A14EA4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A14EA4:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a14ebc
	if (cr6.eq) goto loc_82A14EBC;
	// lfs f13,-740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_82A14EBC:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// b 0x82a14ed4
	goto loc_82A14ED4;
loc_82A14ED0:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
loc_82A14ED4:
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82A14EE0:
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,60
	ctx.r5.s64 = ctx.r5.s64 + 60;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82a14d64
	if (!cr0.eq) goto loc_82A14D64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14F0C"))) PPC_WEAK_FUNC(sub_82A14F0C);
PPC_FUNC_IMPL(__imp__sub_82A14F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14F10"))) PPC_WEAK_FUNC(sub_82A14F10);
PPC_FUNC_IMPL(__imp__sub_82A14F10) {
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
	ctx.lr = 0x82A14F18;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce770
	ctx.lr = 0x82A14F20;
	__savefpr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x82a14f3c
	if (!cr6.lt) goto loc_82A14F3C;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x82a14f64
	goto loc_82A14F64;
loc_82A14F3C:
	// cmpwi cr6,r19,11
	cr6.compare<int32_t>(ctx.r19.s32, 11, xer);
	// bge cr6,0x82a14f4c
	if (!cr6.lt) goto loc_82A14F4C;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x82a14f64
	goto loc_82A14F64;
loc_82A14F4C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r19
	xer.ca = ctx.r19.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r19.s64 - ctx.r11.s64;
	// eqv r9,r11,r19
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r19.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r22,r7,31
	ctx.r22.u64 = ctx.r7.u32 & 0x1;
loc_82A14F64:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A14F74;
	sub_82A0C710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,44728
	ctx.r9.u64 = ctx.r11.u64 | 44728;
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82a14f94
	if (cr6.lt) goto loc_82A14F94;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82a14fa4
	goto loc_82A14FA4;
loc_82A14F94:
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r7.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82A14FA4:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bge cr6,0x82a14fb4
	if (!cr6.lt) goto loc_82A14FB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a14fdc
	goto loc_82A14FDC;
loc_82A14FB4:
	// cmpwi cr6,r19,11
	cr6.compare<int32_t>(ctx.r19.s32, 11, xer);
	// bge cr6,0x82a14fc4
	if (!cr6.lt) goto loc_82A14FC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a14fdc
	goto loc_82A14FDC;
loc_82A14FC4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r19
	xer.ca = ctx.r19.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r19.s64 - ctx.r11.s64;
	// eqv r9,r11,r19
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r19.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A14FDC:
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A14FE4;
	sub_82A0C710(ctx, base);
	// addis r20,r3,1
	ctx.r20.s64 = ctx.r3.s64 + 65536;
	// addi r20,r20,-20810
	ctx.r20.s64 = ctx.r20.s64 + -20810;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a14ffc
	if (cr6.eq) goto loc_82A14FFC;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82A14FFC:
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r21,r22,11
	ctx.r21.s64 = ctx.r22.s64 * 11;
	// lwz r7,292(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A15018:
	// add. r10,r21,r9
	ctx.r10.u64 = ctx.r21.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a1502c
	if (cr0.lt) goto loc_82A1502C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a15030
	if (cr6.lt) goto loc_82A15030;
loc_82A1502C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A15030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a15050
	if (cr6.eq) goto loc_82A15050;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r11,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a15054
	goto loc_82A15054;
loc_82A15050:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A15054:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1506c
	if (cr6.eq) goto loc_82A1506C;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
loc_82A1506C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a15018
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15018;
	// addi r9,r8,-6
	ctx.r9.s64 = ctx.r8.s64 + -6;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x82a15094
	if (!cr6.gt) goto loc_82A15094;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A15094:
	// clrlwi r23,r30,24
	ctx.r23.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x82a150b4
	if (!cr6.eq) goto loc_82A150B4;
loc_82A150A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7bc
	ctx.lr = 0x82A150B0;
	__restfpr_26(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A150B4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A150BC;
	sub_82A0C710(ctx, base);
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// addi r26,r3,3612
	ctx.r26.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a15130
	if (!cr6.eq) goto loc_82A15130;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a2a6c8
	ctx.lr = 0x82A150E0;
	sub_82A2A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a15130
	if (!cr6.eq) goto loc_82A15130;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// blt cr6,0x82a15118
	if (cr6.lt) goto loc_82A15118;
	// cmpwi cr6,r19,22
	cr6.compare<int32_t>(ctx.r19.s32, 22, xer);
	// bge cr6,0x82a15118
	if (!cr6.lt) goto loc_82A15118;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r19,r10
	ctx.r9.u64 = (uint64_t(ctx.r19.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r7.s64;
	// b 0x82a1511c
	goto loc_82A1511C;
loc_82A15118:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1511C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,29604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29604);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82a150a0
	if (!cr6.eq) goto loc_82A150A0;
loc_82A15130:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r24,292(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x826318d0
	ctx.lr = 0x82A15140;
	sub_826318D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lfs f31,7388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r26,15260
	ctx.r25.s64 = ctx.r26.s64 + 15260;
	// lfs f26,-11408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11408);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,-23848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f27.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f28,-23860(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23860);
	ctx.f28.f64 = double(temp.f32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lfs f29,24500(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24500);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r26,13992
	ctx.r29.s64 = ctx.r26.s64 + 13992;
	// lfs f30,16088(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16088);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r26,29604
	ctx.r27.s64 = ctx.r26.s64 + 29604;
loc_82A15184:
	// add r31,r21,r30
	ctx.r31.u64 = ctx.r21.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1519c
	if (cr6.lt) goto loc_82A1519C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a151a0
	if (cr6.lt) goto loc_82A151A0;
loc_82A1519C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A151A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a151c0
	if (cr6.eq) goto loc_82A151C0;
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
	// b 0x82a151c4
	goto loc_82A151C4;
loc_82A151C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A151C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a15290
	if (cr6.eq) goto loc_82A15290;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a2a6c8
	ctx.lr = 0x82A151E4;
	sub_82A2A6C8(ctx, base);
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a15208
	if (!cr6.eq) goto loc_82A15208;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a15208
	if (!cr6.eq) goto loc_82A15208;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a15290
	if (!cr6.eq) goto loc_82A15290;
loc_82A15208:
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a1521c
	if (!cr6.lt) goto loc_82A1521C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82a15220
	goto loc_82A15220;
loc_82A1521C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82A15220:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82a15268
	if (cr6.gt) goto loc_82A15268;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a15264
	if (cr6.eq) goto loc_82A15264;
	// bdz 0x82a1525c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1525C;
	// bdz 0x82a15254
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A15254;
	// bdz 0x82a1524c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1524C;
	// fadds f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x82a15268
	goto loc_82A15268;
loc_82A1524C:
	// fadds f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// b 0x82a15268
	goto loc_82A15268;
loc_82A15254:
	// fadds f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// b 0x82a15268
	goto loc_82A15268;
loc_82A1525C:
	// fadds f1,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// b 0x82a15268
	goto loc_82A15268;
loc_82A15264:
	// fadds f1,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
loc_82A15268:
	// lwz r11,15112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15112);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x82a15280
	if (cr6.eq) goto loc_82A15280;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a15284
	if (cr6.eq) goto loc_82A15284;
loc_82A15280:
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
loc_82A15284:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cdc30
	ctx.lr = 0x82A15290;
	sub_825CDC30(ctx, base);
loc_82A15290:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a15184
	if (cr6.lt) goto loc_82A15184;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3f1b8
	ctx.lr = 0x82A152B4;
	sub_82A3F1B8(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// blt cr6,0x82a152c8
	if (cr6.lt) goto loc_82A152C8;
	// cmpwi cr6,r19,22
	cr6.compare<int32_t>(ctx.r19.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a152cc
	if (cr6.lt) goto loc_82A152CC;
loc_82A152C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A152CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a152e0
	if (cr6.eq) goto loc_82A152E0;
	// addi r11,r1,258
	ctx.r11.s64 = ctx.r1.s64 + 258;
	// lbzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
loc_82A152E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfc r10,r23,r11
	xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7bc
	ctx.lr = 0x82A152FC;
	__restfpr_26(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15300"))) PPC_WEAK_FUNC(sub_82A15300);
PPC_FUNC_IMPL(__imp__sub_82A15300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,7
	ctx.r9.s64 = 7;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82A15344:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15344
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15344;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// bl 0x82a513f0
	ctx.lr = 0x82A15374;
	sub_82A513F0(ctx, base);
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

__attribute__((alias("__imp__sub_82A1538C"))) PPC_WEAK_FUNC(sub_82A1538C);
PPC_FUNC_IMPL(__imp__sub_82A1538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15390"))) PPC_WEAK_FUNC(sub_82A15390);
PPC_FUNC_IMPL(__imp__sub_82A15390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A15398;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r31,-26380
	ctx.r31.s64 = ctx.r31.s64 + -26380;
	// addi r28,r28,-26424
	ctx.r28.s64 = ctx.r28.s64 + -26424;
	// subf r26,r3,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a153cc
	if (!cr6.lt) goto loc_82A153CC;
loc_82A153C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x82a1540c
	if (cr6.eq) goto loc_82A1540C;
loc_82A153CC:
	// add r29,r26,r31
	ctx.r29.u64 = ctx.r26.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a194e8
	ctx.lr = 0x82A153DC;
	sub_82A194E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a153f0
	if (!cr6.lt) goto loc_82A153F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82a153f4
	goto loc_82A153F4;
loc_82A153F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A153F4:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a1540c
	if (!cr6.eq) goto loc_82A1540C;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A1540C;
	sub_831CE980(ctx, base);
loc_82A1540C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,196(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// bl 0x82a194c8
	ctx.lr = 0x82A15418;
	sub_82A194C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a153c0
	if (cr6.lt) goto loc_82A153C0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15434"))) PPC_WEAK_FUNC(sub_82A15434);
PPC_FUNC_IMPL(__imp__sub_82A15434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15438"))) PPC_WEAK_FUNC(sub_82A15438);
PPC_FUNC_IMPL(__imp__sub_82A15438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82A15440;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82a15490
	if (cr6.lt) goto loc_82A15490;
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// bge cr6,0x82a15490
	if (!cr6.lt) goto loc_82A15490;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r5,r10
	ctx.r9.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r18,r7,r5
	ctx.r18.s64 = ctx.r5.s64 - ctx.r7.s64;
	// b 0x82a15494
	goto loc_82A15494;
loc_82A15490:
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_82A15494:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r20,9
	cr6.compare<int32_t>(ctx.r20.s32, 9, xer);
	// blt cr6,0x82a154ac
	if (cr6.lt) goto loc_82A154AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82A154AC:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r27,r8,34548
	ctx.r27.u64 = ctx.r8.u64 | 34548;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bge cr6,0x82a1553c
	if (!cr6.lt) goto loc_82A1553C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r28,r24,r27
	ctx.r28.u64 = ctx.r24.u64 + ctx.r27.u64;
loc_82A154D0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917b48
	ctx.lr = 0x82A154E0;
	sub_82917B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a155d4
	if (cr6.eq) goto loc_82A155D4;
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, xer);
	// bne cr6,0x82a15528
	if (!cr6.eq) goto loc_82A15528;
	// add r11,r3,r18
	ctx.r11.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a1551c
	if (!cr6.eq) goto loc_82A1551C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825b0ae0
	ctx.lr = 0x82A15510;
	sub_825B0AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a15528
	if (!cr6.eq) goto loc_82A15528;
loc_82A1551C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// beq cr6,0x82a155dc
	if (cr6.eq) goto loc_82A155DC;
loc_82A15528:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82a154d0
	if (cr6.lt) goto loc_82A154D0;
loc_82A1553C:
	// clrlwi r4,r21,24
	ctx.r4.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// beq cr6,0x82a155dc
	if (cr6.eq) goto loc_82A155DC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r3,r24,r27
	ctx.r3.u64 = ctx.r24.u64 + ctx.r27.u64;
	// bl 0x82917b48
	ctx.lr = 0x82A15554;
	sub_82917B48(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r10,r22,r3
	ctx.r10.u64 = ctx.r22.u64 + ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
loc_82A15560:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r22,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r22.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a15560
	if (cr6.lt) goto loc_82A15560;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r19.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// blt cr6,0x82a155a8
	if (cr6.lt) goto loc_82A155A8;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x82a155ac
	if (cr6.lt) goto loc_82A155AC;
loc_82A155A8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A155AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a155c0
	if (cr6.eq) goto loc_82A155C0;
	// add r11,r3,r18
	ctx.r11.u64 = ctx.r3.u64 + ctx.r18.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A155C0:
	// stw r17,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r17.u32);
	// bl 0x82dd3a30
	ctx.lr = 0x82A155C8;
	sub_82DD3A30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82A155D4:
	// clrlwi r21,r29,24
	ctx.r21.u64 = ctx.r29.u32 & 0xFF;
	// b 0x82a1553c
	goto loc_82A1553C;
loc_82A155DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A155E8"))) PPC_WEAK_FUNC(sub_82A155E8);
PPC_FUNC_IMPL(__imp__sub_82A155E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A155F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x82a156f8
	if (!cr6.lt) goto loc_82A156F8;
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// beq cr6,0x82a156f8
	if (cr6.eq) goto loc_82A156F8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b48
	ctx.lr = 0x82A15620;
	sub_82917B48(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1563C:
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a1563c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1563C;
	// li r11,255
	ctx.r11.s64 = 255;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bne cr6,0x82a1568c
	if (!cr6.eq) goto loc_82A1568C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a1566c
	if (cr6.lt) goto loc_82A1566C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a15670
	if (cr6.lt) goto loc_82A15670;
loc_82A1566C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A15670:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a156f4
	if (cr6.eq) goto loc_82A156F4;
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// bl 0x82dd3a30
	ctx.lr = 0x82A15684;
	sub_82DD3A30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1568C:
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bne cr6,0x82a156f4
	if (!cr6.eq) goto loc_82A156F4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a156a8
	if (cr6.lt) goto loc_82A156A8;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a156ac
	if (cr6.lt) goto loc_82A156AC;
loc_82A156A8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A156AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a156f4
	if (cr6.eq) goto loc_82A156F4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a15700
	if (cr6.lt) goto loc_82A15700;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// bge cr6,0x82a15700
	if (!cr6.lt) goto loc_82A15700;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r29,r10
	ctx.r9.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r7.s64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x82a156f4
	if (!cr6.lt) goto loc_82A156F4;
loc_82A156E8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A156F4:
	// bl 0x82dd3a30
	ctx.lr = 0x82A156F8;
	sub_82DD3A30(ctx, base);
loc_82A156F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A15700:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82a156e8
	goto loc_82A156E8;
}

__attribute__((alias("__imp__sub_82A15708"))) PPC_WEAK_FUNC(sub_82A15708);
PPC_FUNC_IMPL(__imp__sub_82A15708) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x82a14600
	ctx.lr = 0x82A1571C;
	sub_82A14600(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82a1579c
	if (cr6.gt) goto loc_82A1579C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a1579c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A1579C;
	// bdzf 4*cr6+eq,0x82a15768
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A15768;
	// bdzf 4*cr6+eq,0x82a1579c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A1579C;
	// bdzf 4*cr6+eq,0x82a1579c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A1579C;
	// bdzf 4*cr6+eq,0x82a15780
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A15780;
	// bdzf 4*cr6+eq,0x82a1579c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A1579C;
	// bdzf 4*cr6+eq,0x82a1579c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A1579C;
	// bne cr6,0x82a15798
	if (!cr6.eq) goto loc_82A15798;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A15768:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A15780:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A15798:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82A1579C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A157B0"))) PPC_WEAK_FUNC(sub_82A157B0);
PPC_FUNC_IMPL(__imp__sub_82A157B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A157B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,10
	ctx.r30.s64 = 10;
loc_82A157CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a3b9a8
	ctx.lr = 0x82A157D4;
	sub_82A3B9A8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,1272
	ctx.r29.s64 = ctx.r29.s64 + 1272;
	// bge 0x82a157cc
	if (!cr0.lt) goto loc_82A157CC;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,13988
	ctx.r11.s64 = ctx.r31.s64 + 13988;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A157F4:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a157f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A157F4;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,14252
	ctx.r11.s64 = ctx.r31.s64 + 14252;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A15810:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15810
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15810;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,14516
	ctx.r11.s64 = ctx.r31.s64 + 14516;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1582C:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1582c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1582C;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,14780
	ctx.r11.s64 = ctx.r31.s64 + 14780;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A15848:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15848;
	// li r10,11
	ctx.r10.s64 = 11;
	// stfs f31,15080(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15080, temp.u32);
	// stfs f31,15084(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15084, temp.u32);
	// addi r11,r31,15120
	ctx.r11.s64 = ctx.r31.s64 + 15120;
	// stfs f31,15088(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15088, temp.u32);
	// stfs f31,15092(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15092, temp.u32);
	// stfs f31,15096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15096, temp.u32);
	// stfs f31,15100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15100, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1587C:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1587c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1587C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,15356
	ctx.r11.s64 = ctx.r31.s64 + 15356;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A15898:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15898;
	// addi r29,r31,15492
	ctx.r29.s64 = ctx.r31.s64 + 15492;
	// li r30,10
	ctx.r30.s64 = 10;
loc_82A158B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a3b9a8
	ctx.lr = 0x82A158B8;
	sub_82A3B9A8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,1272
	ctx.r29.s64 = ctx.r29.s64 + 1272;
	// bge 0x82a158b0
	if (!cr0.lt) goto loc_82A158B0;
	// li r9,22
	ctx.r9.s64 = 22;
	// stfs f31,29484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29484, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,29488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29488, temp.u32);
	// stfs f31,29492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29492, temp.u32);
	// addi r10,r31,29600
	ctx.r10.s64 = ctx.r31.s64 + 29600;
	// stfs f31,29496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29496, temp.u32);
	// stb r11,29500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29500, ctx.r11.u8);
	// stfs f31,29504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29504, temp.u32);
	// stb r11,29501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29501, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f31,29508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29508, temp.u32);
	// stfs f31,29512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29512, temp.u32);
	// stb r11,29520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29520, ctx.r11.u8);
	// stfs f31,29516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29516, temp.u32);
	// stb r11,29521(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29521, ctx.r11.u8);
	// stfs f31,29524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29524, temp.u32);
	// stb r11,29540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29540, ctx.r11.u8);
	// stfs f31,29528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29528, temp.u32);
	// stb r11,29541(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29541, ctx.r11.u8);
	// stfs f31,29532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29532, temp.u32);
	// stb r11,29560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29560, ctx.r11.u8);
	// stfs f31,29536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29536, temp.u32);
	// stb r11,29561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29561, ctx.r11.u8);
	// stfs f31,29544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29544, temp.u32);
	// stb r11,29580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29580, ctx.r11.u8);
	// stfs f31,29548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29548, temp.u32);
	// stb r11,29581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29581, ctx.r11.u8);
	// stfs f31,29552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29552, temp.u32);
	// stb r11,29600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29600, ctx.r11.u8);
	// stfs f31,29556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29556, temp.u32);
	// stb r11,29601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29601, ctx.r11.u8);
	// stfs f31,29564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29564, temp.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f31,29568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29568, temp.u32);
	// stfs f31,29572(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29572, temp.u32);
	// stfs f31,29576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29576, temp.u32);
	// stfs f31,29584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29584, temp.u32);
	// stfs f31,29588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29588, temp.u32);
	// stfs f31,29592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29592, temp.u32);
	// stfs f31,29596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 29596, temp.u32);
loc_82A15968:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a15968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15968;
	// addi r10,r31,29916
	ctx.r10.s64 = ctx.r31.s64 + 29916;
	// stw r11,29916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29916, ctx.r11.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A1598C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1598c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1598C;
	// addi r10,r31,29964
	ctx.r10.s64 = ctx.r31.s64 + 29964;
	// stw r11,29964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29964, ctx.r11.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A159AC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a159ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A159AC;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,30100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30100, ctx.r11.u32);
	// stb r11,30104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30104, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,30092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30092, ctx.r10.u32);
	// stw r10,30096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30096, ctx.r10.u32);
	// stfs f31,30600(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30600, temp.u32);
	// stfs f31,30604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30604, temp.u32);
	// addi r10,r31,30632
	ctx.r10.s64 = ctx.r31.s64 + 30632;
	// stfs f31,30608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30608, temp.u32);
	// stfs f31,30612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30612, temp.u32);
	// stfs f31,30616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30616, temp.u32);
	// stfs f31,30620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30620, temp.u32);
	// stfs f31,30624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30624, temp.u32);
	// stfs f31,30628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 30628, temp.u32);
	// stw r11,30632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30632, ctx.r11.u32);
	// stw r11,30636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30636, ctx.r11.u32);
	// stw r11,30640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30640, ctx.r11.u32);
	// bl 0x82a14720
	ctx.lr = 0x82A15A00;
	sub_82A14720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15A0C"))) PPC_WEAK_FUNC(sub_82A15A0C);
PPC_FUNC_IMPL(__imp__sub_82A15A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15A10"))) PPC_WEAK_FUNC(sub_82A15A10);
PPC_FUNC_IMPL(__imp__sub_82A15A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r10,1280
	ctx.r11.s64 = ctx.r10.s64 + 1280;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,15348(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15348, ctx.r9.u8);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r10,1272
	ctx.r11.s64 = ctx.r10.s64 * 1272;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,15492
	ctx.r3.s64 = ctx.r11.s64 + 15492;
	// b 0x825a5200
	sub_825A5200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15A6C"))) PPC_WEAK_FUNC(sub_82A15A6C);
PPC_FUNC_IMPL(__imp__sub_82A15A6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A15A70"))) PPC_WEAK_FUNC(sub_82A15A70);
PPC_FUNC_IMPL(__imp__sub_82A15A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mulli r11,r11,1272
	ctx.r11.s64 = ctx.r11.s64 * 1272;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r3,15492
	ctx.r4.s64 = ctx.r3.s64 + 15492;
	// b 0x825a5200
	sub_825A5200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15A90"))) PPC_WEAK_FUNC(sub_82A15A90);
PPC_FUNC_IMPL(__imp__sub_82A15A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A15A94"))) PPC_WEAK_FUNC(sub_82A15A94);
PPC_FUNC_IMPL(__imp__sub_82A15A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15A98"))) PPC_WEAK_FUNC(sub_82A15A98);
PPC_FUNC_IMPL(__imp__sub_82A15A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A15AA0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,68
	ctx.r22.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a479e8
	ctx.lr = 0x82A15AB8;
	sub_82A479E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r30,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r30.u8);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r23,3
	ctx.r23.s64 = 3;
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// stb r30,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r30.u8);
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// li r27,10
	ctx.r27.s64 = 10;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r26,r11,-60
	ctx.r26.s64 = ctx.r11.s64 + -60;
	// stw r23,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r23.u32);
	// stb r24,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r24.u8);
	// stb r24,253(r31)
	PPC_STORE_U8(ctx.r31.u32 + 253, ctx.r24.u8);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f31,268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
loc_82A15B24:
	// li r10,7
	ctx.r10.s64 = 7;
	// stfs f31,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -8, temp.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stfs f31,-4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -4, temp.u32);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A15B44:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15b44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15B44;
	// stfsu f31,60(r26)
	ctx.fpscr.disableFlushMode();
	ea = 60 + ctx.r26.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// stw r30,-12(r28)
	PPC_STORE_U32(ctx.r28.u32 + -12, ctx.r30.u32);
	// stfs f31,-20(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -20, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,-16(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -16, temp.u32);
	// stfs f31,-8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -8, temp.u32);
	// stfs f31,-4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -4, temp.u32);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stb r30,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r30.u8);
	// bl 0x82a513f0
	ctx.lr = 0x82A15B74;
	sub_82A513F0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// bge 0x82a15b24
	if (!cr0.lt) goto loc_82A15B24;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1020
	ctx.r11.s64 = ctx.r31.s64 + 1020;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A15B8C:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15b8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15B8C;
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// addi r3,r31,1404
	ctx.r3.s64 = ctx.r31.s64 + 1404;
	// stw r30,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r30.u32);
	// stb r30,1389(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1389, ctx.r30.u8);
	// stb r30,1390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1390, ctx.r30.u8);
	// stb r30,1391(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1391, ctx.r30.u8);
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// stw r23,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r23.u32);
	// stb r30,1400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1400, ctx.r30.u8);
	// bl 0x82a512e0
	ctx.lr = 0x82A15BC4;
	sub_82A512E0(ctx, base);
	// addi r3,r31,2724
	ctx.r3.s64 = ctx.r31.s64 + 2724;
	// bl 0x82a51220
	ctx.lr = 0x82A15BCC;
	sub_82A51220(ctx, base);
	// addi r27,r31,2948
	ctx.r27.s64 = ctx.r31.s64 + 2948;
	// stw r23,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r23.u32);
	// li r28,10
	ctx.r28.s64 = 10;
loc_82A15BD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a531b0
	ctx.lr = 0x82A15BE0;
	sub_82A531B0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// bge 0x82a15bd8
	if (!cr0.lt) goto loc_82A15BD8;
	// stw r30,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r30.u32);
	// addi r3,r31,3612
	ctx.r3.s64 = ctx.r31.s64 + 3612;
	// bl 0x82a157b0
	ctx.lr = 0x82A15BF8;
	sub_82A157B0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82918eb8
	ctx.lr = 0x82A15C04;
	sub_82918EB8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26448
	ctx.r3.s64 = ctx.r3.s64 + -26448;
	// bl 0x8291b9a0
	ctx.lr = 0x82A15C10;
	sub_8291B9A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,39100
	ctx.r9.u64 = ctx.r11.u64 | 39100;
	// ori r8,r10,39104
	ctx.r8.u64 = ctx.r10.u64 | 39104;
	// li r28,5
	ctx.r28.s64 = 5;
	// li r25,4
	ctx.r25.s64 = 4;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// li r27,10
	ctx.r27.s64 = 10;
	// stwx r28,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u32);
	// addi r26,r26,-26380
	ctx.r26.s64 = ctx.r26.s64 + -26380;
	// stwx r25,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r25.u32);
loc_82A15C3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a19710
	ctx.lr = 0x82A15C44;
	sub_82A19710(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r26,r26,52
	ctx.r26.s64 = ctx.r26.s64 + 52;
	// bge 0x82a15c3c
	if (!cr0.lt) goto loc_82A15C3C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,39728
	ctx.r11.u64 = ctx.r11.u64 | 39728;
	// ori r10,r10,39732
	ctx.r10.u64 = ctx.r10.u64 | 39732;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stwx r23,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// ori r9,r9,39780
	ctx.r9.u64 = ctx.r9.u64 | 39780;
	// addi r26,r26,-25724
	ctx.r26.s64 = ctx.r26.s64 + -25724;
	// ori r11,r3,44296
	ctx.r11.u64 = ctx.r3.u64 | 44296;
	// ori r8,r8,39832
	ctx.r8.u64 = ctx.r8.u64 | 39832;
	// ori r7,r7,44292
	ctx.r7.u64 = ctx.r7.u64 | 44292;
	// ori r6,r6,44293
	ctx.r6.u64 = ctx.r6.u64 | 44293;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// ori r5,r5,44294
	ctx.r5.u64 = ctx.r5.u64 | 44294;
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// ori r4,r4,44295
	ctx.r4.u64 = ctx.r4.u64 | 44295;
	// stfs f31,4(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// ori r10,r27,44300
	ctx.r10.u64 = ctx.r27.u64 | 44300;
	// stfs f31,8(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stfs f31,12(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// addi r3,r3,-21232
	ctx.r3.s64 = ctx.r3.s64 + -21232;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82a14688
	ctx.lr = 0x82A15CEC;
	sub_82A14688(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,-20912
	ctx.r27.s64 = ctx.r27.s64 + -20912;
	// ori r9,r9,44726
	ctx.r9.u64 = ctx.r9.u64 | 44726;
	// ori r10,r10,39828
	ctx.r10.u64 = ctx.r10.u64 | 39828;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,44727
	ctx.r8.u64 = ctx.r8.u64 | 44727;
	// stb r24,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r24.u8);
	// ori r7,r7,44728
	ctx.r7.u64 = ctx.r7.u64 | 44728;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r27,r11,44748
	ctx.r27.u64 = ctx.r11.u64 | 44748;
	// ori r6,r6,44732
	ctx.r6.u64 = ctx.r6.u64 | 44732;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r5,r5,44736
	ctx.r5.u64 = ctx.r5.u64 | 44736;
	// ori r4,r4,44740
	ctx.r4.u64 = ctx.r4.u64 | 44740;
	// ori r3,r3,44744
	ctx.r3.u64 = ctx.r3.u64 | 44744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stwx r30,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r30.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r8,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// ori r9,r9,44752
	ctx.r9.u64 = ctx.r9.u64 | 44752;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
loc_82A15D88:
	// addi r8,r11,11159
	ctx.r8.s64 = ctx.r11.s64 + 11159;
	// addi r7,r11,298
	ctx.r7.s64 = ctx.r11.s64 + 298;
	// addi r6,r11,309
	ctx.r6.s64 = ctx.r11.s64 + 309;
	// addi r10,r11,245
	ctx.r10.s64 = ctx.r11.s64 + 245;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// addi r4,r11,234
	ctx.r4.s64 = ctx.r11.s64 + 234;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// addi r3,r11,331
	ctx.r3.s64 = ctx.r11.s64 + 331;
	// stwx r29,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r27,r11,51
	ctx.r27.s64 = ctx.r11.s64 + 51;
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r26,r11,892
	ctx.r26.s64 = ctx.r11.s64 + 892;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r21,r11,9778
	ctx.r21.s64 = ctx.r11.s64 + 9778;
	// stwx r30,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r20,r11,9934
	ctx.r20.s64 = ctx.r11.s64 + 9934;
	// stwx r29,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r29.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r21,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r4,r20,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r29.u32);
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// stb r30,1156(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1156, ctx.r30.u8);
	// stb r30,1167(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1167, ctx.r30.u8);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stbx r30,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u8);
	// stb r30,1178(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1178, ctx.r30.u8);
	// stwx r29,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r28,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r28.u32);
	// blt cr6,0x82a15d88
	if (cr6.lt) goto loc_82A15D88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// ori r9,r11,44724
	ctx.r9.u64 = ctx.r11.u64 | 44724;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stb r24,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r24.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r23,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r23.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// lfs f0,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// sthx r30,r31,r9
	PPC_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u16);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stb r25,1368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1368, ctx.r25.u8);
	// stb r24,1369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1369, ctx.r24.u8);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r30,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r30.u8);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// stb r30,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r30.u8);
	// stb r30,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r30.u8);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// stw r29,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r29.u32);
	// stb r30,1388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1388, ctx.r30.u8);
	// stw r29,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r29.u32);
	// stb r8,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r8.u8);
	// bl 0x82a47788
	ctx.lr = 0x82A15EB8;
	sub_82A47788(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r7,39784
	ctx.r4.u64 = ctx.r7.u64 | 39784;
	// ori r3,r6,39788
	ctx.r3.u64 = ctx.r6.u64 | 39788;
	// ori r10,r5,39108
	ctx.r10.u64 = ctx.r5.u64 | 39108;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82A15EE4:
	// addi r10,r11,9948
	ctx.r10.s64 = ctx.r11.s64 + 9948;
	// addi r9,r11,9953
	ctx.r9.s64 = ctx.r11.s64 + 9953;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stwx r29,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r29.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// stfsx f31,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// blt cr6,0x82a15ee4
	if (cr6.lt) goto loc_82A15EE4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1114
	ctx.r10.s64 = 1114;
	// ori r9,r11,39808
	ctx.r9.u64 = ctx.r11.u64 | 39808;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-25700
	ctx.r11.s64 = ctx.r11.s64 + -25700;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
loc_82A15F2C:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a15f2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A15F2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15F44"))) PPC_WEAK_FUNC(sub_82A15F44);
PPC_FUNC_IMPL(__imp__sub_82A15F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15F48"))) PPC_WEAK_FUNC(sub_82A15F48);
PPC_FUNC_IMPL(__imp__sub_82A15F48) {
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
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,2640
	ctx.r11.s64 = ctx.r11.s64 + 2640;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82A15F6C:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzu r5,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x831097c0
	ctx.lr = 0x82A15F7C;
	sub_831097C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,25
	cr6.compare<uint32_t>(ctx.r31.u32, 25, xer);
	// blt cr6,0x82a15f6c
	if (cr6.lt) goto loc_82A15F6C;
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

__attribute__((alias("__imp__sub_82A15FA0"))) PPC_WEAK_FUNC(sub_82A15FA0);
PPC_FUNC_IMPL(__imp__sub_82A15FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A15FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r5,100
	ctx.r28.s64 = ctx.r5.s64 + 100;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A15FBC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a15fcc
	if (cr6.lt) goto loc_82A15FCC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A15FCC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a15fe8
	if (!cr6.eq) goto loc_82A15FE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a15ff0
	goto loc_82A15FF0;
loc_82A15FE8:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A15FF0:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a16010
	if (!cr6.eq) goto loc_82A16010;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16010
	if (!cr6.eq) goto loc_82A16010;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x83109868
	ctx.lr = 0x82A16010;
	sub_83109868(ctx, base);
loc_82A16010:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a15fbc
	if (cr6.lt) goto loc_82A15FBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16024"))) PPC_WEAK_FUNC(sub_82A16024);
PPC_FUNC_IMPL(__imp__sub_82A16024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16028"))) PPC_WEAK_FUNC(sub_82A16028);
PPC_FUNC_IMPL(__imp__sub_82A16028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A16030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r4,100
	ctx.r29.s64 = ctx.r4.s64 + 100;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A16040:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a16050
	if (cr6.lt) goto loc_82A16050;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A16050:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a1608c
	if (cr6.eq) goto loc_82A1608C;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a1608c
	if (!cr6.lt) goto loc_82A1608C;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1608c
	if (!cr6.eq) goto loc_82A1608C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x83109868
	ctx.lr = 0x82A1608C;
	sub_83109868(ctx, base);
loc_82A1608C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a16040
	if (cr6.lt) goto loc_82A16040;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A160A0"))) PPC_WEAK_FUNC(sub_82A160A0);
PPC_FUNC_IMPL(__imp__sub_82A160A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A160A8;
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a160cc
	if (cr6.lt) goto loc_82A160CC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a160d0
	if (cr6.lt) goto loc_82A160D0;
loc_82A160CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A160D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16180
	if (cr6.eq) goto loc_82A16180;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16144
	if (cr6.eq) goto loc_82A16144;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a1610c
	if (!cr6.lt) goto loc_82A1610C;
loc_82A160F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a15fa0
	ctx.lr = 0x82A16104;
	sub_82A15FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1610C:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a160f0
	if (cr6.lt) goto loc_82A160F0;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82a15fa0
	ctx.lr = 0x82A1613C;
	sub_82A15FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A16144:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x82A16150;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82a16180
	if (!cr6.lt) goto loc_82A16180;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a16180
	if (!cr6.eq) goto loc_82A16180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d83f0
	ctx.lr = 0x82A16178;
	sub_825D83F0(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bl 0x83109868
	ctx.lr = 0x82A16180;
	sub_83109868(ctx, base);
loc_82A16180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16188"))) PPC_WEAK_FUNC(sub_82A16188);
PPC_FUNC_IMPL(__imp__sub_82A16188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x82a161a0
	if (!cr6.lt) goto loc_82A161A0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A161A0:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A161A8"))) PPC_WEAK_FUNC(sub_82A161A8);
PPC_FUNC_IMPL(__imp__sub_82A161A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a161b8
	if (!cr6.lt) goto loc_82A161B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a161e0
	goto loc_82A161E0;
loc_82A161B8:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a161c8
	if (!cr6.lt) goto loc_82A161C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a161e0
	goto loc_82A161E0;
loc_82A161C8:
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
loc_82A161E0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a16240
	if (!cr6.eq) goto loc_82A16240;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1622c
	if (cr6.lt) goto loc_82A1622C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a1622c
	if (!cr6.lt) goto loc_82A1622C;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r4,r10
	ctx.r9.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82a16240
	if (!cr6.lt) goto loc_82A16240;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A1622C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A16240:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16248"))) PPC_WEAK_FUNC(sub_82A16248);
PPC_FUNC_IMPL(__imp__sub_82A16248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82a16258
	if (cr6.lt) goto loc_82A16258;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
loc_82A16258:
	// mulli r11,r4,204
	ctx.r11.s64 = ctx.r4.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16268"))) PPC_WEAK_FUNC(sub_82A16268);
PPC_FUNC_IMPL(__imp__sub_82A16268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// li r5,164
	ctx.r5.s64 = 164;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16274"))) PPC_WEAK_FUNC(sub_82A16274);
PPC_FUNC_IMPL(__imp__sub_82A16274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16278"))) PPC_WEAK_FUNC(sub_82A16278);
PPC_FUNC_IMPL(__imp__sub_82A16278) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16280"))) PPC_WEAK_FUNC(sub_82A16280);
PPC_FUNC_IMPL(__imp__sub_82A16280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x8291a510
	sub_8291A510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16288"))) PPC_WEAK_FUNC(sub_82A16288);
PPC_FUNC_IMPL(__imp__sub_82A16288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x8291a508
	sub_8291A508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16290"))) PPC_WEAK_FUNC(sub_82A16290);
PPC_FUNC_IMPL(__imp__sub_82A16290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A162A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a162a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A162A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A162B0"))) PPC_WEAK_FUNC(sub_82A162B0);
PPC_FUNC_IMPL(__imp__sub_82A162B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x8291b830
	sub_8291B830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A162BC"))) PPC_WEAK_FUNC(sub_82A162BC);
PPC_FUNC_IMPL(__imp__sub_82A162BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A162C0"))) PPC_WEAK_FUNC(sub_82A162C0);
PPC_FUNC_IMPL(__imp__sub_82A162C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82a162d8
	if (cr6.lt) goto loc_82A162D8;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// blt cr6,0x82a162e0
	if (cr6.lt) goto loc_82A162E0;
loc_82A162D8:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A162E0:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A162F0"))) PPC_WEAK_FUNC(sub_82A162F0);
PPC_FUNC_IMPL(__imp__sub_82A162F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A162F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,6660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6660, ctx.r11.u32);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r3,168
	ctx.r27.s64 = ctx.r3.s64 + 168;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r26,r11,2976
	ctx.r26.s64 = ctx.r11.s64 + 2976;
loc_82A16328:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x82a16354
	if (!cr6.eq) goto loc_82A16354;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a1637c
	goto loc_82A1637C;
loc_82A16354:
	// lhz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a16374
	if (!cr6.eq) goto loc_82A16374;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82a16378
	if (cr6.eq) goto loc_82A16378;
loc_82A16374:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16378:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A1637C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a163d0
	if (!cr6.eq) goto loc_82A163D0;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A16394;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a163a4
	if (!cr6.lt) goto loc_82A163A4;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r25,6668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6668, ctx.r25.u8);
loc_82A163A4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8291a510
	ctx.lr = 0x82A163AC;
	sub_8291A510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a163c4
	if (cr6.eq) goto loc_82A163C4;
	// lwz r11,6664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6664);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6664, ctx.r11.u32);
loc_82A163C4:
	// lwz r11,6660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6660);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6660, ctx.r11.u32);
loc_82A163D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,204
	ctx.r27.s64 = ctx.r27.s64 + 204;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x82a16328
	if (cr6.lt) goto loc_82A16328;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A163F0"))) PPC_WEAK_FUNC(sub_82A163F0);
PPC_FUNC_IMPL(__imp__sub_82A163F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x82a1642c
	if (!cr6.lt) goto loc_82A1642C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A16400:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82a16410
	if (!cr6.lt) goto loc_82A16410;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82a16414
	goto loc_82A16414;
loc_82A16410:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A16414:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a16434
	if (cr6.eq) goto loc_82A16434;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x82a16400
	if (cr6.lt) goto loc_82A16400;
loc_82A1642C:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A16434:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1643C"))) PPC_WEAK_FUNC(sub_82A1643C);
PPC_FUNC_IMPL(__imp__sub_82A1643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16440"))) PPC_WEAK_FUNC(sub_82A16440);
PPC_FUNC_IMPL(__imp__sub_82A16440) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82a163f0
	ctx.lr = 0x82A16454;
	sub_82A163F0(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a16478
	if (!cr6.lt) goto loc_82A16478;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A16478:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1648C"))) PPC_WEAK_FUNC(sub_82A1648C);
PPC_FUNC_IMPL(__imp__sub_82A1648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16490"))) PPC_WEAK_FUNC(sub_82A16490);
PPC_FUNC_IMPL(__imp__sub_82A16490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82a164a0
	if (cr6.lt) goto loc_82A164A0;
loc_82A16498:
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
loc_82A164A0:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82a16498
	if (!cr6.lt) goto loc_82A16498;
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A164C4"))) PPC_WEAK_FUNC(sub_82A164C4);
PPC_FUNC_IMPL(__imp__sub_82A164C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A164C8"))) PPC_WEAK_FUNC(sub_82A164C8);
PPC_FUNC_IMPL(__imp__sub_82A164C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a164dc
	if (cr6.lt) goto loc_82A164DC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a164e0
	if (cr6.lt) goto loc_82A164E0;
loc_82A164DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A164E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16598
	if (cr6.eq) goto loc_82A16598;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a164fc
	if (!cr6.lt) goto loc_82A164FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a16524
	goto loc_82A16524;
loc_82A164FC:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a1650c
	if (!cr6.lt) goto loc_82A1650C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a16524
	goto loc_82A16524;
loc_82A1650C:
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
loc_82A16524:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a16598
	if (!cr6.eq) goto loc_82A16598;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1656c
	if (cr6.lt) goto loc_82A1656C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a1656c
	if (!cr6.lt) goto loc_82A1656C;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r4,r10
	ctx.r9.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82a16570
	if (cr6.lt) goto loc_82A16570;
loc_82A16560:
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A1656C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16570:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82a16560
	if (!cr6.lt) goto loc_82A16560;
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A16598:
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A165A0"))) PPC_WEAK_FUNC(sub_82A165A0);
PPC_FUNC_IMPL(__imp__sub_82A165A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82a165b4
	if (cr6.lt) goto loc_82A165B4;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
loc_82A165B4:
	// mulli r11,r4,204
	ctx.r11.s64 = ctx.r4.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A165C8"))) PPC_WEAK_FUNC(sub_82A165C8);
PPC_FUNC_IMPL(__imp__sub_82A165C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x82a165e4
	if (!cr6.lt) goto loc_82A165E4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82a165f0
	if (cr6.lt) goto loc_82A165F0;
loc_82A165E4:
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
loc_82A165F0:
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16604"))) PPC_WEAK_FUNC(sub_82A16604);
PPC_FUNC_IMPL(__imp__sub_82A16604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16608"))) PPC_WEAK_FUNC(sub_82A16608);
PPC_FUNC_IMPL(__imp__sub_82A16608) {
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
	// bl 0x82a164c8
	ctx.lr = 0x82A16618;
	sub_82A164C8(ctx, base);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1662C"))) PPC_WEAK_FUNC(sub_82A1662C);
PPC_FUNC_IMPL(__imp__sub_82A1662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16630"))) PPC_WEAK_FUNC(sub_82A16630);
PPC_FUNC_IMPL(__imp__sub_82A16630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82a16644
	if (cr6.lt) goto loc_82A16644;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
loc_82A16644:
	// mulli r11,r4,204
	ctx.r11.s64 = ctx.r4.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16658"))) PPC_WEAK_FUNC(sub_82A16658);
PPC_FUNC_IMPL(__imp__sub_82A16658) {
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
	ctx.lr = 0x82A16660;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// addi r29,r11,-204
	ctx.r29.s64 = ctx.r11.s64 + -204;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,31
	ctx.r28.s64 = 31;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,11
	ctx.r26.s64 = 11;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A1668C:
	// stb r31,204(r29)
	PPC_STORE_U8(ctx.r29.u32 + 204, ctx.r31.u8);
	// addi r27,r30,24
	ctx.r27.s64 = ctx.r30.s64 + 24;
	// stb r31,-11(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11, ctx.r31.u8);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stb r31,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r31.u8);
	// stb r31,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r31.u8);
	// bl 0x8291a660
	ctx.lr = 0x82A166C4;
	sub_8291A660(ctx, base);
	// stbu r31,204(r29)
	ea = 204 + ctx.r29.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r29.u32 = ea;
	// stb r31,-11(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11, ctx.r31.u8);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stb r31,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r31.u8);
	// stb r31,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r31.u8);
	// bl 0x8291a570
	ctx.lr = 0x82A166F8;
	sub_8291A570(ctx, base);
	// stb r31,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r31.u8);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,204
	ctx.r30.s64 = ctx.r30.s64 + 204;
	// bge 0x82a1668c
	if (!cr0.lt) goto loc_82A1668C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,6660(r25)
	PPC_STORE_U32(ctx.r25.u32 + 6660, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,6664(r25)
	PPC_STORE_U32(ctx.r25.u32 + 6664, ctx.r31.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r30,r25,144
	ctx.r30.s64 = ctx.r25.s64 + 144;
loc_82A16724:
	// stb r31,-12(r30)
	PPC_STORE_U8(ctx.r30.u32 + -12, ctx.r31.u8);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stb r31,-11(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11, ctx.r31.u8);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stb r31,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r31.u8);
	// stb r31,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r31.u8);
	// bl 0x8291a570
	ctx.lr = 0x82A16758;
	sub_8291A570(ctx, base);
	// stb r31,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r31.u8);
	// stwu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,204
	ctx.r30.s64 = ctx.r30.s64 + 204;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82a16724
	if (cr6.lt) goto loc_82A16724;
	// addi r11,r25,6668
	ctx.r11.s64 = ctx.r25.s64 + 6668;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A1677C:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x82a1677c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1677C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16798"))) PPC_WEAK_FUNC(sub_82A16798);
PPC_FUNC_IMPL(__imp__sub_82A16798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lhz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// addi r11,r11,2976
	ctx.r11.s64 = ctx.r11.s64 + 2976;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a167c4
	if (!cr6.eq) goto loc_82A167C4;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a167e8
	goto loc_82A167E8;
loc_82A167C4:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a167e0
	if (!cr6.eq) goto loc_82A167E0;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a167e4
	if (cr6.eq) goto loc_82A167E4;
loc_82A167E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A167E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A167E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1687c
	if (!cr6.eq) goto loc_82A1687C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A167FC:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82a1686c
	if (!cr6.lt) goto loc_82A1686C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x82a1686c
	if (!cr6.lt) goto loc_82A1686C;
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ld r6,168(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// bne cr6,0x82a16838
	if (!cr6.eq) goto loc_82A16838;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a16860
	goto loc_82A16860;
loc_82A16838:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a16858
	if (!cr6.eq) goto loc_82A16858;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a1685c
	if (cr6.eq) goto loc_82A1685C;
loc_82A16858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1685C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A16860:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16884
	if (!cr6.eq) goto loc_82A16884;
loc_82A1686C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x82a167fc
	if (cr6.lt) goto loc_82A167FC;
loc_82A1687C:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A16884:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1688C"))) PPC_WEAK_FUNC(sub_82A1688C);
PPC_FUNC_IMPL(__imp__sub_82A1688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16890"))) PPC_WEAK_FUNC(sub_82A16890);
PPC_FUNC_IMPL(__imp__sub_82A16890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lhz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,2976
	ctx.r11.s64 = ctx.r11.s64 + 2976;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a168c0
	if (!cr6.eq) goto loc_82A168C0;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a168e4
	goto loc_82A168E4;
loc_82A168C0:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a168dc
	if (!cr6.eq) goto loc_82A168DC;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a168e0
	if (cr6.eq) goto loc_82A168E0;
loc_82A168DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A168E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A168E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1695c
	if (!cr6.eq) goto loc_82A1695C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r9,168
	ctx.r10.s64 = ctx.r9.s64 + 168;
loc_82A168F8:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82a16918
	if (!cr6.eq) goto loc_82A16918;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82a16940
	goto loc_82A16940;
loc_82A16918:
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a16938
	if (!cr6.eq) goto loc_82A16938;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a1693c
	if (cr6.eq) goto loc_82A1693C;
loc_82A16938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1693C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A16940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 + 204;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// blt cr6,0x82a168f8
	if (cr6.lt) goto loc_82A168F8;
loc_82A1695C:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16964"))) PPC_WEAK_FUNC(sub_82A16964);
PPC_FUNC_IMPL(__imp__sub_82A16964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16968"))) PPC_WEAK_FUNC(sub_82A16968);
PPC_FUNC_IMPL(__imp__sub_82A16968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x82a169c4
	if (!cr6.lt) goto loc_82A169C4;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x82a169c4
	if (!cr6.lt) goto loc_82A169C4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82a169a4
	if (cr6.lt) goto loc_82A169A4;
	// addi r11,r4,132
	ctx.r11.s64 = ctx.r4.s64 + 132;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82A169A4:
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82A169C4:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// ld r11,2976(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2976);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A169D4"))) PPC_WEAK_FUNC(sub_82A169D4);
PPC_FUNC_IMPL(__imp__sub_82A169D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A169D8"))) PPC_WEAK_FUNC(sub_82A169D8);
PPC_FUNC_IMPL(__imp__sub_82A169D8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82a16a00
	if (cr6.lt) goto loc_82A16A00;
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a16a04
	if (cr6.lt) goto loc_82A16A04;
loc_82A16A00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16A04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16a40
	if (cr6.eq) goto loc_82A16A40;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A16A18;
	sub_82A164C8(ctx, base);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A16A40:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r11,2976(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2976);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16A60"))) PPC_WEAK_FUNC(sub_82A16A60);
PPC_FUNC_IMPL(__imp__sub_82A16A60) {
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
	// bl 0x82a16798
	ctx.lr = 0x82A16A78;
	sub_82A16798(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a16aa0
	if (!cr6.lt) goto loc_82A16AA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A16AA0:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82A16AB8"))) PPC_WEAK_FUNC(sub_82A16AB8);
PPC_FUNC_IMPL(__imp__sub_82A16AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A16AC0;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a16c10
	if (cr6.lt) goto loc_82A16C10;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// bge cr6,0x82a16c10
	if (!cr6.lt) goto loc_82A16C10;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82a16c10
	if (cr6.lt) goto loc_82A16C10;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bge cr6,0x82a16c10
	if (!cr6.lt) goto loc_82A16C10;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,2976
	ctx.r9.s64 = ctx.r10.s64 + 2976;
	// li r29,1
	ctx.r29.s64 = 1;
	// lhz r30,2976(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2976);
	// lwzx r6,r31,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r6,204
	ctx.r11.s64 = ctx.r6.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// ld r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// bne cr6,0x82a16b2c
	if (!cr6.eq) goto loc_82A16B2C;
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82a16b54
	goto loc_82A16B54;
loc_82A16B2C:
	// lhz r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a16b4c
	if (!cr6.eq) goto loc_82A16B4C;
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82a16b50
	if (cr6.eq) goto loc_82A16B50;
loc_82A16B4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A16B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16c10
	if (!cr6.eq) goto loc_82A16C10;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// mulli r11,r8,204
	ctx.r11.s64 = ctx.r8.s64 * 204;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// ld r9,168(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// bne cr6,0x82a16b98
	if (!cr6.eq) goto loc_82A16B98;
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a16bc0
	goto loc_82A16BC0;
loc_82A16B98:
	// lhz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a16bb8
	if (!cr6.eq) goto loc_82A16BB8;
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82a16bbc
	if (cr6.eq) goto loc_82A16BBC;
loc_82A16BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A16BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16c10
	if (!cr6.eq) goto loc_82A16C10;
	// stwx r8,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// blt cr6,0x82a16c08
	if (cr6.lt) goto loc_82A16C08;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a16c08
	if (!cr6.lt) goto loc_82A16C08;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// mulli r10,r6,204
	ctx.r10.s64 = ctx.r6.s64 * 204;
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r29,332(r10)
	PPC_STORE_U8(ctx.r10.u32 + 332, ctx.r29.u8);
	// stb r29,332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 332, ctx.r29.u8);
	// stb r29,6668(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6668, ctx.r29.u8);
loc_82A16C08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A16C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16C18"))) PPC_WEAK_FUNC(sub_82A16C18);
PPC_FUNC_IMPL(__imp__sub_82A16C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// ld r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 36);
	// addi r11,r11,2976
	ctx.r11.s64 = ctx.r11.s64 + 2976;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a16c50
	if (!cr6.eq) goto loc_82A16C50;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82A16C50:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a16c70
	if (!cr6.eq) goto loc_82A16C70;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a16c74
	if (cr6.eq) goto loc_82A16C74;
loc_82A16C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16C74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16C88"))) PPC_WEAK_FUNC(sub_82A16C88);
PPC_FUNC_IMPL(__imp__sub_82A16C88) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x82a16ce4
	if (!cr6.lt) goto loc_82A16CE4;
	// mulli r11,r5,204
	ctx.r11.s64 = ctx.r5.s64 * 204;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a16c18
	ctx.lr = 0x82A16CB4;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16ce4
	if (cr6.eq) goto loc_82A16CE4;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A16CE4:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r11,2976(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2976);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16D04"))) PPC_WEAK_FUNC(sub_82A16D04);
PPC_FUNC_IMPL(__imp__sub_82A16D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16D08"))) PPC_WEAK_FUNC(sub_82A16D08);
PPC_FUNC_IMPL(__imp__sub_82A16D08) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bge cr6,0x82a16d9c
	if (!cr6.lt) goto loc_82A16D9C;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// blt cr6,0x82a16d3c
	if (cr6.lt) goto loc_82A16D3C;
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// b 0x82a16d48
	goto loc_82A16D48;
loc_82A16D3C:
	// mulli r11,r5,204
	ctx.r11.s64 = ctx.r5.s64 * 204;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
loc_82A16D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16c18
	ctx.lr = 0x82A16D50;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16d9c
	if (cr6.eq) goto loc_82A16D9C;
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16d9c
	if (!cr6.eq) goto loc_82A16D9C;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a16da4
	if (cr6.lt) goto loc_82A16DA4;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8291a510
	ctx.lr = 0x82A16D78;
	sub_8291A510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a16d9c
	if (cr6.eq) goto loc_82A16D9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a16d9c
	if (!cr6.eq) goto loc_82A16D9C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a16e1c
	if (cr6.lt) goto loc_82A16E1C;
loc_82A16D9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a16e20
	goto loc_82A16E20;
loc_82A16DA4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a16440
	ctx.lr = 0x82A16DB0;
	sub_82A16440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x82A16DBC;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82a16e1c
	if (!cr6.lt) goto loc_82A16E1C;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a16e1c
	if (cr6.eq) goto loc_82A16E1C;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a16dec
	if (cr6.eq) goto loc_82A16DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a16e0c
	goto loc_82A16E0C;
loc_82A16DEC:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a16e04
	if (cr6.lt) goto loc_82A16E04;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a16e08
	if (cr6.lt) goto loc_82A16E08;
loc_82A16E04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A16E0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a16e20
	if (!cr6.eq) goto loc_82A16E20;
loc_82A16E1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A16E20:
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

__attribute__((alias("__imp__sub_82A16E38"))) PPC_WEAK_FUNC(sub_82A16E38);
PPC_FUNC_IMPL(__imp__sub_82A16E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16E4C"))) PPC_WEAK_FUNC(sub_82A16E4C);
PPC_FUNC_IMPL(__imp__sub_82A16E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16E50"))) PPC_WEAK_FUNC(sub_82A16E50);
PPC_FUNC_IMPL(__imp__sub_82A16E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82a16e70
	if (cr6.lt) goto loc_82A16E70;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x82a16e70
	if (!cr6.lt) goto loc_82A16E70;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A16E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16E78"))) PPC_WEAK_FUNC(sub_82A16E78);
PPC_FUNC_IMPL(__imp__sub_82A16E78) {
	PPC_FUNC_PROLOGUE();
	// stb r4,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16E80"))) PPC_WEAK_FUNC(sub_82A16E80);
PPC_FUNC_IMPL(__imp__sub_82A16E80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,130(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16E88"))) PPC_WEAK_FUNC(sub_82A16E88);
PPC_FUNC_IMPL(__imp__sub_82A16E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82a16e9c
	if (cr6.lt) goto loc_82A16E9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
loc_82A16E9C:
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16EA4"))) PPC_WEAK_FUNC(sub_82A16EA4);
PPC_FUNC_IMPL(__imp__sub_82A16EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16EA8"))) PPC_WEAK_FUNC(sub_82A16EA8);
PPC_FUNC_IMPL(__imp__sub_82A16EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82a16ebc
	if (cr6.lt) goto loc_82A16EBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
loc_82A16EBC:
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16EC4"))) PPC_WEAK_FUNC(sub_82A16EC4);
PPC_FUNC_IMPL(__imp__sub_82A16EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16EC8"))) PPC_WEAK_FUNC(sub_82A16EC8);
PPC_FUNC_IMPL(__imp__sub_82A16EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82a16edc
	if (cr6.lt) goto loc_82A16EDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
loc_82A16EDC:
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16EE4"))) PPC_WEAK_FUNC(sub_82A16EE4);
PPC_FUNC_IMPL(__imp__sub_82A16EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16EE8"))) PPC_WEAK_FUNC(sub_82A16EE8);
PPC_FUNC_IMPL(__imp__sub_82A16EE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16EF0"))) PPC_WEAK_FUNC(sub_82A16EF0);
PPC_FUNC_IMPL(__imp__sub_82A16EF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,129(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16EF8"))) PPC_WEAK_FUNC(sub_82A16EF8);
PPC_FUNC_IMPL(__imp__sub_82A16EF8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16F00"))) PPC_WEAK_FUNC(sub_82A16F00);
PPC_FUNC_IMPL(__imp__sub_82A16F00) {
	PPC_FUNC_PROLOGUE();
	// stb r4,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16F08"))) PPC_WEAK_FUNC(sub_82A16F08);
PPC_FUNC_IMPL(__imp__sub_82A16F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82a16f48
	if (cr6.eq) goto loc_82A16F48;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A16F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16F50"))) PPC_WEAK_FUNC(sub_82A16F50);
PPC_FUNC_IMPL(__imp__sub_82A16F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,114(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
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

__attribute__((alias("__imp__sub_82A16F60"))) PPC_WEAK_FUNC(sub_82A16F60);
PPC_FUNC_IMPL(__imp__sub_82A16F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a16f74
	if (!cr6.eq) goto loc_82A16F74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16F74:
	// stb r11,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16F7C"))) PPC_WEAK_FUNC(sub_82A16F7C);
PPC_FUNC_IMPL(__imp__sub_82A16F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16F80"))) PPC_WEAK_FUNC(sub_82A16F80);
PPC_FUNC_IMPL(__imp__sub_82A16F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A16F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A16F9C;
	sub_831CDCF0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,27
	ctx.r7.s64 = 27;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// li r6,50
	ctx.r6.s64 = 50;
	// lfs f0,20588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20588);
	ctx.f0.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f13,30444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30444);
	ctx.f13.f64 = double(temp.f32);
	// li r4,23
	ctx.r4.s64 = 23;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// stb r11,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stb r11,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r11.u8);
	// li r30,7
	ctx.r30.s64 = 7;
	// stb r11,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r11.u8);
	// li r29,29
	ctx.r29.s64 = 29;
	// stb r10,103(r31)
	PPC_STORE_U8(ctx.r31.u32 + 103, ctx.r10.u8);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lfs f0,-23848(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// li r3,5
	ctx.r3.s64 = 5;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r5,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r5.u8);
	// stb r4,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r4.u8);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// stb r11,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r11.u8);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stb r11,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
	// stb r11,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r11.u8);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r29,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r29.u8);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stb r3,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r3.u8);
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A170DC"))) PPC_WEAK_FUNC(sub_82A170DC);
PPC_FUNC_IMPL(__imp__sub_82A170DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A170E0"))) PPC_WEAK_FUNC(sub_82A170E0);
PPC_FUNC_IMPL(__imp__sub_82A170E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,1761(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1761);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A170F8"))) PPC_WEAK_FUNC(sub_82A170F8);
PPC_FUNC_IMPL(__imp__sub_82A170F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,1762(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1762);
	// li r10,9
	ctx.r10.s64 = 9;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17110"))) PPC_WEAK_FUNC(sub_82A17110);
PPC_FUNC_IMPL(__imp__sub_82A17110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,1763(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1763);
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

__attribute__((alias("__imp__sub_82A17120"))) PPC_WEAK_FUNC(sub_82A17120);
PPC_FUNC_IMPL(__imp__sub_82A17120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38
	ctx.r10.u64 = ctx.r10.u64 | 38;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a17170
	if (cr6.gt) goto loc_82A17170;
	// beq cr6,0x82a17190
	if (cr6.eq) goto loc_82A17190;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82a17190
	if (!cr6.gt) goto loc_82A17190;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a17190
	if (cr6.eq) goto loc_82A17190;
	// blr 
	return;
loc_82A17170:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,42
	ctx.r9.u64 = ctx.r10.u64 | 42;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A17190:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17198"))) PPC_WEAK_FUNC(sub_82A17198);
PPC_FUNC_IMPL(__imp__sub_82A17198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,20
	ctx.r9.u64 = ctx.r10.u64 | 20;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82a171d0
	if (!cr6.gt) goto loc_82A171D0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,26
	ctx.r9.u64 = ctx.r10.u64 | 26;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A171D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A171D8"))) PPC_WEAK_FUNC(sub_82A171D8);
PPC_FUNC_IMPL(__imp__sub_82A171D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,41
	ctx.r9.u64 = ctx.r11.u64 | 41;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A171F8"))) PPC_WEAK_FUNC(sub_82A171F8);
PPC_FUNC_IMPL(__imp__sub_82A171F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29224
	ctx.r12.s64 = ctx.r12.s64 + 29224;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A17290;
	case 1:
		goto loc_82A17290;
	case 2:
		goto loc_82A17290;
	case 3:
		goto loc_82A17294;
	case 4:
		goto loc_82A17290;
	case 5:
		goto loc_82A17290;
	case 6:
		goto loc_82A17290;
	case 7:
		goto loc_82A17294;
	case 8:
		goto loc_82A17294;
	case 9:
		goto loc_82A17294;
	case 10:
		goto loc_82A17294;
	case 11:
		goto loc_82A17294;
	case 12:
		goto loc_82A17294;
	case 13:
		goto loc_82A17294;
	case 14:
		goto loc_82A17294;
	case 15:
		goto loc_82A17294;
	case 16:
		goto loc_82A17294;
	case 17:
		goto loc_82A17294;
	case 18:
		goto loc_82A17294;
	case 19:
		goto loc_82A17290;
	case 20:
		goto loc_82A17290;
	case 21:
		goto loc_82A17290;
	case 22:
		goto loc_82A17294;
	case 23:
		goto loc_82A17290;
	case 24:
		goto loc_82A17290;
	case 25:
		goto loc_82A17290;
	default:
		return;
	}
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29332(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29332);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
	// lwz r21,29328(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29328);
loc_82A17290:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A17294:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17298"))) PPC_WEAK_FUNC(sub_82A17298);
PPC_FUNC_IMPL(__imp__sub_82A17298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-9
	xer.ca = ctx.r11.u32 > 8;
	ctx.r11.s64 = ctx.r11.s64 + -9;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a172b4
	if (cr0.eq) goto loc_82A172B4;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A172B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A172BC"))) PPC_WEAK_FUNC(sub_82A172BC);
PPC_FUNC_IMPL(__imp__sub_82A172BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A172C0"))) PPC_WEAK_FUNC(sub_82A172C0);
PPC_FUNC_IMPL(__imp__sub_82A172C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a172e8
	if (cr6.lt) goto loc_82A172E8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,52
	ctx.r9.u64 = ctx.r10.u64 | 52;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a172e8
	if (!cr6.lt) goto loc_82A172E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A172E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a173a4
	if (!cr6.eq) goto loc_82A173A4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a17318
	if (!cr6.gt) goto loc_82A17318;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,28
	ctx.r10.u64 = ctx.r11.u64 | 28;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a17318
	if (!cr6.lt) goto loc_82A17318;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A17318:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a1733c
	if (!cr6.gt) goto loc_82A1733C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,248
	ctx.r10.u64 = ctx.r11.u64 | 248;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a1733c
	if (!cr6.lt) goto loc_82A1733C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A1733C:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a17360
	if (!cr6.gt) goto loc_82A17360;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,14
	ctx.r10.u64 = ctx.r11.u64 | 14;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a17360
	if (!cr6.lt) goto loc_82A17360;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A17360:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a17384
	if (!cr6.gt) goto loc_82A17384;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,19
	ctx.r10.u64 = ctx.r11.u64 | 19;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a17384
	if (!cr6.lt) goto loc_82A17384;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82A17384:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a173a4
	if (!cr6.gt) goto loc_82A173A4;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r3,9
	ctx.r3.s64 = 9;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A173A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A173AC"))) PPC_WEAK_FUNC(sub_82A173AC);
PPC_FUNC_IMPL(__imp__sub_82A173AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A173B0"))) PPC_WEAK_FUNC(sub_82A173B0);
PPC_FUNC_IMPL(__imp__sub_82A173B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x82a17444
	if (cr6.gt) goto loc_82A17444;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29660
	ctx.r12.s64 = ctx.r12.s64 + 29660;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A17440;
	case 1:
		goto loc_82A17440;
	case 2:
		goto loc_82A17444;
	case 3:
		goto loc_82A17444;
	case 4:
		goto loc_82A17444;
	case 5:
		goto loc_82A17444;
	case 6:
		goto loc_82A17444;
	case 7:
		goto loc_82A17444;
	case 8:
		goto loc_82A17440;
	case 9:
		goto loc_82A17444;
	case 10:
		goto loc_82A17444;
	case 11:
		goto loc_82A17444;
	case 12:
		goto loc_82A17444;
	case 13:
		goto loc_82A17444;
	case 14:
		goto loc_82A17440;
	case 15:
		goto loc_82A17444;
	case 16:
		goto loc_82A17444;
	case 17:
		goto loc_82A17444;
	case 18:
		goto loc_82A17444;
	case 19:
		goto loc_82A17444;
	case 20:
		goto loc_82A17440;
	case 21:
		goto loc_82A17444;
	case 22:
		goto loc_82A17444;
	case 23:
		goto loc_82A17444;
	case 24:
		goto loc_82A17440;
	default:
		return;
	}
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29764(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29764);
	// lwz r21,29760(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29760);
loc_82A17440:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A17444:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1744C"))) PPC_WEAK_FUNC(sub_82A1744C);
PPC_FUNC_IMPL(__imp__sub_82A1744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17450"))) PPC_WEAK_FUNC(sub_82A17450);
PPC_FUNC_IMPL(__imp__sub_82A17450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x82a174ec
	if (cr6.gt) goto loc_82A174EC;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29820
	ctx.r12.s64 = ctx.r12.s64 + 29820;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A174E8;
	case 1:
		goto loc_82A174E8;
	case 2:
		goto loc_82A174E8;
	case 3:
		goto loc_82A174EC;
	case 4:
		goto loc_82A174EC;
	case 5:
		goto loc_82A174EC;
	case 6:
		goto loc_82A174EC;
	case 7:
		goto loc_82A174E8;
	case 8:
		goto loc_82A174EC;
	case 9:
		goto loc_82A174E8;
	case 10:
		goto loc_82A174E8;
	case 11:
		goto loc_82A174EC;
	case 12:
		goto loc_82A174EC;
	case 13:
		goto loc_82A174E8;
	case 14:
		goto loc_82A174EC;
	case 15:
		goto loc_82A174E8;
	case 16:
		goto loc_82A174E8;
	case 17:
		goto loc_82A174EC;
	case 18:
		goto loc_82A174EC;
	case 19:
		goto loc_82A174E8;
	case 20:
		goto loc_82A174EC;
	case 21:
		goto loc_82A174E8;
	case 22:
		goto loc_82A174EC;
	case 23:
		goto loc_82A174E8;
	case 24:
		goto loc_82A174EC;
	case 25:
		goto loc_82A174E8;
	case 26:
		goto loc_82A174E8;
	default:
		return;
	}
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29932(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29932);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
	// lwz r21,29928(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 29928);
loc_82A174E8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A174EC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A174F4"))) PPC_WEAK_FUNC(sub_82A174F4);
PPC_FUNC_IMPL(__imp__sub_82A174F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A174F8"))) PPC_WEAK_FUNC(sub_82A174F8);
PPC_FUNC_IMPL(__imp__sub_82A174F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17588
	if (cr6.eq) goto loc_82A17588;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30004
	ctx.r12.s64 = ctx.r12.s64 + 30004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A175A8;
	case 1:
		goto loc_82A175A8;
	case 2:
		goto loc_82A175AC;
	case 3:
		goto loc_82A175AC;
	case 4:
		goto loc_82A175AC;
	case 5:
		goto loc_82A175A8;
	case 6:
		goto loc_82A175A8;
	case 7:
		goto loc_82A175AC;
	case 8:
		goto loc_82A175A8;
	case 9:
		goto loc_82A175A8;
	case 10:
		goto loc_82A175AC;
	case 11:
		goto loc_82A175AC;
	case 12:
		goto loc_82A175AC;
	case 13:
		goto loc_82A175AC;
	case 14:
		goto loc_82A175AC;
	case 15:
		goto loc_82A175AC;
	case 16:
		goto loc_82A175AC;
	case 17:
		goto loc_82A175A8;
	case 18:
		goto loc_82A175A8;
	case 19:
		goto loc_82A175A8;
	case 20:
		goto loc_82A175A8;
	default:
		return;
	}
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30124);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
	// lwz r21,30120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30120);
loc_82A17588:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,21
	ctx.r9.u64 = ctx.r10.u64 | 21;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A175A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A175AC:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A175B0"))) PPC_WEAK_FUNC(sub_82A175B0);
PPC_FUNC_IMPL(__imp__sub_82A175B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,25
	ctx.r9.u64 = ctx.r10.u64 | 25;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,30
	ctx.r9.u64 = ctx.r10.u64 | 30;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A175E0"))) PPC_WEAK_FUNC(sub_82A175E0);
PPC_FUNC_IMPL(__imp__sub_82A175E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,15
	ctx.r9.u64 = ctx.r10.u64 | 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,20
	ctx.r9.u64 = ctx.r10.u64 | 20;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17610"))) PPC_WEAK_FUNC(sub_82A17610);
PPC_FUNC_IMPL(__imp__sub_82A17610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a17654
	if (cr6.eq) goto loc_82A17654;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a17654
	if (cr6.eq) goto loc_82A17654;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,14
	ctx.r10.u64 = ctx.r11.u64 | 14;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a17654
	if (cr6.eq) goto loc_82A17654;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a17658
	if (!cr6.eq) goto loc_82A17658;
loc_82A17654:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A17658:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17660"))) PPC_WEAK_FUNC(sub_82A17660);
PPC_FUNC_IMPL(__imp__sub_82A17660) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,-3
	ctx.r10.s64 = ctx.r3.s64 + -196608;
	// addi r10,r10,-201
	ctx.r10.s64 = ctx.r10.s64 + -201;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17674"))) PPC_WEAK_FUNC(sub_82A17674);
PPC_FUNC_IMPL(__imp__sub_82A17674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17678"))) PPC_WEAK_FUNC(sub_82A17678);
PPC_FUNC_IMPL(__imp__sub_82A17678) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,-3
	ctx.r10.s64 = ctx.r3.s64 + -196608;
	// addi r10,r10,-215
	ctx.r10.s64 = ctx.r10.s64 + -215;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1768C"))) PPC_WEAK_FUNC(sub_82A1768C);
PPC_FUNC_IMPL(__imp__sub_82A1768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17690"))) PPC_WEAK_FUNC(sub_82A17690);
PPC_FUNC_IMPL(__imp__sub_82A17690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a17700
	if (cr6.lt) goto loc_82A17700;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,17
	ctx.r10.u64 = ctx.r11.u64 | 17;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a17700
	if (!cr6.lt) goto loc_82A17700;
	// addis r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -327680;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82a176f8
	if (cr6.gt) goto loc_82A176F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a176e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176E8;
	// bdzf 4*cr6+eq,0x82a176e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176E8;
	// bdzf 4*cr6+eq,0x82a176f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176F0;
	// bdzf 4*cr6+eq,0x82a176f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176F8;
	// bdzf 4*cr6+eq,0x82a176e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176E8;
	// bdzf 4*cr6+eq,0x82a176e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176E8;
	// bdzf 4*cr6+eq,0x82a176e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A176E8;
	// bne cr6,0x82a176e8
	if (!cr6.eq) goto loc_82A176E8;
loc_82A176E8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A176F0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A176F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A17700:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17708"))) PPC_WEAK_FUNC(sub_82A17708);
PPC_FUNC_IMPL(__imp__sub_82A17708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a17728
	if (!cr6.gt) goto loc_82A17728;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,28
	ctx.r10.u64 = ctx.r11.u64 | 28;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (cr6.lt) return;
loc_82A17728:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17730"))) PPC_WEAK_FUNC(sub_82A17730);
PPC_FUNC_IMPL(__imp__sub_82A17730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1775C"))) PPC_WEAK_FUNC(sub_82A1775C);
PPC_FUNC_IMPL(__imp__sub_82A1775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17760"))) PPC_WEAK_FUNC(sub_82A17760);
PPC_FUNC_IMPL(__imp__sub_82A17760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,7
	ctx.r10.s64 = 458752;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,43
	ctx.r9.u64 = ctx.r10.u64 | 43;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,55
	ctx.r9.u64 = ctx.r10.u64 | 55;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17790"))) PPC_WEAK_FUNC(sub_82A17790);
PPC_FUNC_IMPL(__imp__sub_82A17790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r3,1720
	ctx.r4.s64 = ctx.r3.s64 + 1720;
	// addi r7,r3,1560
	ctx.r7.s64 = ctx.r3.s64 + 1560;
	// ori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 | 1;
loc_82A177AC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r10,73
	cr6.compare<uint32_t>(ctx.r10.u32, 73, xer);
	// bgt cr6,0x82a179f0
	if (cr6.gt) goto loc_82A179F0;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30680
	ctx.r12.s64 = ctx.r12.s64 + 30680;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82A17900;
	case 1:
		goto loc_82A17900;
	case 2:
		goto loc_82A17900;
	case 3:
		goto loc_82A17900;
	case 4:
		goto loc_82A17900;
	case 5:
		goto loc_82A17908;
	case 6:
		goto loc_82A17910;
	case 7:
		goto loc_82A17910;
	case 8:
		goto loc_82A17910;
	case 9:
		goto loc_82A17910;
	case 10:
		goto loc_82A17918;
	case 11:
		goto loc_82A17918;
	case 12:
		goto loc_82A17918;
	case 13:
		goto loc_82A17918;
	case 14:
		goto loc_82A17918;
	case 15:
		goto loc_82A17928;
	case 16:
		goto loc_82A17928;
	case 17:
		goto loc_82A17928;
	case 18:
		goto loc_82A17928;
	case 19:
		goto loc_82A17928;
	case 20:
		goto loc_82A17928;
	case 21:
		goto loc_82A17928;
	case 22:
		goto loc_82A17918;
	case 23:
		goto loc_82A17918;
	case 24:
		goto loc_82A17918;
	case 25:
		goto loc_82A17918;
	case 26:
		goto loc_82A17918;
	case 27:
		goto loc_82A17920;
	case 28:
		goto loc_82A17918;
	case 29:
		goto loc_82A17918;
	case 30:
		goto loc_82A17980;
	case 31:
		goto loc_82A17980;
	case 32:
		goto loc_82A17980;
	case 33:
		goto loc_82A17980;
	case 34:
		goto loc_82A17980;
	case 35:
		goto loc_82A17980;
	case 36:
		goto loc_82A17980;
	case 37:
		goto loc_82A17980;
	case 38:
		goto loc_82A17980;
	case 39:
		goto loc_82A17980;
	case 40:
		goto loc_82A179A0;
	case 41:
		goto loc_82A17980;
	case 42:
		goto loc_82A17980;
	case 43:
		goto loc_82A17980;
	case 44:
		goto loc_82A17980;
	case 45:
		goto loc_82A1795C;
	case 46:
		goto loc_82A1795C;
	case 47:
		goto loc_82A1795C;
	case 48:
		goto loc_82A1795C;
	case 49:
		goto loc_82A17940;
	case 50:
		goto loc_82A17940;
	case 51:
		goto loc_82A17940;
	case 52:
		goto loc_82A17940;
	case 53:
		goto loc_82A17928;
	case 54:
		goto loc_82A179A8;
	case 55:
		goto loc_82A179A8;
	case 56:
		goto loc_82A179B0;
	case 57:
		goto loc_82A179B0;
	case 58:
		goto loc_82A179B0;
	case 59:
		goto loc_82A179B0;
	case 60:
		goto loc_82A179C4;
	case 61:
		goto loc_82A179C4;
	case 62:
		goto loc_82A179E4;
	case 63:
		goto loc_82A179E4;
	case 64:
		goto loc_82A179E4;
	case 65:
		goto loc_82A179A8;
	case 66:
		goto loc_82A179EC;
	case 67:
		goto loc_82A179EC;
	case 68:
		goto loc_82A179EC;
	case 69:
		goto loc_82A179D8;
	case 70:
		goto loc_82A179E4;
	case 71:
		goto loc_82A179E4;
	case 72:
		goto loc_82A179E4;
	case 73:
		goto loc_82A179E4;
	default:
		return;
	}
	// lwz r21,30976(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30976);
	// lwz r21,30976(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30976);
	// lwz r21,30976(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30976);
	// lwz r21,30976(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30976);
	// lwz r21,30976(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30976);
	// lwz r21,30984(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30984);
	// lwz r21,30992(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30992);
	// lwz r21,30992(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30992);
	// lwz r21,30992(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30992);
	// lwz r21,30992(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 30992);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31008(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31008);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31000(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31000);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31136(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31136);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31104);
	// lwz r21,31068(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31068);
	// lwz r21,31068(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31068);
	// lwz r21,31068(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31068);
	// lwz r21,31068(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31068);
	// lwz r21,31040(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31040);
	// lwz r21,31040(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31040);
	// lwz r21,31040(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31040);
	// lwz r21,31040(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31040);
	// lwz r21,31016(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31016);
	// lwz r21,31144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31144);
	// lwz r21,31144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31144);
	// lwz r21,31152(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31152);
	// lwz r21,31152(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31152);
	// lwz r21,31152(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31152);
	// lwz r21,31152(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31152);
	// lwz r21,31172(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31172);
	// lwz r21,31172(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31172);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31144);
	// lwz r21,31212(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31212);
	// lwz r21,31212(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31212);
	// lwz r21,31212(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31212);
	// lwz r21,31192(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31192);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
	// lwz r21,31204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 31204);
loc_82A17900:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17908:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17910:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17918:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17920:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17928:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17940:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A1795C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a179e4
	if (!cr6.eq) goto loc_82A179E4;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A17980:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179A8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179B0:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179C4:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179D8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a179ec
	if (!cr6.eq) goto loc_82A179EC;
loc_82A179E4:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82a179f0
	goto loc_82A179F0;
loc_82A179EC:
	// li r11,15
	ctx.r11.s64 = 15;
loc_82A179F0:
	// stbx r11,r4,r6
	PPC_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r6,40
	cr6.compare<int32_t>(ctx.r6.s32, 40, xer);
	// blt cr6,0x82a177ac
	if (cr6.lt) goto loc_82A177AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17A08"))) PPC_WEAK_FUNC(sub_82A17A08);
PPC_FUNC_IMPL(__imp__sub_82A17A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
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
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_82A17A3C:
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A17A48:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a17a48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A17A48;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82a17a3c
	if (!cr0.eq) goto loc_82A17A3C;
	// li r9,27
	ctx.r9.s64 = 27;
	// addi r10,r3,540
	ctx.r10.s64 = ctx.r3.s64 + 540;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,11
	ctx.r9.s64 = 11;
loc_82A17A70:
	// stb r11,113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 113, ctx.r11.u8);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// stb r11,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// stb r11,109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// stb r11,110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// stb r11,111(r10)
	PPC_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// stbu r11,112(r10)
	ea = 112 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a17a70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A17A70;
	// stfs f0,3572(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3572, temp.u32);
	// addi r8,r3,3576
	ctx.r8.s64 = ctx.r3.s64 + 3576;
	// stfs f0,3568(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3568, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
loc_82A17AA0:
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A17AAC:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a17aac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A17AAC;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82a17aa0
	if (!cr0.eq) goto loc_82A17AA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17AC8"))) PPC_WEAK_FUNC(sub_82A17AC8);
PPC_FUNC_IMPL(__imp__sub_82A17AC8) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// li r4,10
	ctx.r4.s64 = 10;
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r10.u8);
loc_82A17B04:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// stb r10,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r10.u8);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// ld r8,3388(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 3388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// std r8,12(r11)
	PPC_STORE_U64(ctx.r11.u32 + 12, ctx.r8.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82A17B40:
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82a17b40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A17B40;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// bne 0x82a17b04
	if (!cr0.eq) goto loc_82A17B04;
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r10,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r31,1720
	ctx.r8.s64 = ctx.r31.s64 + 1720;
	// addi r9,r31,1556
	ctx.r9.s64 = ctx.r31.s64 + 1556;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82A17B6C:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a17b6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A17B6C;
	// stb r10,1760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1760, ctx.r10.u8);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// stb r10,1761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1761, ctx.r10.u8);
	// stb r10,1762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1762, ctx.r10.u8);
	// stb r10,1763(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1763, ctx.r10.u8);
	// stb r10,1764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1764, ctx.r10.u8);
	// bl 0x82a17a08
	ctx.lr = 0x82A17B98;
	sub_82A17A08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f0,1772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82A17BBC"))) PPC_WEAK_FUNC(sub_82A17BBC);
PPC_FUNC_IMPL(__imp__sub_82A17BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17BC0"))) PPC_WEAK_FUNC(sub_82A17BC0);
PPC_FUNC_IMPL(__imp__sub_82A17BC0) {
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
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a17e98
	if (cr6.eq) goto loc_82A17E98;
	// lwz r10,1556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r3,1564
	ctx.r11.s64 = ctx.r3.s64 + 1564;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_82A17BF4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17c60
	if (cr6.eq) goto loc_82A17C60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17c44
	if (cr6.eq) goto loc_82A17C44;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17c4c
	if (cr6.eq) goto loc_82A17C4C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17c54
	if (cr6.eq) goto loc_82A17C54;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17c5c
	if (cr6.eq) goto loc_82A17C5C;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpwi cr6,r7,40
	cr6.compare<int32_t>(ctx.r7.s32, 40, xer);
	// blt cr6,0x82a17bf4
	if (cr6.lt) goto loc_82A17BF4;
	// b 0x82a17c60
	goto loc_82A17C60;
loc_82A17C44:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82a17c60
	goto loc_82A17C60;
loc_82A17C4C:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// b 0x82a17c60
	goto loc_82A17C60;
loc_82A17C54:
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// b 0x82a17c60
	goto loc_82A17C60;
loc_82A17C5C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82A17C60:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a17cd0
	if (cr6.lt) goto loc_82A17CD0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 | 52;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a17cd0
	if (cr6.gt) goto loc_82A17CD0;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x82a17c90
	if (!cr6.lt) goto loc_82A17C90;
	// stb r5,1776(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1776, ctx.r5.u8);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17C90:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// bgt cr6,0x82a17ca0
	if (cr6.gt) goto loc_82A17CA0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82A17CA0:
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// divw r7,r10,r8
	ctx.r7.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r7,1776(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1776, ctx.r7.u8);
	// twllei r8,0
	// twlgei r4,-1
	// stb r3,1778(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1778, ctx.r3.u8);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17CD0:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a17d24
	if (cr6.lt) goto loc_82A17D24;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,46
	ctx.r10.u64 = ctx.r11.u64 | 46;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a17d24
	if (cr6.gt) goto loc_82A17D24;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt cr6,0x82a17d00
	if (cr6.gt) goto loc_82A17D00;
	// stb r5,1777(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1777, ctx.r5.u8);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17D00:
	// mulli r10,r6,100
	ctx.r10.s64 = ctx.r6.s64 * 100;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r7
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r7.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// twllei r7,0
	// stb r8,1777(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1777, ctx.r8.u8);
	// andc r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// twlgei r4,-1
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17D24:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a17d6c
	if (cr6.lt) goto loc_82A17D6C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,248
	ctx.r10.u64 = ctx.r11.u64 | 248;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a17d6c
	if (cr6.gt) goto loc_82A17D6C;
	// lwz r11,1784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1784);
	// lwz r10,1788(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1788);
	// lwz r8,1792(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1792);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,1784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1784, ctx.r11.u32);
	// stw r10,1788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1788, ctx.r10.u32);
	// stw r8,1792(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1792, ctx.r8.u32);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17D6C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a17e4c
	if (cr6.lt) goto loc_82A17E4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,31
	ctx.r10.u64 = ctx.r11.u64 | 31;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a17e4c
	if (cr6.gt) goto loc_82A17E4C;
	// lwz r11,1800(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1800);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1800, ctx.r11.u32);
	// bl 0x82a173b0
	ctx.lr = 0x82A17DA0;
	sub_82A173B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a17db8
	if (cr6.eq) goto loc_82A17DB8;
	// lwz r11,1804(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1804);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1804(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1804, ctx.r11.u32);
loc_82A17DB8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a17450
	ctx.lr = 0x82A17DC0;
	sub_82A17450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a17dd8
	if (cr6.eq) goto loc_82A17DD8;
	// lwz r11,1808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1808, ctx.r11.u32);
loc_82A17DD8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ori r5,r10,25
	ctx.r5.u64 = ctx.r10.u64 | 25;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x82a17e00
	if (cr6.lt) goto loc_82A17E00;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r5,r10,30
	ctx.r5.u64 = ctx.r10.u64 | 30;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82a17e00
	if (cr6.gt) goto loc_82A17E00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A17E00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a17e18
	if (cr6.eq) goto loc_82A17E18;
	// lwz r11,1812(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1812);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1812, ctx.r11.u32);
loc_82A17E18:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bgt cr6,0x82a17e30
	if (cr6.gt) goto loc_82A17E30;
	// lfs f0,1768(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1772);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a17e3c
	if (cr6.lt) goto loc_82A17E3C;
loc_82A17E30:
	// lwz r11,1816(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1816);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r11,1816(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1816, ctx.r11.u32);
loc_82A17E3C:
	// lwz r11,1820(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1820);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,1820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1820, ctx.r11.u32);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17E4C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a17690
	ctx.lr = 0x82A17E54;
	sub_82A17690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a17e98
	if (!cr6.gt) goto loc_82A17E98;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a17e74
	if (!cr6.eq) goto loc_82A17E74;
	// lwz r11,1824(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1824);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1824, ctx.r11.u32);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17E74:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a17e8c
	if (!cr6.eq) goto loc_82A17E8C;
	// lwz r11,1828(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1828);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1828, ctx.r11.u32);
	// b 0x82a17e98
	goto loc_82A17E98;
loc_82A17E8C:
	// lwz r11,1832(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1832);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1832(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1832, ctx.r11.u32);
loc_82A17E98:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a17ac8
	ctx.lr = 0x82A17EA0;
	sub_82A17AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17EB0"))) PPC_WEAK_FUNC(sub_82A17EB0);
PPC_FUNC_IMPL(__imp__sub_82A17EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a17f1c
	if (cr6.eq) goto loc_82A17F1C;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a17ef0
	if (cr6.lt) goto loc_82A17EF0;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,248
	ctx.r9.u64 = ctx.r10.u64 | 248;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a17ef0
	if (cr6.gt) goto loc_82A17EF0;
	// lwz r11,1780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r11.u32);
	// b 0x82a17f1c
	goto loc_82A17F1C;
loc_82A17EF0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a17f1c
	if (cr6.lt) goto loc_82A17F1C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,31
	ctx.r9.u64 = ctx.r10.u64 | 31;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a17f1c
	if (cr6.gt) goto loc_82A17F1C;
	// lwz r11,1796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1796);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1796, ctx.r11.u32);
loc_82A17F1C:
	// b 0x82a17ac8
	sub_82A17AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17F20"))) PPC_WEAK_FUNC(sub_82A17F20);
PPC_FUNC_IMPL(__imp__sub_82A17F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// addic. r11,r3,36
	xer.ca = ctx.r3.u32 > 4294967259;
	ctx.r11.s64 = ctx.r3.s64 + 36;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a17f30
	if (!cr0.eq) goto loc_82A17F30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A17F30:
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82a172c0
	sub_82A172C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17F3C"))) PPC_WEAK_FUNC(sub_82A17F3C);
PPC_FUNC_IMPL(__imp__sub_82A17F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17F40"))) PPC_WEAK_FUNC(sub_82A17F40);
PPC_FUNC_IMPL(__imp__sub_82A17F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r10,r3,544
	ctx.r10.s64 = ctx.r3.s64 + 544;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,-112
	ctx.r8.s64 = ctx.r10.s64 + -112;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-25156(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// ori r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 65535;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_82A17F90:
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sthu r7,112(r8)
	ea = 112 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// stfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
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
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
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
	// stb r10,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r10,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bge 0x82a17f90
	if (!cr0.lt) goto loc_82A17F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a17a08
	ctx.lr = 0x82A18018;
	sub_82A17A08(ctx, base);
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

__attribute__((alias("__imp__sub_82A18030"))) PPC_WEAK_FUNC(sub_82A18030);
PPC_FUNC_IMPL(__imp__sub_82A18030) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stb r31,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r31.u8);
	// stb r31,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r31.u8);
loc_82A18064:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stwx r31,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r31,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r31.u32);
	// blt cr6,0x82a18064
	if (cr6.lt) goto loc_82A18064;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// li r3,19
	ctx.r3.s64 = 19;
	// li r4,10
	ctx.r4.s64 = 10;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82A180A8:
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r8,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// ld r9,3388(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 3388);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// std r9,20(r11)
	PPC_STORE_U64(ctx.r11.u32 + 20, ctx.r9.u64);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
loc_82A180EC:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a180ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A180EC;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// bge 0x82a180a8
	if (!cr0.lt) goto loc_82A180A8;
	// stb r31,1776(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1776, ctx.r31.u8);
	// addi r3,r30,1836
	ctx.r3.s64 = ctx.r30.s64 + 1836;
	// stb r31,1777(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1777, ctx.r31.u8);
	// addi r11,r30,1776
	ctx.r11.s64 = ctx.r30.s64 + 1776;
	// stb r31,1778(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1778, ctx.r31.u8);
	// stw r31,1780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1780, ctx.r31.u32);
	// stw r31,1784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1784, ctx.r31.u32);
	// stw r31,1788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1788, ctx.r31.u32);
	// stw r31,1792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1792, ctx.r31.u32);
	// stw r31,1796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1796, ctx.r31.u32);
	// stw r31,1800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1800, ctx.r31.u32);
	// stw r31,1804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1804, ctx.r31.u32);
	// stw r31,1808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1808, ctx.r31.u32);
	// stw r31,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r31.u32);
	// stw r31,1816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1816, ctx.r31.u32);
	// stw r31,1820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1820, ctx.r31.u32);
	// stw r31,1824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1824, ctx.r31.u32);
	// stw r31,1828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1828, ctx.r31.u32);
	// stw r31,1832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1832, ctx.r31.u32);
	// bl 0x82a17f40
	ctx.lr = 0x82A18150;
	sub_82A17F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a17ac8
	ctx.lr = 0x82A18158;
	sub_82A17AC8(ctx, base);
	// stb r31,1776(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1776, ctx.r31.u8);
	// stb r31,1777(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1777, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,1778(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1778, ctx.r31.u8);
	// stw r31,1780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1780, ctx.r31.u32);
	// stw r31,1784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1784, ctx.r31.u32);
	// stw r31,1788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1788, ctx.r31.u32);
	// stw r31,1792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1792, ctx.r31.u32);
	// stw r31,1796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1796, ctx.r31.u32);
	// stw r31,1800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1800, ctx.r31.u32);
	// stw r31,1804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1804, ctx.r31.u32);
	// stw r31,1808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1808, ctx.r31.u32);
	// stw r31,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r31.u32);
	// stw r31,1816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1816, ctx.r31.u32);
	// stw r31,1820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1820, ctx.r31.u32);
	// stw r31,1824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1824, ctx.r31.u32);
	// stw r31,1828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1828, ctx.r31.u32);
	// stw r31,1832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1832, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A181B8"))) PPC_WEAK_FUNC(sub_82A181B8);
PPC_FUNC_IMPL(__imp__sub_82A181B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// blr 
	return;
}

