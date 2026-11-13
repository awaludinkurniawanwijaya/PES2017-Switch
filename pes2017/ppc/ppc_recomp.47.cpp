#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8259DEB8"))) PPC_WEAK_FUNC(sub_8259DEB8);
PPC_FUNC_IMPL(__imp__sub_8259DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8259DEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8353f208
	ctx.lr = 0x8259DEC8;
	sub_8353F208(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// bl 0x83534928
	ctx.lr = 0x8259DEFC;
	sub_83534928(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// addi r7,r9,11696
	ctx.r7.s64 = ctx.r9.s64 + 11696;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// addi r6,r8,11696
	ctx.r6.s64 = ctx.r8.s64 + 11696;
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r4,r3,26200
	ctx.r4.s64 = ctx.r3.s64 + 26200;
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// bl 0x8259cc28
	ctx.lr = 0x8259DF70;
	sub_8259CC28(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// addi r7,r9,20396
	ctx.r7.s64 = ctx.r9.s64 + 20396;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x8353f178
	ctx.lr = 0x8259DF90;
	sub_8353F178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8259fdf0
	ctx.lr = 0x8259DF9C;
	sub_8259FDF0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,56(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8259DFB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8259dfe4
	if (cr6.eq) goto loc_8259DFE4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8259DFC4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259dfc4
	if (!cr0.eq) goto loc_8259DFC4;
	// lwsync 
loc_8259DFE4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259e038
	if (cr6.eq) goto loc_8259E038;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259E000:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259e000
	if (!cr0.eq) goto loc_8259E000;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259e038
	if (!cr6.eq) goto loc_8259E038;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259E038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259E038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259dcd8
	ctx.lr = 0x8259E040;
	sub_8259DCD8(ctx, base);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,-21792
	ctx.r3.s64 = ctx.r29.s64 + -21792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8352a560
	ctx.lr = 0x8259E058;
	sub_8352A560(ctx, base);
	// lwz r3,-21792(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21792);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259E070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8378be88
	ctx.lr = 0x8259E074;
	sub_8378BE88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259e0c4
	if (cr6.eq) goto loc_8259E0C4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259E08C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259e08c
	if (!cr0.eq) goto loc_8259E08C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259e0c4
	if (!cr6.eq) goto loc_8259E0C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259E0C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259E0C4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8259e0e0
	if (cr6.lt) goto loc_8259E0E0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8259E0E0;
	sub_825952B8(ctx, base);
loc_8259E0E0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E0E8"))) PPC_WEAK_FUNC(sub_8259E0E8);
PPC_FUNC_IMPL(__imp__sub_8259E0E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,27604
	ctx.r8.s64 = ctx.r10.s64 + 27604;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8259E12C;
	sub_82595718(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r6,26496
	ctx.r4.s64 = ctx.r6.s64 + 26496;
	// li r7,512
	ctx.r7.s64 = 512;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x832de758
	ctx.lr = 0x8259E14C;
	sub_832DE758(ctx, base);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r7,128
	ctx.r7.s64 = 128;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x833bc2c8
	ctx.lr = 0x8259E16C;
	sub_833BC2C8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8259E188"))) PPC_WEAK_FUNC(sub_8259E188);
PPC_FUNC_IMPL(__imp__sub_8259E188) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27604
	ctx.r10.s64 = ctx.r11.s64 + 27604;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833bcca0
	ctx.lr = 0x8259E1B8;
	sub_833BCCA0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825952b8
	ctx.lr = 0x8259E1CC;
	sub_825952B8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8259e1ec
	if (cr6.eq) goto loc_8259E1EC;
	// bl 0x82595188
	ctx.lr = 0x8259E1DC;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8259E1EC;
	sub_825952B8(ctx, base);
loc_8259E1EC:
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

__attribute__((alias("__imp__sub_8259E208"))) PPC_WEAK_FUNC(sub_8259E208);
PPC_FUNC_IMPL(__imp__sub_8259E208) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8259E22C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259e240
	if (cr6.eq) goto loc_8259E240;
	// bl 0x8259e0e8
	ctx.lr = 0x8259E238;
	sub_8259E0E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8259e244
	goto loc_8259E244;
loc_8259E240:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8259E244:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-21748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21748, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E260"))) PPC_WEAK_FUNC(sub_8259E260);
PPC_FUNC_IMPL(__imp__sub_8259E260) {
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
	// lwz r11,-21748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21748);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259e2bc
	if (cr6.eq) goto loc_8259E2BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8259E294;
	sub_82595150(ctx, base);
	// lwz r3,-21748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259e2b4
	if (cr6.eq) goto loc_8259E2B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259E2B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259E2B4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8259E2BC;
	sub_82595170(ctx, base);
loc_8259E2BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-21748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21748, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8259E2DC"))) PPC_WEAK_FUNC(sub_8259E2DC);
PPC_FUNC_IMPL(__imp__sub_8259E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E2E0"))) PPC_WEAK_FUNC(sub_8259E2E0);
PPC_FUNC_IMPL(__imp__sub_8259E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8259E2E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833c25b8
	ctx.lr = 0x8259E2F4;
	sub_833C25B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833c3930
	ctx.lr = 0x8259E300;
	sub_833C3930(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f8200
	ctx.lr = 0x8259E308;
	sub_831F8200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833c14c8
	ctx.lr = 0x8259E314;
	sub_833C14C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259e338
	if (!cr6.eq) goto loc_8259E338;
loc_8259E320:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833d6d90
	ctx.lr = 0x8259E328;
	sub_833D6D90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8259E330;
	sub_833D6D90(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8259E338:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259e320
	if (cr6.eq) goto loc_8259E320;
	// bl 0x830ff290
	ctx.lr = 0x8259E348;
	sub_830FF290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f6,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,27704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27704);
	ctx.f10.f64 = double(temp.f32);
	// vupkd3d128 v9,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v9 = vTemp;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vsldoi128 v62,v0,v63,12
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 4));
	// vsldoi128 v61,v63,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// lfs f10,20416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20416);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f13,27700(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27700);
	ctx.f13.f64 = double(temp.f32);
	// vsldoi128 v60,v0,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// vsldoi128 v59,v63,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// vand128 v5,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vsldoi v13,v9,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f5,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// vand128 v10,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vsel v11,v0,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f10,27692(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27692);
	ctx.f10.f64 = double(temp.f32);
	// vsldoi v12,v0,v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 12));
	// lfs f4,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// lfs f8,27696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27696);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f7,27688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27688);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f0,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// vsel v10,v0,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// lfs f12,27680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 27680);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f11,-26260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f9,27684(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27684);
	ctx.f9.f64 = double(temp.f32);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r11.u8);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r11,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r11.u8);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stb r11,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r11,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stb r11,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r11.u8);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r11.u8);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// vsldoi128 v6,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vor128 v58,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vspltw v3,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v27,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v2,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v26,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmaddfp v3,v11,v3,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v27,v11,v27,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v6,v8,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// vspltw v23,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vmaddfp v2,v13,v2,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r9,r8,2496
	ctx.r9.s64 = ctx.r8.s64 + 2496;
	// vmaddfp v26,v13,v26,v0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vor128 v57,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r7,2512
	ctx.r8.s64 = ctx.r7.s64 + 2512;
	// addi r7,r6,2528
	ctx.r7.s64 = ctx.r6.s64 + 2528;
	// vspltw v8,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// lvlx128 v56,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r3,2480
	ctx.r6.s64 = ctx.r3.s64 + 2480;
	// vspltw v22,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// vspltw v28,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vspltw v6,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vspltw128 v19,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v29,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vmaddfp v3,v12,v23,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v23.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw128 v25,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vmaddfp v23,v12,v8,v27
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// lvx128 v8,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v24,v13,v28,v0
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v2,v10,v22,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v22.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v20,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vmaddfp v22,v10,v6,v26
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v26.f32)));
	// vspltw v27,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vmaddfp v7,v11,v29,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v26,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v21,v25,v8,v0
	simde_mm_store_ps(ctx.v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v25.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v17,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// vmaddfp v13,v13,v19,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v19.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r11.u8);
	// stb r11,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r11.u8);
	// vmaddfp v20,v11,v20,v0
	simde_mm_store_ps(ctx.v20.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v20.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stb r11,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r11.u8);
	// stfs f13,208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r11,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r11.u8);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stb r11,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r11.u8);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stb r11,235(r1)
	PPC_STORE_U8(ctx.r1.u32 + 235, ctx.r11.u8);
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r11,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r11.u8);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stb r11,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r11.u8);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stb r11,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r11.u8);
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stb r11,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r11.u8);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// vslw128 v4,v58,v58
	ctx.v4.u32[0] = ctx.v58.u32[0] << (ctx.v58.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v58.u32[1] << (ctx.v58.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v58.u32[2] << (ctx.v58.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v58.u32[3] << (ctx.v58.u8[12] & 0x1F);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// vspltisw128 v55,3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x3)));
	// vspltisw v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_set1_epi32(int(0x1)));
	// vmaddfp v7,v12,v27,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v18,v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x0));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_set1_epi32(int(0x2)));
	// vmaddfp v19,v10,v26,v24
	simde_mm_store_ps(ctx.v19.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v24.f32)));
	// vor128 v53,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vmaddfp v17,v10,v17,v13
	simde_mm_store_ps(ctx.v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v17.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r9,r5,2544
	ctx.r9.s64 = ctx.r5.s64 + 2544;
	// vaddfp v11,v2,v3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)));
	// addi r8,r4,2560
	ctx.r8.s64 = ctx.r4.s64 + 2560;
	// vaddfp v8,v22,v23
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v23.f32)));
	// addi r7,r3,2592
	ctx.r7.s64 = ctx.r3.s64 + 2592;
	// vor128 v13,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vaddfp v10,v19,v7
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v19.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v18,v12,v18,v20
	simde_mm_store_ps(ctx.v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v18.f32)), simde_mm_load_ps(ctx.v20.f32)));
	// addi r6,r11,2608
	ctx.r6.s64 = ctx.r11.s64 + 2608;
	// lvx128 v22,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v23,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vsel v7,v1,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// lvx128 v21,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r5,2576
	ctx.r3.s64 = ctx.r5.s64 + 2576;
	// vspltw v16,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v16.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// lvx128 v20,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,2624
	ctx.r11.s64 = ctx.r4.s64 + 2624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// vslw128 v52,v63,v63
	ctx.v52.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v52.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v52.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v52.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vaddfp128 v51,v53,v7
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v7.f32)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f9,28(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r6,27664
	ctx.r4.s64 = ctx.r6.s64 + 27664;
	// vsldoi128 v24,v63,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// addi r7,r9,27648
	ctx.r7.s64 = ctx.r9.s64 + 27648;
	// addi r5,r8,27632
	ctx.r5.s64 = ctx.r8.s64 + 27632;
	// vaddfp v7,v17,v18
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v17.f32), simde_mm_load_ps(ctx.v18.f32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmaddfp v17,v8,v29,v0
	simde_mm_store_ps(ctx.v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v42,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v50,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// vor128 v40,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vcfpsxws128 v49,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vmaddfp v17,v7,v27,v17
	simde_mm_store_ps(ctx.v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v17.f32)));
	// vcsxwfp128 v1,v49,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vand128 v13,v49,v55
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vadduws v29,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vand128 v48,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vand128 v47,v13,v54
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vand128 v46,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcmpequw128 v18,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vand128 v45,v29,v54
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vcmpequw128 v19,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v6,v1,v31,v25
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v25.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw v31,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vcmpequw128 v25,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v29,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v6,v1,v30,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw v30,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v6,v6,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v23,v23,v13,v22
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v23.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v22.f32)));
	// vmaddfp v22,v21,v13,v20
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v21.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v20.f32)));
	// vmaddfp v20,v11,v28,v0
	simde_mm_store_ps(ctx.v20.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v28,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v21,v13,v6,v0
	simde_mm_store_ps(ctx.v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vmaddfp v27,v11,v28,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v23,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v23.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v22,v13,v1
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v23,v8,v16,v0
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v16.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v28,v10,v26,v20
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v20.f32)));
	// vmaddfp v12,v12,v13,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v1,v21,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v21.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vsel v1,v12,v13,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v9,v12,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v44,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmaddfp v1,v7,v30,v23
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v23.f32)));
	// vor128 v43,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor128 v9,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vxor128 v6,v4,v44
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vxor128 v12,v4,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v13,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vsel v4,v6,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v9,v12,v13,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v39,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vxor128 v9,v4,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v6,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vspltw128 v2,v50,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0x55));
	// vor v13,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// vsel v4,v0,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// vor128 v12,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// vsel v9,v0,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// vor128 v63,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// li r11,0
	ctx.r11.s64 = 0;
	// vsel v6,v4,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v12,v9,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v38,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor128 v37,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vspltw128 v12,v38,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xAA));
	// vspltw128 v13,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xFF));
	// vspltw128 v9,v37,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xAA));
	// vspltw128 v6,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// vmaddfp v3,v8,v12,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v12,v37,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0x0));
	// vmaddfp v4,v11,v13,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v13,v37,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0x55));
	// vmaddfp v5,v8,v9,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v9,v38,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0x0));
	// vmaddfp v6,v11,v6,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v11,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0x55));
	// vmaddfp v8,v7,v9,v3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw128 v3,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x55));
	// vmaddfp v9,v10,v11,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vspltw128 v4,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x55));
	// vmaddfp v11,v7,v12,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vspltw128 v7,v41,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xAA));
	// vmaddfp v12,v10,v13,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v6,v50,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0x0));
	// vmaddfp v5,v10,v31,v27
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vspltw128 v10,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// vaddfp v13,v9,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw128 v9,v50,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xAA));
	// vspltw128 v8,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// vaddfp v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp v11,v28,v17
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v17.f32)));
	// vmaddfp v25,v13,v9,v0
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v9,v42,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xAA));
	// vmaddfp v27,v13,v7,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v7,v41,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x0));
	// vmaddfp v26,v12,v10,v0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v10,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// vmaddfp v28,v12,v8,v0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v8,v42,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x0));
	// vmaddfp v29,v13,v9,v0
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v9,v40,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x0));
	// vmaddfp v30,v12,v10,v0
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp v10,v5,v1
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vspltw128 v1,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// vspltw128 v5,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vmaddfp v31,v13,v1,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v11,v2,v26
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v26.f32)));
	// vmaddfp v2,v11,v3,v28
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v3,v11,v4,v30
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v6,v10,v6,v25
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v25.f32)));
	// vmaddfp v7,v10,v7,v27
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v8,v10,v8,v29
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddfp v4,v12,v5,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v5,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// vmaddfp v31,v10,v9,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vspltw128 v9,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vaddfp128 v36,v1,v6
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vaddfp128 v34,v2,v7
	simde_mm_store_ps(ctx.v34.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v7,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vaddfp128 v32,v3,v8
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmaddfp v1,v11,v5,v4
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vspltw128 v35,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), 0xFF));
	// vspltw128 v33,v36,1
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), 0xAA));
	// stvx128 v35,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r5,27616
	ctx.r3.s64 = ctx.r5.s64 + 27616;
	// stvx128 v33,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vmaddfp v2,v13,v8,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v3,v12,v9,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v62,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), 0xFF));
	// vspltw128 v4,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lfs f8,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// vspltw128 v5,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vaddfp128 v57,v1,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v31.f32)));
	// vspltw128 v59,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xFF));
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// vspltw128 v60,v34,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), 0xAA));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vmaddfp v13,v13,v4,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// vmaddfp v0,v12,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v32,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xAA));
	// lfs f7,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f8,f3,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v8,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// vmaddfp v6,v10,v6,v2
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v7,v3
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v58,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lfs f1,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f6,f2,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f1.f64));
	// vspltw128 v54,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vaddfp128 v55,v12,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)));
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v56,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v10,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lfs f9,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// vmaddfp v0,v11,v9,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stvx128 v54,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// vspltw128 v52,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stvx128 v52,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f7,f3,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f11.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// vaddfp128 v53,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f10,164(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// vspltw128 v51,v55,1
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xAA));
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f4,f2,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vspltw128 v50,v53,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xAA));
	// lfs f6,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f3,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f6.f64));
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// vspltw128 v49,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// lfs f4,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f12,f2,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f4.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v51,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v50,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f9,f3,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f10,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f2,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f6,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f3,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f6.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f1,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f8,f2,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f7,f3,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f4,f2,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x8259f070
	ctx.lr = 0x8259E9C0;
	sub_8259F070(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259E9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8259E9F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8259EA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8259EA40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8259EA58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,84(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8259EA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EA90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f9,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,27608(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8259EAB0;
	sub_82574BA8(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259eaf8
	if (cr6.eq) goto loc_8259EAF8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8259EAC0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259eac0
	if (!cr0.eq) goto loc_8259EAC0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8259eaf8
	if (cr6.gt) goto loc_8259EAF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EAF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EAF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8259EB04;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259eb48
	if (cr6.eq) goto loc_8259EB48;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8259EB10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259eb10
	if (!cr0.eq) goto loc_8259EB10;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8259eb48
	if (cr6.gt) goto loc_8259EB48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EB48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EB48:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EB50"))) PPC_WEAK_FUNC(sub_8259EB50);
PPC_FUNC_IMPL(__imp__sub_8259EB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-21748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8259e2e0
	sub_8259E2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EB64"))) PPC_WEAK_FUNC(sub_8259EB64);
PPC_FUNC_IMPL(__imp__sub_8259EB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259EB68"))) PPC_WEAK_FUNC(sub_8259EB68);
PPC_FUNC_IMPL(__imp__sub_8259EB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,-21736(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -21736);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x8354c300
	sub_8354C300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EB7C"))) PPC_WEAK_FUNC(sub_8259EB7C);
PPC_FUNC_IMPL(__imp__sub_8259EB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259EB80"))) PPC_WEAK_FUNC(sub_8259EB80);
PPC_FUNC_IMPL(__imp__sub_8259EB80) {
	PPC_FUNC_PROLOGUE();
	// b 0x8354c448
	sub_8354C448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EB84"))) PPC_WEAK_FUNC(sub_8259EB84);
PPC_FUNC_IMPL(__imp__sub_8259EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EB88"))) PPC_WEAK_FUNC(sub_8259EB88);
PPC_FUNC_IMPL(__imp__sub_8259EB88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8259ebd4
	if (cr6.eq) goto loc_8259EBD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
loc_8259EBB4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259ebb4
	if (!cr0.eq) goto loc_8259EBB4;
	// lwsync 
loc_8259EBD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259ebf0
	if (cr6.eq) goto loc_8259EBF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EBF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EBF0:
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

__attribute__((alias("__imp__sub_8259EC0C"))) PPC_WEAK_FUNC(sub_8259EC0C);
PPC_FUNC_IMPL(__imp__sub_8259EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EC10"))) PPC_WEAK_FUNC(sub_8259EC10);
PPC_FUNC_IMPL(__imp__sub_8259EC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8259EC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x8259EC60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259ec74
	if (cr6.eq) goto loc_8259EC74;
	// bl 0x833c6140
	ctx.lr = 0x8259EC6C;
	sub_833C6140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8259ec78
	goto loc_8259EC78;
loc_8259EC74:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8259EC78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259eb88
	ctx.lr = 0x8259EC84;
	sub_8259EB88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EC98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8354e6c0
	ctx.lr = 0x8259ECB4;
	sub_8354E6C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8259ecf0
	if (cr6.eq) goto loc_8259ECF0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8259ECD0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259ecd0
	if (!cr0.eq) goto loc_8259ECD0;
	// lwsync 
loc_8259ECF0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8353d250
	ctx.lr = 0x8259ECFC;
	sub_8353D250(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259ED10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259ed10
	if (!cr0.eq) goto loc_8259ED10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259ed48
	if (!cr6.eq) goto loc_8259ED48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259ED48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259ED48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8354c400
	ctx.lr = 0x8259ED50;
	sub_8354C400(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,-21736(r10)
	PPC_STORE_U8(ctx.r10.u32 + -21736, ctx.r29.u8);
	// bl 0x830ffbc0
	ctx.lr = 0x8259ED60;
	sub_830FFBC0(ctx, base);
	// stb r29,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r29.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259edb4
	if (cr6.eq) goto loc_8259EDB4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259ED7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259ed7c
	if (!cr0.eq) goto loc_8259ED7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259edb4
	if (!cr6.eq) goto loc_8259EDB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EDB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EDB4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259edd0
	if (cr6.eq) goto loc_8259EDD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EDD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EDD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EDDC"))) PPC_WEAK_FUNC(sub_8259EDDC);
PPC_FUNC_IMPL(__imp__sub_8259EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EDE0"))) PPC_WEAK_FUNC(sub_8259EDE0);
PPC_FUNC_IMPL(__imp__sub_8259EDE0) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,-21728(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21728);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// blt cr6,0x8259ee68
	if (cr6.lt) goto loc_8259EE68;
	// bne cr6,0x8259ee7c
	if (!cr6.eq) goto loc_8259EE7C;
	// bl 0x830eaa30
	ctx.lr = 0x8259EE44;
	sub_830EAA30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259ee7c
	if (cr6.eq) goto loc_8259EE7C;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8259EE68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eb7c0
	ctx.lr = 0x8259EE70;
	sub_830EB7C0(ctx, base);
	// lwz r11,-21728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21728);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-21728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21728, ctx.r11.u32);
loc_8259EE7C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8259EE94"))) PPC_WEAK_FUNC(sub_8259EE94);
PPC_FUNC_IMPL(__imp__sub_8259EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EE98"))) PPC_WEAK_FUNC(sub_8259EE98);
PPC_FUNC_IMPL(__imp__sub_8259EE98) {
	PPC_FUNC_PROLOGUE();
	// b 0x830eaab0
	sub_830EAAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EE9C"))) PPC_WEAK_FUNC(sub_8259EE9C);
PPC_FUNC_IMPL(__imp__sub_8259EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EEA0"))) PPC_WEAK_FUNC(sub_8259EEA0);
PPC_FUNC_IMPL(__imp__sub_8259EEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830eb828
	sub_830EB828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EEA4"))) PPC_WEAK_FUNC(sub_8259EEA4);
PPC_FUNC_IMPL(__imp__sub_8259EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EEA8"))) PPC_WEAK_FUNC(sub_8259EEA8);
PPC_FUNC_IMPL(__imp__sub_8259EEA8) {
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
	// bl 0x830ff290
	ctx.lr = 0x8259EEBC;
	sub_830FF290(ctx, base);
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259ef48
	if (cr6.eq) goto loc_8259EF48;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x8259EED0;
	sub_830FF290(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8259ef24
	if (cr6.gt) goto loc_8259EF24;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8259ef00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8259EF00;
	// bdzf 4*cr6+eq,0x8259ef08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8259EF08;
	// bdzf 4*cr6+eq,0x8259ef10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8259EF10;
	// bdzf 4*cr6+eq,0x8259ef18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8259EF18;
	// bne cr6,0x8259ef20
	if (!cr6.eq) goto loc_8259EF20;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8259ef24
	goto loc_8259EF24;
loc_8259EF00:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8259ef24
	goto loc_8259EF24;
loc_8259EF08:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8259ef24
	goto loc_8259EF24;
loc_8259EF10:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8259ef24
	goto loc_8259EF24;
loc_8259EF18:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x8259ef24
	goto loc_8259EF24;
loc_8259EF20:
	// li r31,5
	ctx.r31.s64 = 5;
loc_8259EF24:
	// bl 0x83556b78
	ctx.lr = 0x8259EF28;
	sub_83556B78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EF3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830ff290
	ctx.lr = 0x8259EF40;
	sub_830FF290(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r9.u8);
loc_8259EF48:
	// bl 0x830ff290
	ctx.lr = 0x8259EF4C;
	sub_830FF290(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259ef6c
	if (cr6.eq) goto loc_8259EF6C;
	// bl 0x83556b78
	ctx.lr = 0x8259EF5C;
	sub_83556B78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259EF6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259EF6C:
	// bl 0x83559268
	ctx.lr = 0x8259EF70;
	sub_83559268(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8259EF8C"))) PPC_WEAK_FUNC(sub_8259EF8C);
PPC_FUNC_IMPL(__imp__sub_8259EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EF90"))) PPC_WEAK_FUNC(sub_8259EF90);
PPC_FUNC_IMPL(__imp__sub_8259EF90) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83559368
	ctx.lr = 0x8259EFA8;
	sub_83559368(ctx, base);
	// bl 0x83559458
	ctx.lr = 0x8259EFAC;
	sub_83559458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259EFBC"))) PPC_WEAK_FUNC(sub_8259EFBC);
PPC_FUNC_IMPL(__imp__sub_8259EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259EFC0"))) PPC_WEAK_FUNC(sub_8259EFC0);
PPC_FUNC_IMPL(__imp__sub_8259EFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x83559c70
	ctx.lr = 0x8259EFD4;
	sub_83559C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f010
	if (cr6.eq) goto loc_8259F010;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f31.f64 = double(temp.f32);
loc_8259EFE8:
	// bl 0x83559268
	ctx.lr = 0x8259EFEC;
	sub_83559268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259effc
	if (!cr6.eq) goto loc_8259EFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83559368
	ctx.lr = 0x8259EFFC;
	sub_83559368(ctx, base);
loc_8259EFFC:
	// bl 0x83559458
	ctx.lr = 0x8259F000;
	sub_83559458(ctx, base);
	// bl 0x83559c70
	ctx.lr = 0x8259F004;
	sub_83559C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259efe8
	if (!cr6.eq) goto loc_8259EFE8;
loc_8259F010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_8259F024"))) PPC_WEAK_FUNC(sub_8259F024);
PPC_FUNC_IMPL(__imp__sub_8259F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F028"))) PPC_WEAK_FUNC(sub_8259F028);
PPC_FUNC_IMPL(__imp__sub_8259F028) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,-21720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21720);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f054
	if (cr6.eq) goto loc_8259F054;
	// bl 0x83103e98
	ctx.lr = 0x8259F04C;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21720, ctx.r11.u32);
loc_8259F054:
	// bl 0x83559e38
	ctx.lr = 0x8259F058;
	sub_83559E38(ctx, base);
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

__attribute__((alias("__imp__sub_8259F06C"))) PPC_WEAK_FUNC(sub_8259F06C);
PPC_FUNC_IMPL(__imp__sub_8259F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F070"))) PPC_WEAK_FUNC(sub_8259F070);
PPC_FUNC_IMPL(__imp__sub_8259F070) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8259f0a8
	if (cr6.eq) goto loc_8259F0A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
loc_8259F08C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f08c
	if (!cr0.eq) goto loc_8259F08C;
loc_8259F0A8:
	// bl 0x82574ba8
	ctx.lr = 0x8259F0AC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f0f4
	if (cr6.eq) goto loc_8259F0F4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8259F0BC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f0bc
	if (!cr0.eq) goto loc_8259F0BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8259f0f4
	if (cr6.gt) goto loc_8259F0F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F0F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F0F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259F104"))) PPC_WEAK_FUNC(sub_8259F104);
PPC_FUNC_IMPL(__imp__sub_8259F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F108"))) PPC_WEAK_FUNC(sub_8259F108);
PPC_FUNC_IMPL(__imp__sub_8259F108) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f170
	if (cr6.eq) goto loc_8259F170;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8259F138:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f138
	if (!cr0.eq) goto loc_8259F138;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f170
	if (!cr6.eq) goto loc_8259F170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F170:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f1bc
	if (cr6.eq) goto loc_8259F1BC;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8259F184:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f184
	if (!cr0.eq) goto loc_8259F184;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f1bc
	if (!cr6.eq) goto loc_8259F1BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F1BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F1BC:
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

__attribute__((alias("__imp__sub_8259F1D4"))) PPC_WEAK_FUNC(sub_8259F1D4);
PPC_FUNC_IMPL(__imp__sub_8259F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F1D8"))) PPC_WEAK_FUNC(sub_8259F1D8);
PPC_FUNC_IMPL(__imp__sub_8259F1D8) {
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
	// bl 0x831cdae0
	ctx.lr = 0x8259F1E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8259F200;
	sub_82596FE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8355a568
	ctx.lr = 0x8259F20C;
	sub_8355A568(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r30,r11,-22544
	ctx.r30.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x8259f224
	if (!cr6.eq) goto loc_8259F224;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_8259F224:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8259f254
	if (cr6.eq) goto loc_8259F254;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8259F238:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f238
	if (!cr6.eq) goto loc_8259F238;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8259F254:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F26C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259f2e4
	if (!cr6.eq) goto loc_8259F2E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f2cc
	if (cr6.eq) goto loc_8259F2CC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_8259F294:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f294
	if (!cr0.eq) goto loc_8259F294;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f2cc
	if (!cr6.eq) goto loc_8259F2CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F2CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F2CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8259F2D4;
	sub_82597088(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8259F2E4:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8259f2f4
	if (!cr6.eq) goto loc_8259F2F4;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8259F2F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// beq cr6,0x8259f320
	if (cr6.eq) goto loc_8259F320;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8259F304:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f304
	if (!cr6.eq) goto loc_8259F304;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8259F320:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F338;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f350
	if (cr6.eq) goto loc_8259F350;
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x8259f354
	goto loc_8259F354;
loc_8259F350:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8259F354:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f380
	if (!cr6.eq) goto loc_8259F380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837cfda8
	ctx.lr = 0x8259F368;
	sub_837CFDA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8259F370;
	sub_82597088(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8259F380:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259f398
	if (cr6.eq) goto loc_8259F398;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8259f39c
	goto loc_8259F39C;
loc_8259F398:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8259F39C:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8354ee88
	ctx.lr = 0x8259F3AC;
	sub_8354EE88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837cfda8
	ctx.lr = 0x8259F3C8;
	sub_837CFDA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8259F3D0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259F3DC"))) PPC_WEAK_FUNC(sub_8259F3DC);
PPC_FUNC_IMPL(__imp__sub_8259F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F3E0"))) PPC_WEAK_FUNC(sub_8259F3E0);
PPC_FUNC_IMPL(__imp__sub_8259F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8259F3E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// lwz r11,-21708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21708);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8259f4a0
	if (cr6.lt) goto loc_8259F4A0;
	// beq cr6,0x8259f424
	if (cr6.eq) goto loc_8259F424;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8259f550
	if (!cr6.lt) goto loc_8259F550;
	// bl 0x835595a0
	ctx.lr = 0x8259F40C;
	sub_835595A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f550
	if (cr6.eq) goto loc_8259F550;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8259F424:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,-21720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21720);
	// bl 0x83103bb8
	ctx.lr = 0x8259F430;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f550
	if (!cr6.eq) goto loc_8259F550;
	// lwz r3,-21720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21720);
	// bl 0x83103d20
	ctx.lr = 0x8259F444;
	sub_83103D20(ctx, base);
	// lwz r11,-21720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21720);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83103d60
	ctx.lr = 0x8259F454;
	sub_83103D60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8355d3c0
	ctx.lr = 0x8259F46C;
	sub_8355D3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f550
	if (cr6.eq) goto loc_8259F550;
	// lwz r3,-21720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21720);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f490
	if (cr6.eq) goto loc_8259F490;
	// bl 0x83103e98
	ctx.lr = 0x8259F488;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21720, ctx.r11.u32);
loc_8259F490:
	// bl 0x8355bd98
	ctx.lr = 0x8259F494;
	sub_8355BD98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// b 0x8259f544
	goto loc_8259F544;
loc_8259F4A0:
	// bl 0x830ff290
	ctx.lr = 0x8259F4A4;
	sub_830FF290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r3,76
	ctx.r26.s64 = ctx.r3.s64 + 76;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,28080
	ctx.r29.s64 = ctx.r11.s64 + 28080;
loc_8259F4B4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x8259f518
	if (cr6.eq) goto loc_8259F518;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// beq cr6,0x8259f518
	if (cr6.eq) goto loc_8259F518;
	// bl 0x833c25b8
	ctx.lr = 0x8259F4C8;
	sub_833C25B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x833c24a8
	ctx.lr = 0x8259F4D0;
	sub_833C24A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r26,56
	ctx.r30.s64 = ctx.r26.s64 + 56;
loc_8259F4DC:
	// addi r6,r29,-48
	ctx.r6.s64 = ctx.r29.s64 + -48;
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x8259F4F4;
	sub_831D0B08(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259f1d8
	ctx.lr = 0x8259F508;
	sub_8259F1D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x8259f4dc
	if (cr6.lt) goto loc_8259F4DC;
loc_8259F518:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// blt cr6,0x8259f4b4
	if (cr6.lt) goto loc_8259F4B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x8259F538;
	sub_83104938(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// stw r3,-21720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21720, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x8259F544;
	sub_83103B18(ctx, base);
loc_8259F544:
	// lwz r11,-21708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21708);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-21708(r25)
	PPC_STORE_U32(ctx.r25.u32 + -21708, ctx.r11.u32);
loc_8259F550:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259F55C"))) PPC_WEAK_FUNC(sub_8259F55C);
PPC_FUNC_IMPL(__imp__sub_8259F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F560"))) PPC_WEAK_FUNC(sub_8259F560);
PPC_FUNC_IMPL(__imp__sub_8259F560) {
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
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// bl 0x83522850
	ctx.lr = 0x8259F5A4;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8259f5dc
	if (!cr6.eq) goto loc_8259F5DC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8259F5C0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f5c0
	if (!cr0.eq) goto loc_8259F5C0;
loc_8259F5DC:
	// bl 0x83522850
	ctx.lr = 0x8259F5E0;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8259f618
	if (!cr6.eq) goto loc_8259F618;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8259F5FC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f5fc
	if (!cr0.eq) goto loc_8259F5FC;
loc_8259F618:
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

__attribute__((alias("__imp__sub_8259F634"))) PPC_WEAK_FUNC(sub_8259F634);
PPC_FUNC_IMPL(__imp__sub_8259F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F638"))) PPC_WEAK_FUNC(sub_8259F638);
PPC_FUNC_IMPL(__imp__sub_8259F638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8259F640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8259f6bc
	if (cr6.eq) goto loc_8259F6BC;
	// li r30,-2
	ctx.r30.s64 = -2;
loc_8259F658:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82574ba8
	ctx.lr = 0x8259F664;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f6a8
	if (cr6.eq) goto loc_8259F6A8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8259F670:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259f670
	if (!cr0.eq) goto loc_8259F670;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8259f6a8
	if (cr6.gt) goto loc_8259F6A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F6A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F6A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8259F6B0;
	sub_83521F50(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8259f658
	if (!cr6.eq) goto loc_8259F658;
loc_8259F6BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259F6C4"))) PPC_WEAK_FUNC(sub_8259F6C4);
PPC_FUNC_IMPL(__imp__sub_8259F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F6C8"))) PPC_WEAK_FUNC(sub_8259F6C8);
PPC_FUNC_IMPL(__imp__sub_8259F6C8) {
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
	// bl 0x8355e0f0
	ctx.lr = 0x8259F6E8;
	sub_8355E0F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f708
	if (cr6.eq) goto loc_8259F708;
	// bl 0x82595188
	ctx.lr = 0x8259F6F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8259F708;
	sub_825952B8(ctx, base);
loc_8259F708:
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

__attribute__((alias("__imp__sub_8259F724"))) PPC_WEAK_FUNC(sub_8259F724);
PPC_FUNC_IMPL(__imp__sub_8259F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F728"))) PPC_WEAK_FUNC(sub_8259F728);
PPC_FUNC_IMPL(__imp__sub_8259F728) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f76c
	if (!cr6.eq) goto loc_8259F76C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f76c
	if (cr6.eq) goto loc_8259F76C;
	// bl 0x83103bb8
	ctx.lr = 0x8259F758;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f76c
	if (!cr6.eq) goto loc_8259F76C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8259F76C:
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

__attribute__((alias("__imp__sub_8259F780"))) PPC_WEAK_FUNC(sub_8259F780);
PPC_FUNC_IMPL(__imp__sub_8259F780) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8259f7b8
	if (!cr6.eq) goto loc_8259F7B8;
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
loc_8259F7B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,28264
	ctx.r3.s64 = ctx.r10.s64 + 28264;
	// bl 0x83104938
	ctx.lr = 0x8259F7D0;
	sub_83104938(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x8259F7D8;
	sub_83103B18(ctx, base);
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

__attribute__((alias("__imp__sub_8259F7F0"))) PPC_WEAK_FUNC(sub_8259F7F0);
PPC_FUNC_IMPL(__imp__sub_8259F7F0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f81c
	if (cr6.eq) goto loc_8259F81C;
	// bl 0x83103e98
	ctx.lr = 0x8259F814;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8259F81C:
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

__attribute__((alias("__imp__sub_8259F830"))) PPC_WEAK_FUNC(sub_8259F830);
PPC_FUNC_IMPL(__imp__sub_8259F830) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,28236
	ctx.r10.s64 = ctx.r11.s64 + 28236;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8259f870
	if (cr6.eq) goto loc_8259F870;
	// bl 0x83103e98
	ctx.lr = 0x8259F868;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8259F870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8355e0f0
	ctx.lr = 0x8259F878;
	sub_8355E0F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259f898
	if (cr6.eq) goto loc_8259F898;
	// bl 0x82595188
	ctx.lr = 0x8259F888;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8259F898;
	sub_825952B8(ctx, base);
loc_8259F898:
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

__attribute__((alias("__imp__sub_8259F8B4"))) PPC_WEAK_FUNC(sub_8259F8B4);
PPC_FUNC_IMPL(__imp__sub_8259F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F8B8"))) PPC_WEAK_FUNC(sub_8259F8B8);
PPC_FUNC_IMPL(__imp__sub_8259F8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8259F8C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x83103d60
	ctx.lr = 0x8259F8D8;
	sub_83103D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831049a8
	ctx.lr = 0x8259F8E4;
	sub_831049A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e8
	ctx.lr = 0x8259F8EC;
	sub_825832E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq cr6,0x8259fa18
	if (cr6.eq) goto loc_8259FA18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r27,r11,-2392
	ctx.r27.s64 = ctx.r11.s64 + -2392;
loc_8259F910:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82472fc0
	ctx.lr = 0x8259F92C;
	sub_82472FC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83104b18
	ctx.lr = 0x8259F938;
	sub_83104B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8259F940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f940
	if (!cr6.eq) goto loc_8259F940;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x8259F964;
	sub_824733F0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8259F97C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259f97c
	if (!cr6.eq) goto loc_8259F97C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8259F9A0;
	sub_82472FC0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8259f9b4
	if (!cr6.lt) goto loc_8259F9B4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8259F9B4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a7eb0
	ctx.lr = 0x8259F9C4;
	sub_827A7EB0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8259fa38
	if (!cr6.eq) goto loc_8259FA38;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8259f9e0
	if (cr6.lt) goto loc_8259F9E0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8259F9E0;
	sub_82416268(ctx, base);
loc_8259F9E0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8259fa00
	if (cr6.lt) goto loc_8259FA00;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8259FA00;
	sub_82416268(ctx, base);
loc_8259FA00:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8259f910
	if (cr6.lt) goto loc_8259F910;
loc_8259FA18:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// std r31,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r31.u64);
loc_8259FA20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a5c688
	ctx.lr = 0x8259FA28;
	sub_82A5C688(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8259FA30;
	sub_83521F50(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8259FA38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83104a50
	ctx.lr = 0x8259FA44;
	sub_83104A50(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83104ab8
	ctx.lr = 0x8259FA54;
	sub_83104AB8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// std r10,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// blt cr6,0x8259fa70
	if (cr6.lt) goto loc_8259FA70;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8259FA70;
	sub_82416268(ctx, base);
loc_8259FA70:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8259fa90
	if (cr6.lt) goto loc_8259FA90;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8259FA90;
	sub_82416268(ctx, base);
loc_8259FA90:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// b 0x8259fa20
	goto loc_8259FA20;
}

__attribute__((alias("__imp__sub_8259FAA0"))) PPC_WEAK_FUNC(sub_8259FAA0);
PPC_FUNC_IMPL(__imp__sub_8259FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8259FAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x8259fdf0
	ctx.lr = 0x8259FAC8;
	sub_8259FDF0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259FADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83b524e8
	ctx.lr = 0x8259FAE8;
	sub_83B524E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259fb3c
	if (cr6.eq) goto loc_8259FB3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259FB04:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259fb04
	if (!cr0.eq) goto loc_8259FB04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259fb3c
	if (!cr6.eq) goto loc_8259FB3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259FB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FB3C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8259fdf0
	ctx.lr = 0x8259FB44;
	sub_8259FDF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x83b524e8
	ctx.lr = 0x8259FB50;
	sub_83B524E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8259fba0
	if (cr6.eq) goto loc_8259FBA0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259FB68:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259fb68
	if (!cr0.eq) goto loc_8259FB68;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8259fba0
	if (!cr6.eq) goto loc_8259FBA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259FBA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FBA0:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x833c5d18
	ctx.lr = 0x8259FBB0;
	sub_833C5D18(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8259FBC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fbf8
	if (cr6.eq) goto loc_8259FBF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r11,28236
	ctx.r10.s64 = ctx.r11.s64 + 28236;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// b 0x8259fbfc
	goto loc_8259FBFC;
loc_8259FBF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8259FBFC:
	// bl 0x8355bd88
	ctx.lr = 0x8259FC00;
	sub_8355BD88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259f560
	ctx.lr = 0x8259FC08;
	sub_8259F560(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x830ff290
	ctx.lr = 0x8259FC10;
	sub_830FF290(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x8259FC1C;
	sub_830FF290(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r30,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x83561560
	ctx.lr = 0x8259FC40;
	sub_83561560(ctx, base);
	// bl 0x83556b28
	ctx.lr = 0x8259FC44;
	sub_83556B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83559d38
	ctx.lr = 0x8259FC50;
	sub_83559D38(ctx, base);
	// bl 0x83559b20
	ctx.lr = 0x8259FC54;
	sub_83559B20(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83521f50
	ctx.lr = 0x8259FC5C;
	sub_83521F50(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x83521f50
	ctx.lr = 0x8259FC64;
	sub_83521F50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259f108
	ctx.lr = 0x8259FC6C;
	sub_8259F108(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FC74"))) PPC_WEAK_FUNC(sub_8259FC74);
PPC_FUNC_IMPL(__imp__sub_8259FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FC78"))) PPC_WEAK_FUNC(sub_8259FC78);
PPC_FUNC_IMPL(__imp__sub_8259FC78) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-21700
	ctx.r3.s64 = ctx.r9.s64 + -21700;
	// bl 0x8352bb80
	ctx.lr = 0x8259FCA4;
	sub_8352BB80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FCB4"))) PPC_WEAK_FUNC(sub_8259FCB4);
PPC_FUNC_IMPL(__imp__sub_8259FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FCB8"))) PPC_WEAK_FUNC(sub_8259FCB8);
PPC_FUNC_IMPL(__imp__sub_8259FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x830ff290
	ctx.lr = 0x8259FCCC;
	sub_830FF290(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8259fce4
	if (cr6.eq) goto loc_8259FCE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,26376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26376);
	// b 0x8259fcec
	goto loc_8259FCEC;
loc_8259FCE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,26368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26368);
loc_8259FCEC:
	// bl 0x830ff290
	ctx.lr = 0x8259FCF0;
	sub_830FF290(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8259fd24
	if (cr6.eq) goto loc_8259FD24;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8259fd18
	if (cr6.eq) goto loc_8259FD18;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8259fd30
	if (!cr6.eq) goto loc_8259FD30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-29544(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29544);
	// b 0x8259fd2c
	goto loc_8259FD2C;
loc_8259FD18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,26360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26360);
	// b 0x8259fd2c
	goto loc_8259FD2C;
loc_8259FD24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,15760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
loc_8259FD2C:
	// fmul f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
loc_8259FD30:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,-21700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21700);
	// lfd f0,26352(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26352);
	// fdiv f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 / ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8259FD54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_8259FD68"))) PPC_WEAK_FUNC(sub_8259FD68);
PPC_FUNC_IMPL(__imp__sub_8259FD68) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,-21700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21700);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259FD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-21700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21700);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8259FDA4;
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

__attribute__((alias("__imp__sub_8259FDB8"))) PPC_WEAK_FUNC(sub_8259FDB8);
PPC_FUNC_IMPL(__imp__sub_8259FDB8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,-21700
	ctx.r3.s64 = ctx.r11.s64 + -21700;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x837cffd0
	ctx.lr = 0x8259FDDC;
	sub_837CFFD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FDEC"))) PPC_WEAK_FUNC(sub_8259FDEC);
PPC_FUNC_IMPL(__imp__sub_8259FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FDF0"))) PPC_WEAK_FUNC(sub_8259FDF0);
PPC_FUNC_IMPL(__imp__sub_8259FDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-21700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8259FE0C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8259fe0c
	if (!cr0.eq) goto loc_8259FE0C;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FE30"))) PPC_WEAK_FUNC(sub_8259FE30);
PPC_FUNC_IMPL(__imp__sub_8259FE30) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ecc58
	ctx.lr = 0x8259FE58;
	sub_834ECC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ea438
	ctx.lr = 0x8259FE60;
	sub_834EA438(ctx, base);
	// bl 0x834ec258
	ctx.lr = 0x8259FE64;
	sub_834EC258(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ea438
	ctx.lr = 0x8259FE6C;
	sub_834EA438(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x834ebb58
	ctx.lr = 0x8259FE7C;
	sub_834EBB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x834ebb58
	ctx.lr = 0x8259FE8C;
	sub_834EBB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x834ebb58
	ctx.lr = 0x8259FE9C;
	sub_834EBB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x834ebb58
	ctx.lr = 0x8259FEAC;
	sub_834EBB58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834ebb58
	ctx.lr = 0x8259FEBC;
	sub_834EBB58(ctx, base);
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

__attribute__((alias("__imp__sub_8259FED0"))) PPC_WEAK_FUNC(sub_8259FED0);
PPC_FUNC_IMPL(__imp__sub_8259FED0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x834ece00
	ctx.lr = 0x8259FEE8;
	sub_834ECE00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17544(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17544);
	// bl 0x82572fa0
	ctx.lr = 0x8259FF00;
	sub_82572FA0(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
loc_8259FF04:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82581eb8
	ctx.lr = 0x8259FF0C;
	sub_82581EB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825811b0
	ctx.lr = 0x8259FF14;
	sub_825811B0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8259ff04
	if (!cr0.eq) goto loc_8259FF04;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8259FF28;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8259FF3C"))) PPC_WEAK_FUNC(sub_8259FF3C);
PPC_FUNC_IMPL(__imp__sub_8259FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FF40"))) PPC_WEAK_FUNC(sub_8259FF40);
PPC_FUNC_IMPL(__imp__sub_8259FF40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29732
	ctx.r4.s64 = ctx.r11.s64 + 29732;
	// bl 0x8241f0a0
	ctx.lr = 0x8259FF64;
	sub_8241F0A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,28836(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8248ffc8
	ctx.lr = 0x8259FF7C;
	sub_8248FFC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8259FF84;
	sub_82573C50(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,29692
	ctx.r8.s64 = ctx.r9.s64 + 29692;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8259FFA8"))) PPC_WEAK_FUNC(sub_8259FFA8);
PPC_FUNC_IMPL(__imp__sub_8259FFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8335a878
	sub_8335A878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FFAC"))) PPC_WEAK_FUNC(sub_8259FFAC);
PPC_FUNC_IMPL(__imp__sub_8259FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FFB0"))) PPC_WEAK_FUNC(sub_8259FFB0);
PPC_FUNC_IMPL(__imp__sub_8259FFB0) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,-21672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21672);
	// bl 0x82589490
	ctx.lr = 0x8259FFCC;
	sub_82589490(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21672, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8259FFE8"))) PPC_WEAK_FUNC(sub_8259FFE8);
PPC_FUNC_IMPL(__imp__sub_8259FFE8) {
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
	// bl 0x8248fe48
	ctx.lr = 0x825A0008;
	sub_8248FE48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a0028
	if (cr6.eq) goto loc_825A0028;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x825A0024;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A0028:
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

__attribute__((alias("__imp__sub_825A0040"))) PPC_WEAK_FUNC(sub_825A0040);
PPC_FUNC_IMPL(__imp__sub_825A0040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A0048;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x825730a8
	ctx.lr = 0x825A0060;
	sub_825730A8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0080
	if (cr6.eq) goto loc_825A0080;
	// bl 0x8259ff40
	ctx.lr = 0x825A0070;
	sub_8259FF40(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r31,r11,-21672
	ctx.r31.s64 = ctx.r11.s64 + -21672;
	// stw r3,-21672(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21672, ctx.r3.u32);
	// b 0x825a0090
	goto loc_825A0090;
loc_825A0080:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r31,r10,-21672
	ctx.r31.s64 = ctx.r10.s64 + -21672;
	// stw r28,-21672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21672, ctx.r28.u32);
loc_825A0090:
	// bl 0x8258aa08
	ctx.lr = 0x825A0094;
	sub_8258AA08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A00A4;
	sub_82589A00(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8258a808
	ctx.lr = 0x825A00AC;
	sub_8258A808(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r29,r11,21152
	ctx.r29.s64 = ctx.r11.s64 + 21152;
	// lwz r11,440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x825a00c8
	if (!cr6.lt) goto loc_825A00C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 440, ctx.r11.u32);
loc_825A00C8:
	// li r10,400
	ctx.r10.s64 = 400;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x8258a988
	ctx.lr = 0x825A00E0;
	sub_8258A988(ctx, base);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// ld r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r5,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r5.u64);
	// ld r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// bl 0x82576490
	ctx.lr = 0x825A0114;
	sub_82576490(ctx, base);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82576490
	ctx.lr = 0x825A0120;
	sub_82576490(ctx, base);
	// bl 0x8248e0a0
	ctx.lr = 0x825A0124;
	sub_8248E0A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A0134;
	sub_82589A00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8248de38
	ctx.lr = 0x825A013C;
	sub_8248DE38(ctx, base);
	// bl 0x8248e020
	ctx.lr = 0x825A0140;
	sub_8248E020(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82576490
	ctx.lr = 0x825A0158;
	sub_82576490(ctx, base);
	// bl 0x82532970
	ctx.lr = 0x825A015C;
	sub_82532970(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A016C;
	sub_82589A00(ctx, base);
	// bl 0x825663a0
	ctx.lr = 0x825A0170;
	sub_825663A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A0180;
	sub_82589A00(ctx, base);
	// bl 0x8382fd00
	ctx.lr = 0x825A0184;
	sub_8382FD00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A0194;
	sub_82589A00(ctx, base);
	// bl 0x8335aaa8
	ctx.lr = 0x825A0198;
	sub_8335AAA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A01A8;
	sub_82589A00(ctx, base);
	// bl 0x83354a00
	ctx.lr = 0x825A01AC;
	sub_83354A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A01BC;
	sub_82589A00(ctx, base);
	// bl 0x83362330
	ctx.lr = 0x825A01C0;
	sub_83362330(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A01D0;
	sub_82589A00(ctx, base);
	// bl 0x832e3a28
	ctx.lr = 0x825A01D4;
	sub_832E3A28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A01E4;
	sub_82589A00(ctx, base);
	// bl 0x83306718
	ctx.lr = 0x825A01E8;
	sub_83306718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589a00
	ctx.lr = 0x825A01F8;
	sub_82589A00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589de0
	ctx.lr = 0x825A0200;
	sub_82589DE0(ctx, base);
	// bl 0x824efae8
	ctx.lr = 0x825A0204;
	sub_824EFAE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82560158
	ctx.lr = 0x825A020C;
	sub_82560158(ctx, base);
	// addi r3,r29,432
	ctx.r3.s64 = ctx.r29.s64 + 432;
	// bl 0x82560168
	ctx.lr = 0x825A0214;
	sub_82560168(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82589358
	ctx.lr = 0x825A021C;
	sub_82589358(ctx, base);
	// bl 0x82490178
	ctx.lr = 0x825A0220;
	sub_82490178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250ad28
	ctx.lr = 0x825A0228;
	sub_8250AD28(ctx, base);
	// bl 0x82490178
	ctx.lr = 0x825A022C;
	sub_82490178(ctx, base);
	// bl 0x8250a348
	ctx.lr = 0x825A0230;
	sub_8250A348(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825a0244
	if (cr6.lt) goto loc_825A0244;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x825A0244;
	sub_8386D088(ctx, base);
loc_825A0244:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// blt cr6,0x825a0268
	if (cr6.lt) goto loc_825A0268;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x8386d088
	ctx.lr = 0x825A0268;
	sub_8386D088(ctx, base);
loc_825A0268:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r28.u8);
	// blt cr6,0x825a0288
	if (cr6.lt) goto loc_825A0288;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x8386d088
	ctx.lr = 0x825A0288;
	sub_8386D088(ctx, base);
loc_825A0288:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0290"))) PPC_WEAK_FUNC(sub_825A0290);
PPC_FUNC_IMPL(__imp__sub_825A0290) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,-21660(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -21660);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x825a035c
	if (cr6.eq) goto loc_825A035C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-21660(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21660, ctx.r10.u8);
	// bl 0x8352c8d8
	ctx.lr = 0x825A02C0;
	sub_8352C8D8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x825953a0
	ctx.lr = 0x825A02CC;
	sub_825953A0(ctx, base);
	// li r31,10
	ctx.r31.s64 = 10;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825A02D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83523348
	ctx.lr = 0x825A02DC;
	sub_83523348(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825952a0
	ctx.lr = 0x825A02F8;
	sub_825952A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373dbd0
	ctx.lr = 0x825A0300;
	sub_8373DBD0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,50
	cr6.compare<uint32_t>(ctx.r31.u32, 50, xer);
	// blt cr6,0x825a02d4
	if (cr6.lt) goto loc_825A02D4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x830ff210
	ctx.lr = 0x825A0318;
	sub_830FF210(ctx, base);
	// bl 0x83108ef0
	ctx.lr = 0x825A031C;
	sub_83108EF0(ctx, base);
	// bl 0x83108810
	ctx.lr = 0x825A0320;
	sub_83108810(ctx, base);
	// bl 0x83107e98
	ctx.lr = 0x825A0324;
	sub_83107E98(ctx, base);
	// bl 0x83105d48
	ctx.lr = 0x825A0328;
	sub_83105D48(ctx, base);
	// bl 0x83107528
	ctx.lr = 0x825A032C;
	sub_83107528(ctx, base);
	// bl 0x831053e0
	ctx.lr = 0x825A0330;
	sub_831053E0(ctx, base);
	// bl 0x83105058
	ctx.lr = 0x825A0334;
	sub_83105058(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83526560
	ctx.lr = 0x825A033C;
	sub_83526560(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x83526400
	ctx.lr = 0x825A0354;
	sub_83526400(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835264e8
	ctx.lr = 0x825A035C;
	sub_835264E8(ctx, base);
loc_825A035C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_825A0374"))) PPC_WEAK_FUNC(sub_825A0374);
PPC_FUNC_IMPL(__imp__sub_825A0374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0378"))) PPC_WEAK_FUNC(sub_825A0378);
PPC_FUNC_IMPL(__imp__sub_825A0378) {
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
	// bl 0x830fecc8
	ctx.lr = 0x825A0388;
	sub_830FECC8(ctx, base);
	// bl 0x83108060
	ctx.lr = 0x825A038C;
	sub_83108060(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A039C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83107f98
	ctx.lr = 0x825A03A0;
	sub_83107F98(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A03B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83105d48
	ctx.lr = 0x825A03B4;
	sub_83105D48(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825A03C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83109298
	ctx.lr = 0x825A03C8;
	sub_83109298(ctx, base);
	// bl 0x83069b18
	ctx.lr = 0x825A03CC;
	sub_83069B18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a03e4
	if (cr6.eq) goto loc_825A03E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A03E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A03E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A03F4"))) PPC_WEAK_FUNC(sub_825A03F4);
PPC_FUNC_IMPL(__imp__sub_825A03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A03F8"))) PPC_WEAK_FUNC(sub_825A03F8);
PPC_FUNC_IMPL(__imp__sub_825A03F8) {
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
	ctx.lr = 0x825A0408;
	sub_83102DB0(ctx, base);
	// bl 0x83526490
	ctx.lr = 0x825A040C;
	sub_83526490(ctx, base);
	// bl 0x83069b28
	ctx.lr = 0x825A0410;
	sub_83069B28(ctx, base);
	// bl 0x831050f0
	ctx.lr = 0x825A0414;
	sub_831050F0(ctx, base);
	// bl 0x83105368
	ctx.lr = 0x825A0418;
	sub_83105368(ctx, base);
	// bl 0x83105d58
	ctx.lr = 0x825A041C;
	sub_83105D58(ctx, base);
	// bl 0x83107df8
	ctx.lr = 0x825A0420;
	sub_83107DF8(ctx, base);
	// bl 0x83108070
	ctx.lr = 0x825A0424;
	sub_83108070(ctx, base);
	// bl 0x83108c70
	ctx.lr = 0x825A0428;
	sub_83108C70(ctx, base);
	// bl 0x830fef68
	ctx.lr = 0x825A042C;
	sub_830FEF68(ctx, base);
	// bl 0x8352c968
	ctx.lr = 0x825A0430;
	sub_8352C968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0440"))) PPC_WEAK_FUNC(sub_825A0440);
PPC_FUNC_IMPL(__imp__sub_825A0440) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x835231c8
	ctx.lr = 0x825A0470;
	sub_835231C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a0484
	if (cr6.eq) goto loc_825A0484;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83523a78
	ctx.lr = 0x825A0484;
	sub_83523A78(ctx, base);
loc_825A0484:
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

__attribute__((alias("__imp__sub_825A049C"))) PPC_WEAK_FUNC(sub_825A049C);
PPC_FUNC_IMPL(__imp__sub_825A049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A04A0"))) PPC_WEAK_FUNC(sub_825A04A0);
PPC_FUNC_IMPL(__imp__sub_825A04A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83523298
	sub_83523298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A04A4"))) PPC_WEAK_FUNC(sub_825A04A4);
PPC_FUNC_IMPL(__imp__sub_825A04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A04A8"))) PPC_WEAK_FUNC(sub_825A04A8);
PPC_FUNC_IMPL(__imp__sub_825A04A8) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825a04dc
	if (cr6.eq) goto loc_825A04DC;
	// bl 0x82416268
	ctx.lr = 0x825A04D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A04DC:
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

__attribute__((alias("__imp__sub_825A04F0"))) PPC_WEAK_FUNC(sub_825A04F0);
PPC_FUNC_IMPL(__imp__sub_825A04F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A04F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-21656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21656);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x825a07e8
	if (cr6.gt) goto loc_825A07E8;
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1316
	ctx.r12.s64 = ctx.r12.s64 + 1316;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825A0564;
	case 1:
		goto loc_825A0594;
	case 2:
		goto loc_825A05C4;
	case 3:
		goto loc_825A05F4;
	case 4:
		goto loc_825A0638;
	case 5:
		goto loc_825A0654;
	case 6:
		goto loc_825A067C;
	case 7:
		goto loc_825A0744;
	case 8:
		goto loc_825A0768;
	case 9:
		goto loc_825A0798;
	case 10:
		goto loc_825A07E8;
	case 11:
		goto loc_825A07E8;
	case 12:
		goto loc_825A07E8;
	case 13:
		goto loc_825A07E8;
	case 14:
		goto loc_825A07E8;
	case 15:
		goto loc_825A07C4;
	default:
		return;
	}
	// lwz r18,1380(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1380);
	// lwz r18,1428(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1428);
	// lwz r18,1476(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1476);
	// lwz r18,1524(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1524);
	// lwz r18,1592(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1592);
	// lwz r18,1620(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1620);
	// lwz r18,1660(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1660);
	// lwz r18,1860(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1860);
	// lwz r18,1896(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1896);
	// lwz r18,1944(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1944);
	// lwz r18,2024(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2024);
	// lwz r18,2024(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2024);
	// lwz r18,2024(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2024);
	// lwz r18,2024(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2024);
	// lwz r18,2024(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2024);
	// lwz r18,1988(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1988);
loc_825A0564:
	// bl 0x831099d8
	ctx.lr = 0x825A0568;
	sub_831099D8(ctx, base);
	// bl 0x83109fd8
	ctx.lr = 0x825A056C;
	sub_83109FD8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x825A0570;
	sub_831099D8(ctx, base);
	// bl 0x83109cc8
	ctx.lr = 0x825A0574;
	sub_83109CC8(ctx, base);
	// bl 0x8310b810
	ctx.lr = 0x825A0578;
	sub_8310B810(ctx, base);
	// bl 0x825a0a80
	ctx.lr = 0x825A057C;
	sub_825A0A80(ctx, base);
	// bl 0x825a0b10
	ctx.lr = 0x825A0580;
	sub_825A0B10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0594:
	// bl 0x831099d8
	ctx.lr = 0x825A0598;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A059C;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x8310a820
	ctx.lr = 0x825A05AC;
	sub_8310A820(ctx, base);
	// bl 0x8310a878
	ctx.lr = 0x825A05B0;
	sub_8310A878(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A05C4:
	// bl 0x8310a820
	ctx.lr = 0x825A05C8;
	sub_8310A820(ctx, base);
	// bl 0x8310a8c0
	ctx.lr = 0x825A05CC;
	sub_8310A8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x831099d8
	ctx.lr = 0x825A05DC;
	sub_831099D8(ctx, base);
	// bl 0x8310a5a0
	ctx.lr = 0x825A05E0;
	sub_8310A5A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A05F4:
	// bl 0x831099d8
	ctx.lr = 0x825A05F8;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A05FC;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x83108968
	ctx.lr = 0x825A060C;
	sub_83108968(ctx, base);
	// bl 0x83108f58
	ctx.lr = 0x825A0610;
	sub_83108F58(ctx, base);
	// bl 0x83108968
	ctx.lr = 0x825A0614;
	sub_83108968(ctx, base);
	// bl 0x83133160
	ctx.lr = 0x825A0618;
	sub_83133160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0638:
	// bl 0x831099d8
	ctx.lr = 0x825A063C;
	sub_831099D8(ctx, base);
	// bl 0x83109cd8
	ctx.lr = 0x825A0640;
	sub_83109CD8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0654:
	// bl 0x831099d8
	ctx.lr = 0x825A0658;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A065C;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A067C:
	// bl 0x831099d8
	ctx.lr = 0x825A0680;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A0684;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x83102db0
	ctx.lr = 0x825A0694;
	sub_83102DB0(ctx, base);
	// bl 0x82dd3a30
	ctx.lr = 0x825A0698;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x83572958
	ctx.lr = 0x825A06A8;
	sub_83572958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x825A06B0;
	sub_83102DB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,29860
	ctx.r30.s64 = ctx.r11.s64 + 29860;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x825A06C4;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dd3a30
	ctx.lr = 0x825A06D8;
	sub_82DD3A30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x825A06E0;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x825A06EC;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82dd3a30
	ctx.lr = 0x825A0700;
	sub_82DD3A30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x825A0708;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x825A0714;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x825A0728;
	sub_82DD3A30(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x825A0730;
	sub_8387E8E0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0744:
	// bl 0x83102db0
	ctx.lr = 0x825A0748;
	sub_83102DB0(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x825A074C;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0768:
	// bl 0x83104bf0
	ctx.lr = 0x825A076C;
	sub_83104BF0(ctx, base);
	// bl 0x83104fe0
	ctx.lr = 0x825A0770;
	sub_83104FE0(ctx, base);
	// bl 0x83104bf0
	ctx.lr = 0x825A0774;
	sub_83104BF0(ctx, base);
	// bl 0x83787bf8
	ctx.lr = 0x825A0778;
	sub_83787BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A0798:
	// bl 0x831099d8
	ctx.lr = 0x825A079C;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A07A0;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// bl 0x83069bf0
	ctx.lr = 0x825A07B0;
	sub_83069BF0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21656, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A07C4:
	// bl 0x83069b18
	ctx.lr = 0x825A07C8;
	sub_83069B18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A07D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a07ec
	if (cr6.eq) goto loc_825A07EC;
loc_825A07E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A07EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A07F4"))) PPC_WEAK_FUNC(sub_825A07F4);
PPC_FUNC_IMPL(__imp__sub_825A07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A07F8"))) PPC_WEAK_FUNC(sub_825A07F8);
PPC_FUNC_IMPL(__imp__sub_825A07F8) {
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
	// bl 0x8310cc00
	ctx.lr = 0x825A0808;
	sub_8310CC00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8310cc98
	ctx.lr = 0x825A081C;
	sub_8310CC98(ctx, base);
	// bl 0x8310aff8
	ctx.lr = 0x825A0820;
	sub_8310AFF8(ctx, base);
	// bl 0x8310c718
	ctx.lr = 0x825A0824;
	sub_8310C718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0834"))) PPC_WEAK_FUNC(sub_825A0834);
PPC_FUNC_IMPL(__imp__sub_825A0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0838"))) PPC_WEAK_FUNC(sub_825A0838);
PPC_FUNC_IMPL(__imp__sub_825A0838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8310cc00
	ctx.lr = 0x825A0848;
	sub_8310CC00(ctx, base);
	// bl 0x8310cda0
	ctx.lr = 0x825A084C;
	sub_8310CDA0(ctx, base);
	// bl 0x8310c590
	ctx.lr = 0x825A0850;
	sub_8310C590(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A0860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A0874"))) PPC_WEAK_FUNC(sub_825A0874);
PPC_FUNC_IMPL(__imp__sub_825A0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0878"))) PPC_WEAK_FUNC(sub_825A0878);
PPC_FUNC_IMPL(__imp__sub_825A0878) {
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
	// bl 0x8310c780
	ctx.lr = 0x825A0888;
	sub_8310C780(ctx, base);
	// bl 0x8310a900
	ctx.lr = 0x825A088C;
	sub_8310A900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A089C"))) PPC_WEAK_FUNC(sub_825A089C);
PPC_FUNC_IMPL(__imp__sub_825A089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A08A0"))) PPC_WEAK_FUNC(sub_825A08A0);
PPC_FUNC_IMPL(__imp__sub_825A08A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830ff290
	ctx.lr = 0x825A08B8;
	sub_830FF290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x825A08D4;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83d756bc
	ctx.lr = 0x825A08DC;
	__imp__XGetVideoMode(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// lfs f31,30444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30444);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x825a0918
	if (!cr6.eq) goto loc_825A0918;
	// li r10,720
	ctx.r10.s64 = 720;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x825a0910
	if (!cr6.eq) goto loc_825A0910;
	// li r11,1280
	ctx.r11.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825a0954
	goto loc_825A0954;
loc_825A0910:
	// li r11,960
	ctx.r11.s64 = 960;
	// b 0x825a0950
	goto loc_825A0950;
loc_825A0918:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825a0934
	if (!cr6.eq) goto loc_825A0934;
	// li r10,720
	ctx.r10.s64 = 720;
	// li r11,1280
	ctx.r11.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x825a0954
	goto loc_825A0954;
loc_825A0934:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r11,640
	ctx.r11.s64 = 640;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r10,576
	ctx.r10.s64 = 576;
	// beq cr6,0x825a094c
	if (cr6.eq) goto loc_825A094C;
	// li r10,480
	ctx.r10.s64 = 480;
loc_825A094C:
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_825A0950:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825A0954:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583300
	ctx.lr = 0x825A0960;
	sub_82583300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ff460
	ctx.lr = 0x825A0968;
	sub_830FF460(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825a097c
	if (!cr6.eq) goto loc_825A097C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825a09a4
	goto loc_825A09A4;
loc_825A097C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x825a0990
	if (cr6.eq) goto loc_825A0990;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x825a09a4
	goto loc_825A09A4;
loc_825A0990:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x825a09a4
	if (cr6.eq) goto loc_825A09A4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_825A09A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ff418
	ctx.lr = 0x825A09AC;
	sub_830FF418(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_825A09C4"))) PPC_WEAK_FUNC(sub_825A09C4);
PPC_FUNC_IMPL(__imp__sub_825A09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A09C8"))) PPC_WEAK_FUNC(sub_825A09C8);
PPC_FUNC_IMPL(__imp__sub_825A09C8) {
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
	// bl 0x830ffa68
	ctx.lr = 0x825A09D8;
	sub_830FFA68(ctx, base);
	// bl 0x825a08a0
	ctx.lr = 0x825A09DC;
	sub_825A08A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A09EC"))) PPC_WEAK_FUNC(sub_825A09EC);
PPC_FUNC_IMPL(__imp__sub_825A09EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A09F0"))) PPC_WEAK_FUNC(sub_825A09F0);
PPC_FUNC_IMPL(__imp__sub_825A09F0) {
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
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-21644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21644);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825a0a34
	if (cr6.lt) goto loc_825A0A34;
	// bne cr6,0x825a0a5c
	if (!cr6.eq) goto loc_825A0A5C;
	// bl 0x831099d8
	ctx.lr = 0x825A0A1C;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x825A0A20;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a0a5c
	if (cr6.eq) goto loc_825A0A5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a0a60
	goto loc_825A0A60;
loc_825A0A34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,30352
	ctx.r31.s64 = ctx.r11.s64 + 30352;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x8310d958
	ctx.lr = 0x825A0A44;
	sub_8310D958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d9e0
	ctx.lr = 0x825A0A4C;
	sub_8310D9E0(ctx, base);
	// bl 0x825a2018
	ctx.lr = 0x825A0A50;
	sub_825A2018(ctx, base);
	// lwz r11,-21644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-21644(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21644, ctx.r11.u32);
loc_825A0A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A0A60:
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

__attribute__((alias("__imp__sub_825A0A78"))) PPC_WEAK_FUNC(sub_825A0A78);
PPC_FUNC_IMPL(__imp__sub_825A0A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x830ffad0
	sub_830FFAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0A7C"))) PPC_WEAK_FUNC(sub_825A0A7C);
PPC_FUNC_IMPL(__imp__sub_825A0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0A80"))) PPC_WEAK_FUNC(sub_825A0A80);
PPC_FUNC_IMPL(__imp__sub_825A0A80) {
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
	// bl 0x83d7545c
	ctx.lr = 0x825A0A90;
	__imp__XGetGameRegion(ctx, base);
	// cmplwi cr6,r3,508
	cr6.compare<uint32_t>(ctx.r3.u32, 508, xer);
	// bgt cr6,0x825a0ae4
	if (cr6.gt) goto loc_825A0AE4;
	// beq cr6,0x825a0af8
	if (cr6.eq) goto loc_825A0AF8;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// beq cr6,0x825a0acc
	if (cr6.eq) goto loc_825A0ACC;
	// cmplwi cr6,r3,257
	cr6.compare<uint32_t>(ctx.r3.u32, 257, xer);
	// beq cr6,0x825a0ab4
	if (cr6.eq) goto loc_825A0AB4;
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// beq cr6,0x825a0af8
	if (cr6.eq) goto loc_825A0AF8;
loc_825A0AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8310dfb8
	ctx.lr = 0x825A0ABC;
	sub_8310DFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825A0ACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8310dfb8
	ctx.lr = 0x825A0AD4;
	sub_8310DFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825A0AE4:
	// cmplwi cr6,r3,513
	cr6.compare<uint32_t>(ctx.r3.u32, 513, xer);
	// bgt cr6,0x825a0ab4
	if (cr6.gt) goto loc_825A0AB4;
	// beq cr6,0x825a0ab4
	if (cr6.eq) goto loc_825A0AB4;
	// cmplwi cr6,r3,511
	cr6.compare<uint32_t>(ctx.r3.u32, 511, xer);
	// bne cr6,0x825a0ab4
	if (!cr6.eq) goto loc_825A0AB4;
loc_825A0AF8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8310dfb8
	ctx.lr = 0x825A0B00;
	sub_8310DFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0B10"))) PPC_WEAK_FUNC(sub_825A0B10);
PPC_FUNC_IMPL(__imp__sub_825A0B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A0B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,22
	ctx.r31.s64 = 22;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r28,10
	ctx.r28.s64 = 10;
	// bl 0x8310e000
	ctx.lr = 0x825A0B30;
	sub_8310E000(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825a0b74
	if (!cr6.eq) goto loc_825A0B74;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r30,11
	ctx.r30.s64 = 11;
	// bl 0x832d3108
	ctx.lr = 0x825A0B48;
	sub_832D3108(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x825a0b70
	if (cr6.eq) goto loc_825A0B70;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// beq cr6,0x825a0b68
	if (cr6.eq) goto loc_825A0B68;
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bne cr6,0x825a0b74
	if (!cr6.eq) goto loc_825A0B74;
	// li r30,20
	ctx.r30.s64 = 20;
	// b 0x825a0b74
	goto loc_825A0B74;
loc_825A0B68:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x825a0b74
	goto loc_825A0B74;
loc_825A0B70:
	// li r30,21
	ctx.r30.s64 = 21;
loc_825A0B74:
	// bl 0x82416980
	ctx.lr = 0x825A0B78;
	sub_82416980(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x825a0c54
	if (cr6.gt) goto loc_825A0C54;
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2972
	ctx.r12.s64 = ctx.r12.s64 + 2972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825A0BE0;
	case 1:
		goto loc_825A0BE8;
	case 2:
		goto loc_825A0BF0;
	case 3:
		goto loc_825A0BF8;
	case 4:
		goto loc_825A0C00;
	case 5:
		goto loc_825A0C08;
	case 6:
		goto loc_825A0C10;
	case 7:
		goto loc_825A0C18;
	case 8:
		goto loc_825A0C20;
	case 9:
		goto loc_825A0C54;
	case 10:
		goto loc_825A0C28;
	case 11:
		goto loc_825A0C30;
	case 12:
		goto loc_825A0C38;
	case 13:
		goto loc_825A0C40;
	case 14:
		goto loc_825A0C54;
	case 15:
		goto loc_825A0C48;
	case 16:
		goto loc_825A0C50;
	default:
		return;
	}
	// lwz r18,3040(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3040);
	// lwz r18,3048(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3048);
	// lwz r18,3056(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3056);
	// lwz r18,3064(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3064);
	// lwz r18,3072(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3072);
	// lwz r18,3080(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3080);
	// lwz r18,3088(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3088);
	// lwz r18,3096(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3096);
	// lwz r18,3104(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3104);
	// lwz r18,3156(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3156);
	// lwz r18,3112(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3112);
	// lwz r18,3120(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3120);
	// lwz r18,3128(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3128);
	// lwz r18,3136(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3136);
	// lwz r18,3156(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3156);
	// lwz r18,3144(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3144);
	// lwz r18,3152(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3152);
loc_825A0BE0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0BE8:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0BF0:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0BF8:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C00:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C08:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C10:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C18:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C20:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C28:
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C30:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C38:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C40:
	// li r31,17
	ctx.r31.s64 = 17;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C48:
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x825a0c54
	goto loc_825A0C54;
loc_825A0C50:
	// li r31,18
	ctx.r31.s64 = 18;
loc_825A0C54:
	// bl 0x832d3108
	ctx.lr = 0x825A0C58;
	sub_832D3108(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x825a0c64
	if (!cr6.eq) goto loc_825A0C64;
	// li r31,13
	ctx.r31.s64 = 13;
loc_825A0C64:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-13656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13656, ctx.r31.u32);
	// bl 0x8310d638
	ctx.lr = 0x825A0C78;
	sub_8310D638(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d6a8
	ctx.lr = 0x825A0C84;
	sub_8310D6A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0C8C"))) PPC_WEAK_FUNC(sub_825A0C8C);
PPC_FUNC_IMPL(__imp__sub_825A0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0C90"))) PPC_WEAK_FUNC(sub_825A0C90);
PPC_FUNC_IMPL(__imp__sub_825A0C90) {
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
	// bl 0x82469968
	ctx.lr = 0x825A0CA0;
	sub_82469968(ctx, base);
	// bl 0x833c6c60
	ctx.lr = 0x825A0CA4;
	sub_833C6C60(ctx, base);
	// bl 0x830fe928
	ctx.lr = 0x825A0CA8;
	sub_830FE928(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x825A0CAC;
	sub_83102DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0CBC"))) PPC_WEAK_FUNC(sub_825A0CBC);
PPC_FUNC_IMPL(__imp__sub_825A0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0CC0"))) PPC_WEAK_FUNC(sub_825A0CC0);
PPC_FUNC_IMPL(__imp__sub_825A0CC0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30600
	ctx.r10.s64 = ctx.r11.s64 + 30600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83535be8
	ctx.lr = 0x825A0CEC;
	sub_83535BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a0d0c
	if (cr6.eq) goto loc_825A0D0C;
	// bl 0x82595188
	ctx.lr = 0x825A0CFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A0D0C;
	sub_825952B8(ctx, base);
loc_825A0D0C:
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

__attribute__((alias("__imp__sub_825A0D28"))) PPC_WEAK_FUNC(sub_825A0D28);
PPC_FUNC_IMPL(__imp__sub_825A0D28) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A0D50;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0da4
	if (cr6.eq) goto loc_825A0DA4;
	// bl 0x835360e8
	ctx.lr = 0x825A0D60;
	sub_835360E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,30600
	ctx.r9.s64 = ctx.r11.s64 + 30600;
	// addi r8,r10,30496
	ctx.r8.s64 = ctx.r10.s64 + 30496;
	// li r7,16
	ctx.r7.s64 = 16;
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
	ctx.lr = 0x825A0D8C;
	sub_83537AE8(ctx, base);
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
loc_825A0DA4:
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

__attribute__((alias("__imp__sub_825A0DBC"))) PPC_WEAK_FUNC(sub_825A0DBC);
PPC_FUNC_IMPL(__imp__sub_825A0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0DC0"))) PPC_WEAK_FUNC(sub_825A0DC0);
PPC_FUNC_IMPL(__imp__sub_825A0DC0) {
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
	// bl 0x8259c7b0
	ctx.lr = 0x825A0DD0;
	sub_8259C7B0(ctx, base);
	// bl 0x833c6f10
	ctx.lr = 0x825A0DD4;
	sub_833C6F10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0DE4"))) PPC_WEAK_FUNC(sub_825A0DE4);
PPC_FUNC_IMPL(__imp__sub_825A0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0DE8"))) PPC_WEAK_FUNC(sub_825A0DE8);
PPC_FUNC_IMPL(__imp__sub_825A0DE8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30768
	ctx.r10.s64 = ctx.r11.s64 + 30768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83535be8
	ctx.lr = 0x825A0E14;
	sub_83535BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a0e34
	if (cr6.eq) goto loc_825A0E34;
	// bl 0x82595188
	ctx.lr = 0x825A0E24;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A0E34;
	sub_825952B8(ctx, base);
loc_825A0E34:
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

__attribute__((alias("__imp__sub_825A0E50"))) PPC_WEAK_FUNC(sub_825A0E50);
PPC_FUNC_IMPL(__imp__sub_825A0E50) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A0E78;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0ecc
	if (cr6.eq) goto loc_825A0ECC;
	// bl 0x835360e8
	ctx.lr = 0x825A0E88;
	sub_835360E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,30768
	ctx.r9.s64 = ctx.r11.s64 + 30768;
	// addi r8,r10,30664
	ctx.r8.s64 = ctx.r10.s64 + 30664;
	// li r7,18
	ctx.r7.s64 = 18;
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
	ctx.lr = 0x825A0EB4;
	sub_83537AE8(ctx, base);
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
loc_825A0ECC:
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

__attribute__((alias("__imp__sub_825A0EE4"))) PPC_WEAK_FUNC(sub_825A0EE4);
PPC_FUNC_IMPL(__imp__sub_825A0EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0EE8"))) PPC_WEAK_FUNC(sub_825A0EE8);
PPC_FUNC_IMPL(__imp__sub_825A0EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825A0EF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// divdu r21,r5,r11
	ctx.r21.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpldi cr6,r21,0
	cr6.compare<uint64_t>(ctx.r21.u64, 0, xer);
	// ble cr6,0x825a10b4
	if (!cr6.gt) goto loc_825A10B4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_825A0F28:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
loc_825A0F40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8311c708
	ctx.lr = 0x825A0F4C;
	sub_8311C708(ctx, base);
	// clrlwi r31,r3,14
	ctx.r31.u64 = ctx.r3.u32 & 0x3FFFF;
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// ble cr6,0x825a0f5c
	if (!cr6.gt) goto loc_825A0F5C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_825A0F5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x825A0F68;
	sub_8311BDF0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0f90
	if (cr6.eq) goto loc_825A0F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a0f94
	if (cr6.eq) goto loc_825A0F94;
loc_825A0F90:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825A0F94:
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a0fa8
	if (cr6.eq) goto loc_825A0FA8;
	// rlwinm r26,r26,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
loc_825A0FA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1004
	if (!cr6.eq) goto loc_825A1004;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x825a0fe4
	if (cr6.eq) goto loc_825A0FE4;
loc_825A0FC4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x825a0fe0
	if (cr6.eq) goto loc_825A0FE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x825a0fc4
	if (!cr6.eq) goto loc_825A0FC4;
	// b 0x825a0fe4
	goto loc_825A0FE4;
loc_825A0FE0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825A0FE4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1004
	if (!cr6.eq) goto loc_825A1004;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x825A0FFC;
	sub_82AB5F20(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825A1004:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,7
	cr6.compare<int32_t>(ctx.r27.s32, 7, xer);
	// blt cr6,0x825a0f40
	if (cr6.lt) goto loc_825A0F40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x825a1084
	if (cr6.eq) goto loc_825A1084;
loc_825A101C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// lwz r8,792(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// lwz r7,796(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 796);
	// rlwimi r8,r9,28,0,3
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r8.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r8,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r8.u32);
	// lbz r5,5(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwimi r8,r5,20,8,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0xF00000) | (ctx.r8.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r8,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r8.u32);
	// lbz r3,7(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// rlwimi r8,r3,16,12,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xF0000) | (ctx.r8.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r8,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r8.u32);
	// lbz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// rlwimi r7,r9,28,0,3
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r7.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r7,796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 796, ctx.r7.u32);
	// lbz r8,9(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// rlwimi r7,r8,26,4,5
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 26) & 0xC000000) | (ctx.r7.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r7,796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 796, ctx.r7.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lbz r5,10(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// rlwimi r7,r5,23,6,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x3800000) | (ctx.r7.u64 & 0xFFFFFFFFFC7FFFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r7,796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 796, ctx.r7.u32);
	// bne cr6,0x825a101c
	if (!cr6.eq) goto loc_825A101C;
loc_825A1084:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a1094
	if (cr6.eq) goto loc_825A1094;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x825A1094;
	sub_82416268(ctx, base);
loc_825A1094:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// cmpld cr6,r11,r21
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r21.u64, xer);
	// blt cr6,0x825a0f28
	if (cr6.lt) goto loc_825A0F28;
loc_825A10B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A10BC"))) PPC_WEAK_FUNC(sub_825A10BC);
PPC_FUNC_IMPL(__imp__sub_825A10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A10C0"))) PPC_WEAK_FUNC(sub_825A10C0);
PPC_FUNC_IMPL(__imp__sub_825A10C0) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x825A10E0;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a1138
	if (cr6.eq) goto loc_825A1138;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1138
	if (cr6.eq) goto loc_825A1138;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825a1138
	if (cr6.lt) goto loc_825A1138;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825a1138
	if (cr6.gt) goto loc_825A1138;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x825A1124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_825A1138:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825A1150"))) PPC_WEAK_FUNC(sub_825A1150);
PPC_FUNC_IMPL(__imp__sub_825A1150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A1158;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,60(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r29,0
	ctx.r29.s64 = 0;
	// divdu r28,r5,r11
	ctx.r28.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// addis r31,r27,5
	ctx.r31.s64 = ctx.r27.s64 + 327680;
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(ctx.r28.u64, 0, xer);
	// addi r31,r31,2320
	ctx.r31.s64 = ctx.r31.s64 + 2320;
	// ble cr6,0x825a1200
	if (!cr6.gt) goto loc_825A1200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_825A1180:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373fb50
	ctx.lr = 0x825A118C;
	sub_8373FB50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x825A11A4;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a11e8
	if (cr6.eq) goto loc_825A11E8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a11e8
	if (cr6.eq) goto loc_825A11E8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825a11e8
	if (cr6.lt) goto loc_825A11E8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825a11e8
	if (cr6.gt) goto loc_825A11E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x825A11E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A11E8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// blt cr6,0x825a1180
	if (cr6.lt) goto loc_825A1180;
loc_825A1200:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311ca18
	ctx.lr = 0x825A1208;
	sub_8311CA18(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1210"))) PPC_WEAK_FUNC(sub_825A1210);
PPC_FUNC_IMPL(__imp__sub_825A1210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x825A1218;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r21,48(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rldicl r20,r5,60,4
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpldi cr6,r20,0
	cr6.compare<uint64_t>(ctx.r20.u64, 0, xer);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// ble cr6,0x825a18c4
	if (!cr6.gt) goto loc_825A18C4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f29,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f29.f64 = double(temp.f32);
	// li r19,-1
	ctx.r19.s64 = -1;
	// lfs f30,31192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31192);
	ctx.f30.f64 = double(temp.f32);
	// ori r23,r8,65535
	ctx.r23.u64 = ctx.r8.u64 | 65535;
	// lfs f31,21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21700);
	ctx.f31.f64 = double(temp.f32);
loc_825A1270:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
loc_825A1288:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x8311c708
	ctx.lr = 0x825A1294;
	sub_8311C708(ctx, base);
	// clrlwi r4,r3,14
	ctx.r4.u64 = ctx.r3.u32 & 0x3FFFF;
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// ble cr6,0x825a12a4
	if (!cr6.gt) goto loc_825A12A4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_825A12A4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x825A12AC;
	sub_8311BDF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a12dc
	if (cr6.eq) goto loc_825A12DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r24,r24,1
	ctx.r24.u64 = ctx.r24.u64 | 1;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x8311c6c0
	ctx.lr = 0x825A12CC;
	sub_8311C6C0(ctx, base);
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a12e0
	if (cr6.eq) goto loc_825A12E0;
loc_825A12DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825A12E0:
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a12f4
	if (cr6.eq) goto loc_825A12F4;
	// rlwinm r24,r24,0,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
loc_825A12F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1350
	if (!cr6.eq) goto loc_825A1350;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// beq cr6,0x825a1330
	if (cr6.eq) goto loc_825A1330;
loc_825A1310:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x825a132c
	if (cr6.eq) goto loc_825A132C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x825a1310
	if (!cr6.eq) goto loc_825A1310;
	// b 0x825a1330
	goto loc_825A1330;
loc_825A132C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825A1330:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1350
	if (!cr6.eq) goto loc_825A1350;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ab5f20
	ctx.lr = 0x825A1348;
	sub_82AB5F20(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_825A1350:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// blt cr6,0x825a1288
	if (cr6.lt) goto loc_825A1288;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// beq cr6,0x825a1894
	if (cr6.eq) goto loc_825A1894;
loc_825A1368:
	// lbz r31,2(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// ble cr6,0x825a137c
	if (!cr6.gt) goto loc_825A137C;
	// li r31,4
	ctx.r31.s64 = 4;
loc_825A137C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x825a174c
	if (cr6.lt) goto loc_825A174C;
	// addi r30,r31,-3
	ctx.r30.s64 = ctx.r31.s64 + -3;
	// addi r11,r9,813
	ctx.r11.s64 = ctx.r9.s64 + 813;
	// addi r10,r28,5
	ctx.r10.s64 = ctx.r28.s64 + 5;
loc_825A1398:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825a13e0
	if (!cr6.lt) goto loc_825A13E0;
	// lwz r8,796(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 796);
	// rlwinm r7,r8,23,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a13e0
	if (cr6.eq) goto loc_825A13E0;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// bge cr6,0x825a13e0
	if (!cr6.lt) goto loc_825A13E0;
	// lwz r3,788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// rotlwi r18,r5,4
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// or r3,r18,r3
	ctx.r3.u64 = ctx.r18.u64 | ctx.r3.u64;
	// stb r3,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r3.u8);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
loc_825A13E0:
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x825a148c
	if (!cr6.lt) goto loc_825A148C;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r3,-1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lfd f13,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f0,240(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmadds f2,f5,f30,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f1,f4,f30,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f0,f3,f30,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// fctidz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// bge cr6,0x825a148c
	if (!cr6.lt) goto loc_825A148C;
	// lwz r3,788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stb r3,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r3.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
loc_825A148C:
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x825a14dc
	if (!cr6.lt) goto loc_825A14DC;
	// lwz r7,796(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 796);
	// rlwinm r6,r7,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a14dc
	if (cr6.eq) goto loc_825A14DC;
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// bge cr6,0x825a14dc
	if (!cr6.lt) goto loc_825A14DC;
	// lwz r18,788(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// rotlwi r17,r3,4
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// or r18,r17,r18
	ctx.r18.u64 = ctx.r17.u64 | ctx.r18.u64;
	// stb r18,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r18.u8);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
loc_825A14DC:
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bge cr6,0x825a1588
	if (!cr6.lt) goto loc_825A1588;
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f12,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f9,200(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f0,216(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f4,f7,f30,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f0,f3,f30,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f13,f2,f30,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fctidz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bge cr6,0x825a1588
	if (!cr6.lt) goto loc_825A1588;
	// lwz r5,788(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stb r5,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r5.u8);
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
loc_825A1588:
	// rotlwi r5,r3,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825a1638
	if (!cr6.lt) goto loc_825A1638;
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r6,7(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r3,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r3.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f3,f30,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fmadds f1,f4,f30,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f29.f64));
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fmadds f2,f5,f30,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fctidz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lbz r6,95(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bge cr6,0x825a1638
	if (!cr6.lt) goto loc_825A1638;
	// lwz r3,788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stb r3,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r3.u8);
	// stb r6,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
loc_825A1638:
	// addi r8,r4,3
	ctx.r8.s64 = ctx.r4.s64 + 3;
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x825a1688
	if (!cr6.lt) goto loc_825A1688;
	// lwz r7,796(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 796);
	// rlwinm r6,r7,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a1688
	if (cr6.eq) goto loc_825A1688;
	// lbz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// lbz r6,9(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// bge cr6,0x825a1688
	if (!cr6.lt) goto loc_825A1688;
	// lwz r18,788(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// rotlwi r17,r3,4
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// or r18,r17,r18
	ctx.r18.u64 = ctx.r17.u64 | ctx.r18.u64;
	// stb r18,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r18.u8);
	// stb r5,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r5.u8);
	// stb r6,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r6.u8);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
loc_825A1688:
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bge cr6,0x825a1734
	if (!cr6.lt) goto loc_825A1734;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r5,9(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmadds f13,f2,f30,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// fmadds f4,f7,f30,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f0,f3,f30,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fctidz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bge cr6,0x825a1734
	if (!cr6.lt) goto loc_825A1734;
	// lwz r5,788(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stb r5,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r5.u8);
	// stb r6,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r6.u8);
	// stb r7,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
loc_825A1734:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rotlwi r5,r3,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r4,r30
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, xer);
	// blt cr6,0x825a1398
	if (cr6.lt) goto loc_825A1398;
loc_825A174C:
	// cmpw cr6,r4,r31
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, xer);
	// bge cr6,0x825a1888
	if (!cr6.lt) goto loc_825A1888;
	// addi r11,r4,271
	ctx.r11.s64 = ctx.r4.s64 + 271;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_825A177C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825a17c4
	if (!cr6.lt) goto loc_825A17C4;
	// lwz r8,796(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 796);
	// rlwinm r7,r8,23,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a17c4
	if (cr6.eq) goto loc_825A17C4;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// bge cr6,0x825a17c4
	if (!cr6.lt) goto loc_825A17C4;
	// lwz r3,788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// rotlwi r31,r5,4
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stb r3,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r3.u8);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
loc_825A17C4:
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x825a1874
	if (!cr6.lt) goto loc_825A1874;
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// lbz r3,-1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r3,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r3.u64);
	// lfd f9,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f0,192(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f2,f30,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fmadds f4,f7,f30,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f29.f64));
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fmadds f0,f3,f30,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fctidz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lbz r6,95(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bge cr6,0x825a1874
	if (!cr6.lt) goto loc_825A1874;
	// lwz r3,788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stb r3,791(r9)
	PPC_STORE_U8(ctx.r9.u32 + 791, ctx.r3.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
loc_825A1874:
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x825a177c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A177C;
loc_825A1888:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x825a1368
	if (!cr6.eq) goto loc_825A1368;
loc_825A1894:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825a18a4
	if (cr6.eq) goto loc_825A18A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x825A18A4;
	sub_82416268(ctx, base);
loc_825A18A4:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// cmpld cr6,r11,r20
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r20.u64, xer);
	// blt cr6,0x825a1270
	if (cr6.lt) goto loc_825A1270;
loc_825A18C4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A18D8"))) PPC_WEAK_FUNC(sub_825A18D8);
PPC_FUNC_IMPL(__imp__sub_825A18D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825A18E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x825a18fc
	if (!cr6.eq) goto loc_825A18FC;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// beq cr6,0x825a1914
	if (cr6.eq) goto loc_825A1914;
loc_825A18FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x825a18e0
	if (cr6.lt) goto loc_825A18E0;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_825A1914:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A191C"))) PPC_WEAK_FUNC(sub_825A191C);
PPC_FUNC_IMPL(__imp__sub_825A191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1920"))) PPC_WEAK_FUNC(sub_825A1920);
PPC_FUNC_IMPL(__imp__sub_825A1920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x825a1948
	if (cr6.lt) goto loc_825A1948;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_825A1948:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x825a197c
	if (cr6.eq) goto loc_825A197C;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// blr 
	return;
loc_825A197C:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1998"))) PPC_WEAK_FUNC(sub_825A1998);
PPC_FUNC_IMPL(__imp__sub_825A1998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825A19A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// divdu r14,r5,r11
	ctx.r14.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// bl 0x8310e000
	ctx.lr = 0x825A19D8;
	sub_8310E000(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825a19fc
	if (cr6.eq) goto loc_825A19FC;
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x825A19F4;
	sub_835977D8(ctx, base);
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825A19FC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpldi cr6,r14,0
	cr6.compare<uint64_t>(ctx.r14.u64, 0, xer);
	// lwz r20,60(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x825a1d80
	if (!cr6.gt) goto loc_825A1D80;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r19,r11,65535
	ctx.r19.u64 = ctx.r11.u64 | 65535;
loc_825A1A18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c6c0
	ctx.lr = 0x825A1A28;
	sub_8311C6C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c738
	ctx.lr = 0x825A1A34;
	sub_8311C738(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r11
	ctx.r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// ble cr6,0x825a1a5c
	if (!cr6.gt) goto loc_825A1A5C;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_825A1A5C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311bdf0
	ctx.lr = 0x825A1A68;
	sub_8311BDF0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1a8c
	if (cr6.eq) goto loc_825A1A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r17,r17,1
	ctx.r17.u64 = ctx.r17.u64 | 1;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x825a1a90
	if (cr6.eq) goto loc_825A1A90;
loc_825A1A8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825A1A90:
	// clrlwi r10,r17,31
	ctx.r10.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a1aa4
	if (cr6.eq) goto loc_825A1AA4;
	// rlwinm r17,r17,0,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
loc_825A1AA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1d6c
	if (!cr6.eq) goto loc_825A1D6C;
	// clrlwi r23,r29,24
	ctx.r23.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x825a1af8
	if (!cr6.eq) goto loc_825A1AF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplw cr6,r16,r18
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r18.u32, xer);
	// beq cr6,0x825a1aec
	if (cr6.eq) goto loc_825A1AEC;
loc_825A1ACC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// beq cr6,0x825a1ae8
	if (cr6.eq) goto loc_825A1AE8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// bne cr6,0x825a1acc
	if (!cr6.eq) goto loc_825A1ACC;
	// b 0x825a1aec
	goto loc_825A1AEC;
loc_825A1AE8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825A1AEC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1d6c
	if (!cr6.eq) goto loc_825A1D6C;
loc_825A1AF8:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r26,r21,1209
	ctx.r26.s64 = ctx.r21.s64 + 1209;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a1d04
	if (cr6.eq) goto loc_825A1D04;
	// rlwinm r25,r27,7,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// addi r24,r30,5
	ctx.r24.s64 = ctx.r30.s64 + 5;
loc_825A1B14:
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r31,r11,28
	ctx.r31.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bne cr6,0x825a1b3c
	if (!cr6.eq) goto loc_825A1B3C;
	// li r27,7
	ctx.r27.s64 = 7;
loc_825A1B3C:
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_825A1B48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x825a1b78
	if (!cr6.eq) goto loc_825A1B78;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// cmpw cr6,r7,r29
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, xer);
	// bne cr6,0x825a1b78
	if (!cr6.eq) goto loc_825A1B78;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x825a1c0c
	if (cr6.eq) goto loc_825A1C0C;
loc_825A1B78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x825a1b48
	if (cr6.lt) goto loc_825A1B48;
	// li r11,10
	ctx.r11.s64 = 10;
loc_825A1B8C:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(ctx.r28.u32, 10, xer);
	// bne cr6,0x825a1ba4
	if (!cr6.eq) goto loc_825A1BA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a18d8
	ctx.lr = 0x825A1BA0;
	sub_825A18D8(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
loc_825A1BA4:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A1BB4:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x825a1bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A1BB4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// clrlwi r11,r29,25
	ctx.r11.u64 = ctx.r29.u32 & 0x7F;
	// clrlwi r10,r31,25
	ctx.r10.u64 = ctx.r31.u32 & 0x7F;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8311c928
	ctx.lr = 0x825A1BE4;
	sub_8311C928(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x825a1c30
	if (cr6.eq) goto loc_825A1C30;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1cf0
	if (!cr6.eq) goto loc_825A1CF0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x825a1c14
	if (cr6.lt) goto loc_825A1C14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825a1c24
	goto loc_825A1C24;
loc_825A1C0C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x825a1b8c
	goto loc_825A1B8C;
loc_825A1C14:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825A1C24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a1cf0
	if (!cr6.eq) goto loc_825A1CF0;
loc_825A1C30:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x825a1c58
	if (!cr6.lt) goto loc_825A1C58;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwimi r31,r27,4,0,27
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 4) & 0xFFFFFFF0) | (ctx.r31.u64 & 0xFFFFFFFF0000000F);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// rlwimi r9,r29,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_825A1C58:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x825a1ccc
	if (!cr6.lt) goto loc_825A1CCC;
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// bge cr6,0x825a1c84
	if (!cr6.lt) goto loc_825A1C84;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
loc_825A1C84:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x825a1ccc
	if (!cr6.lt) goto loc_825A1CCC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,101(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// stb r7,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r7.u8);
loc_825A1CCC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x825a1cf0
	if (!cr6.eq) goto loc_825A1CF0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x825a1cf0
	if (!cr6.lt) goto loc_825A1CF0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_825A1CF0:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, xer);
	// blt cr6,0x825a1b14
	if (cr6.lt) goto loc_825A1B14;
loc_825A1D04:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x825a1d6c
	if (cr6.eq) goto loc_825A1D6C;
	// lwz r11,796(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a1d6c
	if (!cr6.eq) goto loc_825A1D6C;
	// lwz r11,788(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 788);
	// lbz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r8,3(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 3);
	// lbz r7,2(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2);
	// ori r6,r9,16
	ctx.r6.u64 = ctx.r9.u64 | 16;
	// stb r6,791(r21)
	PPC_STORE_U8(ctx.r21.u32 + 791, ctx.r6.u8);
	// stb r10,814(r21)
	PPC_STORE_U8(ctx.r21.u32 + 814, ctx.r10.u8);
	// stb r8,813(r21)
	PPC_STORE_U8(ctx.r21.u32 + 813, ctx.r8.u8);
	// stb r7,812(r21)
	PPC_STORE_U8(ctx.r21.u32 + 812, ctx.r7.u8);
	// lbz r5,7(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 7);
	// lbz r4,6(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6);
	// lbz r3,5(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// lwz r11,788(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 788);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,791(r21)
	PPC_STORE_U8(ctx.r21.u32 + 791, ctx.r9.u8);
	// stb r5,817(r21)
	PPC_STORE_U8(ctx.r21.u32 + 817, ctx.r5.u8);
	// stb r4,816(r21)
	PPC_STORE_U8(ctx.r21.u32 + 816, ctx.r4.u8);
	// stb r3,815(r21)
	PPC_STORE_U8(ctx.r21.u32 + 815, ctx.r3.u8);
loc_825A1D6C:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r30,r30,85
	ctx.r30.s64 = ctx.r30.s64 + 85;
	// extsw r11,r15
	ctx.r11.s64 = ctx.r15.s32;
	// cmpld cr6,r11,r14
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r14.u64, xer);
	// blt cr6,0x825a1a18
	if (cr6.lt) goto loc_825A1A18;
loc_825A1D80:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x825a1d9c
	if (cr6.eq) goto loc_825A1D9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x825A1D9C;
	sub_825952B8(ctx, base);
loc_825A1D9C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1DA4"))) PPC_WEAK_FUNC(sub_825A1DA4);
PPC_FUNC_IMPL(__imp__sub_825A1DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1DA8"))) PPC_WEAK_FUNC(sub_825A1DA8);
PPC_FUNC_IMPL(__imp__sub_825A1DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A1DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x825a1ddc
	if (!cr6.lt) goto loc_825A1DDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x825A1DDC;
	sub_831CC188(ctx, base);
loc_825A1DDC:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x825a1dec
	if (!cr6.lt) goto loc_825A1DEC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_825A1DEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x825a1e08
	if (cr6.gt) goto loc_825A1E08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x825A1E08;
	sub_831CC150(ctx, base);
loc_825A1E08:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825a1ea8
	if (cr6.eq) goto loc_825A1EA8;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ca68
	ctx.lr = 0x825A1E24;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a1ea8
	if (cr6.eq) goto loc_825A1EA8;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1e44
	if (cr6.lt) goto loc_825A1E44;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825a1e48
	goto loc_825A1E48;
loc_825A1E44:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_825A1E48:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1e5c
	if (cr6.lt) goto loc_825A1E5C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825a1e60
	goto loc_825A1E60;
loc_825A1E5C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_825A1E60:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A1E74;
	sub_831CE980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1e9c
	if (cr6.lt) goto loc_825A1E9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825A1E9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
loc_825A1EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1EB4"))) PPC_WEAK_FUNC(sub_825A1EB4);
PPC_FUNC_IMPL(__imp__sub_825A1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1EB8"))) PPC_WEAK_FUNC(sub_825A1EB8);
PPC_FUNC_IMPL(__imp__sub_825A1EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A1EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a1f20
	if (cr6.eq) goto loc_825A1F20;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825a1eec
	if (cr6.lt) goto loc_825A1EEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825a1ef0
	goto loc_825A1EF0;
loc_825A1EEC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825A1EF0:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x825a1f20
	if (cr6.lt) goto loc_825A1F20;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825a1f08
	if (cr6.lt) goto loc_825A1F08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825a1f0c
	goto loc_825A1F0C;
loc_825A1F08:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825A1F0C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x825a1f24
	if (cr6.gt) goto loc_825A1F24;
loc_825A1F20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A1F24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a1f64
	if (cr6.eq) goto loc_825A1F64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1f44
	if (cr6.lt) goto loc_825A1F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825a1f48
	goto loc_825A1F48;
loc_825A1F44:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825A1F48:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x825A1F5C;
	sub_825A1DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A1F64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x825a1f80
	if (cr6.gt) goto loc_825A1F80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x825A1F80;
	sub_831CC150(ctx, base);
loc_825A1F80:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a2008
	if (cr6.eq) goto loc_825A2008;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ca68
	ctx.lr = 0x825A1F9C;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2008
	if (cr6.eq) goto loc_825A2008;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1fbc
	if (cr6.lt) goto loc_825A1FBC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825a1fc0
	goto loc_825A1FC0;
loc_825A1FBC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_825A1FC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A1FD4;
	sub_831CE980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a1ffc
	if (cr6.lt) goto loc_825A1FFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A1FFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_825A2008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2014"))) PPC_WEAK_FUNC(sub_825A2014);
PPC_FUNC_IMPL(__imp__sub_825A2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2018"))) PPC_WEAK_FUNC(sub_825A2018);
PPC_FUNC_IMPL(__imp__sub_825A2018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A2020;
	__savegprlr_29(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831cdcf0
	ctx.lr = 0x825A203C;
	sub_831CDCF0(ctx, base);
	// bl 0x8310d878
	ctx.lr = 0x825A2040;
	sub_8310D878(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_825A2058:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a2058
	if (!cr6.eq) goto loc_825A2058;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x825A207C;
	sub_8259CC28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r31,r10,31432
	ctx.r31.s64 = ctx.r10.s64 + 31432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x825a1eb8
	ctx.lr = 0x825A2094;
	sub_825A1EB8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r5,r31,-32
	ctx.r5.s64 = ctx.r31.s64 + -32;
	// addi r30,r11,-20144
	ctx.r30.s64 = ctx.r11.s64 + -20144;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x825A20AC;
	sub_831CE7D8(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x831ce7d8
	ctx.lr = 0x825A20BC;
	sub_831CE7D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x831ce7d8
	ctx.lr = 0x825A20CC;
	sub_831CE7D8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x825a20e0
	if (!cr6.lt) goto loc_825A20E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_825A20E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8310e198
	ctx.lr = 0x825A20F0;
	sub_8310E198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a221c
	if (cr6.eq) goto loc_825A221C;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x825a2118
	if (cr6.eq) goto loc_825A2118;
loc_825A2108:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x825A2110;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A2118:
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// lbz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// lbz r11,125(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// lbz r11,131(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x831ce980
	ctx.lr = 0x825A2164;
	sub_831CE980(ctx, base);
	// lbz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r29,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r29.u8);
	// cmplwi cr6,r9,91
	cr6.compare<uint32_t>(ctx.r9.u32, 91, xer);
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// addi r9,r1,133
	ctx.r9.s64 = ctx.r1.s64 + 133;
	// bne cr6,0x825a2108
	if (!cr6.eq) goto loc_825A2108;
	// lbz r10,133(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a2108
	if (cr6.eq) goto loc_825A2108;
loc_825A218C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,93
	cr6.compare<int32_t>(ctx.r8.s32, 93, xer);
	// beq cr6,0x825a21bc
	if (cr6.eq) goto loc_825A21BC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x825a218c
	if (!cr6.eq) goto loc_825A218C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x825A21B4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A21BC:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a2108
	if (cr6.eq) goto loc_825A2108;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmplwi cr6,r8,91
	cr6.compare<uint32_t>(ctx.r8.u32, 91, xer);
	// bne cr6,0x825a221c
	if (!cr6.eq) goto loc_825A221C;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a221c
	if (cr6.eq) goto loc_825A221C;
	// addi r8,r30,256
	ctx.r8.s64 = ctx.r30.s64 + 256;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_825A21F4:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,93
	cr6.compare<int32_t>(ctx.r9.s32, 93, xer);
	// beq cr6,0x825a2218
	if (cr6.eq) goto loc_825A2218;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825a21f4
	if (!cr6.eq) goto loc_825A21F4;
	// b 0x825a221c
	goto loc_825A221C;
loc_825A2218:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
loc_825A221C:
	// bl 0x830ff290
	ctx.lr = 0x825A2220;
	sub_830FF290(ctx, base);
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825a2248
	if (cr6.lt) goto loc_825A2248;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A2248;
	sub_825952B8(ctx, base);
loc_825A2248:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2250"))) PPC_WEAK_FUNC(sub_825A2250);
PPC_FUNC_IMPL(__imp__sub_825A2250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a226c
	if (!cr6.eq) goto loc_825A226C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_825A226C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a228c
	if (!cr6.eq) goto loc_825A228C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825a2290
	if (cr6.eq) goto loc_825A2290;
loc_825A228C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A2290:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2298"))) PPC_WEAK_FUNC(sub_825A2298);
PPC_FUNC_IMPL(__imp__sub_825A2298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a22c0
	if (!cr6.eq) goto loc_825A22C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
loc_825A22C0:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a22e0
	if (!cr6.eq) goto loc_825A22E0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825a22e4
	if (cr6.eq) goto loc_825A22E4;
loc_825A22E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A22E4:
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

__attribute__((alias("__imp__sub_825A22F8"))) PPC_WEAK_FUNC(sub_825A22F8);
PPC_FUNC_IMPL(__imp__sub_825A22F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825a2314
	if (cr6.eq) goto loc_825A2314;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825a2314
	if (cr6.eq) goto loc_825A2314;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825A2314:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2320"))) PPC_WEAK_FUNC(sub_825A2320);
PPC_FUNC_IMPL(__imp__sub_825A2320) {
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
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825a2354
	if (cr6.eq) goto loc_825A2354;
	// bl 0x82416268
	ctx.lr = 0x825A2350;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A2354:
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

__attribute__((alias("__imp__sub_825A2368"))) PPC_WEAK_FUNC(sub_825A2368);
PPC_FUNC_IMPL(__imp__sub_825A2368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lfs f13,-25156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
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
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, ctx.r11.u8);
	// stb r11,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A23F8"))) PPC_WEAK_FUNC(sub_825A23F8);
PPC_FUNC_IMPL(__imp__sub_825A23F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A2400;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 3;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2424:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a2424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2424;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2440:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a2440
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2440;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,13
	ctx.r11.s64 = ctx.r30.s64 + 13;
	// addi r10,r31,13
	ctx.r10.s64 = ctx.r31.s64 + 13;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A245C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a245c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A245C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2478:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a2478
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2478;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,25
	ctx.r11.s64 = ctx.r30.s64 + 25;
	// addi r10,r31,25
	ctx.r10.s64 = ctx.r31.s64 + 25;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2494:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a2494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2494;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A24B0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825a24b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A24B0;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A24CC:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a24cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A24CC;
	// li r10,90
	ctx.r10.s64 = 90;
	// addi r11,r31,436
	ctx.r11.s64 = ctx.r31.s64 + 436;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A24E8:
	// lhzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825a24e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A24E8;
	// li r10,90
	ctx.r10.s64 = 90;
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A2504:
	// lhzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825a2504
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2504;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r30,792
	ctx.r10.s64 = ctx.r30.s64 + 792;
	// addi r11,r31,800
	ctx.r11.s64 = ctx.r31.s64 + 800;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2524:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f11,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f10,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f9,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f8,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f7,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f6,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,84(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f5,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f4,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f3,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfsu f0,108(r10)
	ea = 108 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x825a2524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2524;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r31,1984
	ctx.r11.s64 = ctx.r31.s64 + 1984;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A2610:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a2610
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2610;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r31,2116
	ctx.r11.s64 = ctx.r31.s64 + 2116;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A262C:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a262c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A262C;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r31,2248
	ctx.r11.s64 = ctx.r31.s64 + 2248;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A2648:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a2648
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2648;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r30,2640
	ctx.r10.s64 = ctx.r30.s64 + 2640;
	// addi r11,r31,2648
	ctx.r11.s64 = ctx.r31.s64 + 2648;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A2668:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f11,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f10,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f9,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f8,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f7,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f6,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,84(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f5,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f4,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f3,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfsu f0,108(r10)
	ea = 108 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x825a2668
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2668;
	// lwz r11,3832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3832);
	// addi r29,r31,3844
	ctx.r29.s64 = ctx.r31.s64 + 3844;
	// li r28,12
	ctx.r28.s64 = 12;
	// stw r11,3832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3832, ctx.r11.u32);
	// lwz r10,3836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3836);
	// stw r10,3836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3836, ctx.r10.u32);
	// lwz r9,3840(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// stw r9,3840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3840, ctx.r9.u32);
loc_825A2768:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A2778;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// bne 0x825a2768
	if (!cr0.eq) goto loc_825A2768;
	// lwz r11,4468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// addi r4,r30,4526
	ctx.r4.s64 = ctx.r30.s64 + 4526;
	// addi r3,r31,4526
	ctx.r3.s64 = ctx.r31.s64 + 4526;
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r11,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r11.u32);
	// lwz r10,4472(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// stw r10,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r10.u32);
	// lwz r9,4476(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4476);
	// stw r9,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r9.u32);
	// lwz r8,4480(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4480);
	// stw r8,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r8.u32);
	// lwz r7,4484(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4484);
	// stw r7,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r7.u32);
	// lwz r6,4488(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4488);
	// stw r6,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r6.u32);
	// lwz r11,4492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4492);
	// stw r11,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r11.u32);
	// lwz r10,4496(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4496);
	// stw r10,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r10.u32);
	// lwz r9,4500(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4500);
	// stw r9,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r9.u32);
	// lwz r8,4504(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4504);
	// stw r8,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r8.u32);
	// lwz r7,4508(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4508);
	// stw r7,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r7.u32);
	// lbz r6,4512(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4512);
	// stb r6,4512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4512, ctx.r6.u8);
	// lbz r11,4513(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4513);
	// stb r11,4513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4513, ctx.r11.u8);
	// lbz r10,4514(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4514);
	// stb r10,4514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4514, ctx.r10.u8);
	// lbz r9,4515(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4515);
	// stb r9,4515(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4515, ctx.r9.u8);
	// lbz r8,4516(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4516);
	// stb r8,4516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4516, ctx.r8.u8);
	// lbz r7,4517(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4517);
	// stb r7,4517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4517, ctx.r7.u8);
	// lbz r6,4518(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4518);
	// stb r6,4518(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4518, ctx.r6.u8);
	// lbz r11,4519(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4519);
	// stb r11,4519(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4519, ctx.r11.u8);
	// lwz r10,4520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// lwz r9,4520(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4520);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r10.u32);
	// lwz r7,4520(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4520);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r8.u32);
	// lbz r6,4524(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4524);
	// stb r6,4524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4524, ctx.r6.u8);
	// lbz r11,4525(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4525);
	// stb r11,4525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4525, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x825A285C;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2868"))) PPC_WEAK_FUNC(sub_825A2868);
PPC_FUNC_IMPL(__imp__sub_825A2868) {
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
	// bl 0x830fe928
	ctx.lr = 0x825A2878;
	sub_830FE928(ctx, base);
	// bl 0x830fe938
	ctx.lr = 0x825A287C;
	sub_830FE938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a289c
	if (cr6.eq) goto loc_825A289C;
loc_825A2888:
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
loc_825A289C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-19752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a28bc
	if (cr6.eq) goto loc_825A28BC;
	// bl 0x8379e6b8
	ctx.lr = 0x825A28B0;
	sub_8379E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a2888
	if (!cr6.eq) goto loc_825A2888;
loc_825A28BC:
	// bl 0x837fc810
	ctx.lr = 0x825A28C0;
	sub_837FC810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2888
	if (cr6.eq) goto loc_825A2888;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-19692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a28f0
	if (cr6.eq) goto loc_825A28F0;
	// bl 0x825ad720
	ctx.lr = 0x825A28E0;
	sub_825AD720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a28f4
	if (cr6.eq) goto loc_825A28F4;
loc_825A28F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A28F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2904"))) PPC_WEAK_FUNC(sub_825A2904);
PPC_FUNC_IMPL(__imp__sub_825A2904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2908"))) PPC_WEAK_FUNC(sub_825A2908);
PPC_FUNC_IMPL(__imp__sub_825A2908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A2910;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,-19754
	ctx.r29.s64 = ctx.r11.s64 + -19754;
	// lbz r11,-1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2a08
	if (cr6.eq) goto loc_825A2A08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-1(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1, ctx.r11.u8);
	// bl 0x827b6068
	ctx.lr = 0x825A2938;
	sub_827B6068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2948
	if (cr6.eq) goto loc_825A2948;
	// bl 0x827b6068
	ctx.lr = 0x825A2944;
	sub_827B6068(ctx, base);
	// bl 0x827b6578
	ctx.lr = 0x825A2948;
	sub_827B6578(ctx, base);
loc_825A2948:
	// bl 0x827b5600
	ctx.lr = 0x825A294C;
	sub_827B5600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a295c
	if (cr6.eq) goto loc_825A295C;
	// bl 0x827b5600
	ctx.lr = 0x825A2958;
	sub_827B5600(ctx, base);
	// bl 0x827b5cd8
	ctx.lr = 0x825A295C;
	sub_827B5CD8(ctx, base);
loc_825A295C:
	// bl 0x827cb078
	ctx.lr = 0x825A2960;
	sub_827CB078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2970
	if (cr6.eq) goto loc_825A2970;
	// bl 0x827cb078
	ctx.lr = 0x825A296C;
	sub_827CB078(ctx, base);
	// bl 0x827c93b8
	ctx.lr = 0x825A2970;
	sub_827C93B8(ctx, base);
loc_825A2970:
	// bl 0x827b4cc0
	ctx.lr = 0x825A2974;
	sub_827B4CC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2984
	if (cr6.eq) goto loc_825A2984;
	// bl 0x827b4cc0
	ctx.lr = 0x825A2980;
	sub_827B4CC0(ctx, base);
	// bl 0x827b5200
	ctx.lr = 0x825A2984;
	sub_827B5200(ctx, base);
loc_825A2984:
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lwz r3,-21744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a29bc
	if (cr6.eq) goto loc_825A29BC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r11,r11,22928
	ctx.r11.s64 = ctx.r11.s64 + 22928;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// b 0x825a29ac
	goto loc_825A29AC;
loc_825A29A8:
	// lwz r3,-21744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21744);
loc_825A29AC:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83746a30
	ctx.lr = 0x825A29B4;
	sub_83746A30(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x825a29a8
	if (!cr0.eq) goto loc_825A29A8;
loc_825A29BC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a29d0
	if (cr6.eq) goto loc_825A29D0;
	// bl 0x83746f28
	ctx.lr = 0x825A29D0;
	sub_83746F28(ctx, base);
loc_825A29D0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-12916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a29e4
	if (cr6.eq) goto loc_825A29E4;
	// bl 0x827a89a0
	ctx.lr = 0x825A29E4;
	sub_827A89A0(ctx, base);
loc_825A29E4:
	// bl 0x8378cba8
	ctx.lr = 0x825A29E8;
	sub_8378CBA8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x825A29F8;
	sub_8378D268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r11.u8);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
loc_825A2A08:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-19692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2a1c
	if (cr6.eq) goto loc_825A2A1C;
	// bl 0x825ad990
	ctx.lr = 0x825A2A1C;
	sub_825AD990(ctx, base);
loc_825A2A1C:
	// bl 0x837f6df8
	ctx.lr = 0x825A2A20;
	sub_837F6DF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2A28"))) PPC_WEAK_FUNC(sub_825A2A28);
PPC_FUNC_IMPL(__imp__sub_825A2A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A2A30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
loc_825A2A40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825A2A44:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2a5c
	if (cr6.eq) goto loc_825A2A5C;
	// bl 0x829114c8
	ctx.lr = 0x825A2A5C;
	sub_829114C8(ctx, base);
loc_825A2A5C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// and r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x825a2a44
	if (cr6.lt) goto loc_825A2A44;
	// addi r30,r30,11
	ctx.r30.s64 = ctx.r30.s64 + 11;
	// cmpwi cr6,r30,24
	cr6.compare<int32_t>(ctx.r30.s32, 24, xer);
	// blt cr6,0x825a2a40
	if (cr6.lt) goto loc_825A2A40;
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
	ctx.lr = 0x825A2A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r8,-31756
	ctx.r3.s64 = ctx.r8.s64 + -31756;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x825A2AAC;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825a2ab8
	if (!cr6.eq) goto loc_825A2AB8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_825A2AB8:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
loc_825A2AC4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a2ad4
	if (cr6.eq) goto loc_825A2AD4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x825a2af0
	if (cr6.gt) goto loc_825A2AF0;
loc_825A2AD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2ae4
	if (cr6.eq) goto loc_825A2AE4;
	// bl 0x829114c8
	ctx.lr = 0x825A2AE4;
	sub_829114C8(ctx, base);
loc_825A2AE4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// and r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_825A2AF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x825a2ac4
	if (cr6.lt) goto loc_825A2AC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2B0C"))) PPC_WEAK_FUNC(sub_825A2B0C);
PPC_FUNC_IMPL(__imp__sub_825A2B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2B10"))) PPC_WEAK_FUNC(sub_825A2B10);
PPC_FUNC_IMPL(__imp__sub_825A2B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A2B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a2b4c
	if (cr6.eq) goto loc_825A2B4C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2B4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A2B4C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825a2b6c
	if (cr6.eq) goto loc_825A2B6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2B6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A2B6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825a2b8c
	if (cr6.eq) goto loc_825A2B8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A2B8C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a2ba0
	if (cr6.eq) goto loc_825A2BA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825A2BA0;
	sub_825AE6C0(ctx, base);
loc_825A2BA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2BA8"))) PPC_WEAK_FUNC(sub_825A2BA8);
PPC_FUNC_IMPL(__imp__sub_825A2BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A2BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,2
	ctx.r30.s64 = 2;
loc_825A2BC0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825A2BC4:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A2BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x825a2bc4
	if (cr6.lt) goto loc_825A2BC4;
	// addi r30,r30,11
	ctx.r30.s64 = ctx.r30.s64 + 11;
	// cmpwi cr6,r30,24
	cr6.compare<int32_t>(ctx.r30.s32, 24, xer);
	// blt cr6,0x825a2bc0
	if (cr6.lt) goto loc_825A2BC0;
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
	// li r30,3
	ctx.r30.s64 = 3;
loc_825A2C04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2c28
	if (cr6.eq) goto loc_825A2C28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2C28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A2C28:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825a2c04
	if (!cr0.eq) goto loc_825A2C04;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2C3C"))) PPC_WEAK_FUNC(sub_825A2C3C);
PPC_FUNC_IMPL(__imp__sub_825A2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2C40"))) PPC_WEAK_FUNC(sub_825A2C40);
PPC_FUNC_IMPL(__imp__sub_825A2C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A2C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
loc_825A2C54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825A2C58:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A2C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x825a2c58
	if (cr6.lt) goto loc_825A2C58;
	// addi r30,r30,11
	ctx.r30.s64 = ctx.r30.s64 + 11;
	// cmpwi cr6,r30,24
	cr6.compare<int32_t>(ctx.r30.s32, 24, xer);
	// blt cr6,0x825a2c54
	if (cr6.lt) goto loc_825A2C54;
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
	// li r30,3
	ctx.r30.s64 = 3;
loc_825A2C94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2cb4
	if (cr6.eq) goto loc_825A2CB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A2CB4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825a2c94
	if (!cr0.eq) goto loc_825A2C94;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2CC8"))) PPC_WEAK_FUNC(sub_825A2CC8);
PPC_FUNC_IMPL(__imp__sub_825A2CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,1032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A2CDC"))) PPC_WEAK_FUNC(sub_825A2CDC);
PPC_FUNC_IMPL(__imp__sub_825A2CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2CE0"))) PPC_WEAK_FUNC(sub_825A2CE0);
PPC_FUNC_IMPL(__imp__sub_825A2CE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d00
	if (cr6.eq) goto loc_825A2D00;
	// bl 0x83746f28
	ctx.lr = 0x825A2D00;
	sub_83746F28(ctx, base);
loc_825A2D00:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-12916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d14
	if (cr6.eq) goto loc_825A2D14;
	// bl 0x827a89a0
	ctx.lr = 0x825A2D14;
	sub_827A89A0(ctx, base);
loc_825A2D14:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d28
	if (cr6.eq) goto loc_825A2D28;
	// bl 0x83746418
	ctx.lr = 0x825A2D28;
	sub_83746418(ctx, base);
loc_825A2D28:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-12924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d3c
	if (cr6.eq) goto loc_825A2D3C;
	// bl 0x827a7c98
	ctx.lr = 0x825A2D3C;
	sub_827A7C98(ctx, base);
loc_825A2D3C:
	// bl 0x8378b870
	ctx.lr = 0x825A2D40;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d50
	if (cr6.eq) goto loc_825A2D50;
	// bl 0x8378b870
	ctx.lr = 0x825A2D4C;
	sub_8378B870(ctx, base);
	// bl 0x83789f58
	ctx.lr = 0x825A2D50;
	sub_83789F58(ctx, base);
loc_825A2D50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2D60"))) PPC_WEAK_FUNC(sub_825A2D60);
PPC_FUNC_IMPL(__imp__sub_825A2D60) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1040(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1040, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2D68"))) PPC_WEAK_FUNC(sub_825A2D68);
PPC_FUNC_IMPL(__imp__sub_825A2D68) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21744);
	// bl 0x827a7de8
	ctx.lr = 0x825A2D80;
	sub_827A7DE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a2da0
	if (!cr6.eq) goto loc_825A2DA0;
loc_825A2D8C:
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
loc_825A2DA0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-12924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12924);
	// bl 0x827a7de8
	ctx.lr = 0x825A2DAC;
	sub_827A7DE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a2d8c
	if (cr6.eq) goto loc_825A2D8C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x827a8a78
	ctx.lr = 0x825A2DC4;
	sub_827A8A78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a2d8c
	if (cr6.eq) goto loc_825A2D8C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-12916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12916);
	// bl 0x827a8a78
	ctx.lr = 0x825A2DDC;
	sub_827A8A78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_825A2DF8"))) PPC_WEAK_FUNC(sub_825A2DF8);
PPC_FUNC_IMPL(__imp__sub_825A2DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A2E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a2f1c
	if (cr6.eq) goto loc_825A2F1C;
	// lwz r10,5360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5360);
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r7,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lbz r11,252(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 252);
	// beq cr6,0x825a2e5c
	if (cr6.eq) goto loc_825A2E5C;
	// lwz r8,5356(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5356);
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bne cr6,0x825a2e5c
	if (!cr6.eq) goto loc_825A2E5C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
loc_825A2E5C:
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lis r31,-17874
	ctx.r31.s64 = -1171390464;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r29,16(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// ori r31,r31,35747
	ctx.r31.u64 = ctx.r31.u64 | 35747;
	// lwz r11,5356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5356);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mulhwu r8,r5,r31
	ctx.r8.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// rlwinm r4,r8,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mulli r8,r4,11
	ctx.r8.s64 = ctx.r4.s64 * 11;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// blt cr6,0x825a2f04
	if (cr6.lt) goto loc_825A2F04;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x825a2f04
	if (cr6.gt) goto loc_825A2F04;
	// lfs f12,5372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5372);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x825a2f04
	if (!cr6.lt) goto loc_825A2F04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_825A2F04:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r3,r11,3612
	ctx.r3.s64 = ctx.r11.s64 + 3612;
	// bl 0x82a15a10
	ctx.lr = 0x825A2F1C;
	sub_82A15A10(ctx, base);
loc_825A2F1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2F24"))) PPC_WEAK_FUNC(sub_825A2F24);
PPC_FUNC_IMPL(__imp__sub_825A2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2F28"))) PPC_WEAK_FUNC(sub_825A2F28);
PPC_FUNC_IMPL(__imp__sub_825A2F28) {
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
	// bl 0x83746728
	ctx.lr = 0x825A2F38;
	sub_83746728(ctx, base);
	// bl 0x83747548
	ctx.lr = 0x825A2F3C;
	sub_83747548(ctx, base);
	// bl 0x827a8700
	ctx.lr = 0x825A2F40;
	sub_827A8700(ctx, base);
	// bl 0x827a8c18
	ctx.lr = 0x825A2F44;
	sub_827A8C18(ctx, base);
	// bl 0x827cb078
	ctx.lr = 0x825A2F48;
	sub_827CB078(ctx, base);
	// bl 0x827b5ff0
	ctx.lr = 0x825A2F4C;
	sub_827B5FF0(ctx, base);
	// bl 0x827b5590
	ctx.lr = 0x825A2F50;
	sub_827B5590(ctx, base);
	// bl 0x827b5180
	ctx.lr = 0x825A2F54;
	sub_827B5180(ctx, base);
	// bl 0x825b2510
	ctx.lr = 0x825A2F58;
	sub_825B2510(ctx, base);
	// bl 0x82a15f48
	ctx.lr = 0x825A2F5C;
	sub_82A15F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2F6C"))) PPC_WEAK_FUNC(sub_825A2F6C);
PPC_FUNC_IMPL(__imp__sub_825A2F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2F70"))) PPC_WEAK_FUNC(sub_825A2F70);
PPC_FUNC_IMPL(__imp__sub_825A2F70) {
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
	// bl 0x83746658
	ctx.lr = 0x825A2F80;
	sub_83746658(ctx, base);
	// bl 0x827a8790
	ctx.lr = 0x825A2F84;
	sub_827A8790(ctx, base);
	// bl 0x837470c8
	ctx.lr = 0x825A2F88;
	sub_837470C8(ctx, base);
	// bl 0x827a8ca8
	ctx.lr = 0x825A2F8C;
	sub_827A8CA8(ctx, base);
	// bl 0x827b7608
	ctx.lr = 0x825A2F90;
	sub_827B7608(ctx, base);
	// bl 0x827b5de0
	ctx.lr = 0x825A2F94;
	sub_827B5DE0(ctx, base);
	// bl 0x827ccb10
	ctx.lr = 0x825A2F98;
	sub_827CCB10(ctx, base);
	// bl 0x827b54b0
	ctx.lr = 0x825A2F9C;
	sub_827B54B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2FAC"))) PPC_WEAK_FUNC(sub_825A2FAC);
PPC_FUNC_IMPL(__imp__sub_825A2FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2FB0"))) PPC_WEAK_FUNC(sub_825A2FB0);
PPC_FUNC_IMPL(__imp__sub_825A2FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A2FC0:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a2fc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2FC0;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A2FE4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a2fe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A2FE4;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3000:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3000
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3000;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A301C:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a301c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A301C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3038:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3038;
	// lfs f0,228(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,260
	ctx.r9.s64 = ctx.r4.s64 + 260;
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// addi r8,r3,260
	ctx.r8.s64 = ctx.r3.s64 + 260;
	// lfs f12,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lwz r10,240(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// lwz r6,244(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r6,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r6.u32);
	// lfs f11,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,248(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f10,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,252(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f9,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,256(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
loc_825A309C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a309c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A309C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,272
	ctx.r11.s64 = ctx.r3.s64 + 272;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A30B8:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a30b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A30B8;
	// lwz r11,316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A30D4"))) PPC_WEAK_FUNC(sub_825A30D4);
PPC_FUNC_IMPL(__imp__sub_825A30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A30D8"))) PPC_WEAK_FUNC(sub_825A30D8);
PPC_FUNC_IMPL(__imp__sub_825A30D8) {
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
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_825A30F8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825a30f8
	if (!cr0.eq) goto loc_825A30F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825a315c
	if (!cr6.eq) goto loc_825A315C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a315c
	if (cr6.eq) goto loc_825A315C;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A313C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A3154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A315C;
	sub_82595170(ctx, base);
loc_825A315C:
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

__attribute__((alias("__imp__sub_825A3170"))) PPC_WEAK_FUNC(sub_825A3170);
PPC_FUNC_IMPL(__imp__sub_825A3170) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-25132
	ctx.r9.s64 = ctx.r11.s64 + -25132;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825a31e0
	if (cr6.eq) goto loc_825A31E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A31B4;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a31d4
	if (cr6.eq) goto loc_825A31D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A31D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A31D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A31DC;
	sub_82595170(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_825A31E0:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82a59b98
	ctx.lr = 0x825A31E8;
	sub_82A59B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83535be8
	ctx.lr = 0x825A31F0;
	sub_83535BE8(ctx, base);
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

__attribute__((alias("__imp__sub_825A3208"))) PPC_WEAK_FUNC(sub_825A3208);
PPC_FUNC_IMPL(__imp__sub_825A3208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x82a59c60
	sub_82A59C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3210"))) PPC_WEAK_FUNC(sub_825A3210);
PPC_FUNC_IMPL(__imp__sub_825A3210) {
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
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x825a3250
	if (cr6.eq) goto loc_825A3250;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x825ae2e8
	ctx.lr = 0x825A3240;
	sub_825AE2E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825A3250:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A3264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A3278"))) PPC_WEAK_FUNC(sub_825A3278);
PPC_FUNC_IMPL(__imp__sub_825A3278) {
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
	// bl 0x825a3170
	ctx.lr = 0x825A3298;
	sub_825A3170(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a32b8
	if (cr6.eq) goto loc_825A32B8;
	// bl 0x82595188
	ctx.lr = 0x825A32A8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A32B8;
	sub_825952B8(ctx, base);
loc_825A32B8:
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

__attribute__((alias("__imp__sub_825A32D4"))) PPC_WEAK_FUNC(sub_825A32D4);
PPC_FUNC_IMPL(__imp__sub_825A32D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A32D8"))) PPC_WEAK_FUNC(sub_825A32D8);
PPC_FUNC_IMPL(__imp__sub_825A32D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A32E0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce768
	ctx.lr = 0x825A32E8;
	__savefpr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f24,-25092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25092);
	ctx.f24.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f25,-25096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25096);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f26,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f26.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f27,-25100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25100);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,-25104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25104);
	ctx.f28.f64 = double(temp.f32);
	// li r28,31
	ctx.r28.s64 = 31;
	// lfs f29,-25108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25108);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lfs f30,-25112(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25112);
	ctx.f30.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_825A333C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// clrlwi r8,r11,8
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// oris r5,r8,4352
	ctx.r5.u64 = ctx.r8.u64 | 285212672;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// clrlwi r3,r5,8
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFFFF;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// oris r11,r4,5120
	ctx.r11.u64 = ctx.r4.u64 | 335544320;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// oris r9,r6,258
	ctx.r9.u64 = ctx.r6.u64 | 16908288;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// oris r8,r3,2816
	ctx.r8.u64 = ctx.r3.u64 | 184549376;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f26,108(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// bne cr6,0x825a33d0
	if (!cr6.eq) goto loc_825A33D0;
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_825A33D0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a33e0
	if (!cr6.eq) goto loc_825A33E0;
	// stfs f24,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_825A33E0:
	// bl 0x835f6d58
	ctx.lr = 0x825A33E4;
	sub_835F6D58(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x835f81e8
	ctx.lr = 0x825A33F4;
	sub_835F81E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x825a333c
	if (cr6.lt) goto loc_825A333C;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7b4
	ctx.lr = 0x825A340C;
	__restfpr_24(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3410"))) PPC_WEAK_FUNC(sub_825A3410);
PPC_FUNC_IMPL(__imp__sub_825A3410) {
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
	// bl 0x825a2d68
	ctx.lr = 0x825A3420;
	sub_825A2D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a3440
	if (!cr6.eq) goto loc_825A3440;
loc_825A342C:
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
loc_825A3440:
	// bl 0x827b6068
	ctx.lr = 0x825A3444;
	sub_827B6068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3460
	if (cr6.eq) goto loc_825A3460;
	// bl 0x827b6068
	ctx.lr = 0x825A3450;
	sub_827B6068(ctx, base);
	// bl 0x827b6240
	ctx.lr = 0x825A3454;
	sub_827B6240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a342c
	if (cr6.eq) goto loc_825A342C;
loc_825A3460:
	// bl 0x827b5600
	ctx.lr = 0x825A3464;
	sub_827B5600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3484
	if (cr6.eq) goto loc_825A3484;
	// bl 0x827b5600
	ctx.lr = 0x825A3470;
	sub_827B5600(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x825A3474;
	sub_82A47DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a3488
	if (cr6.eq) goto loc_825A3488;
loc_825A3484:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A3488:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3498"))) PPC_WEAK_FUNC(sub_825A3498);
PPC_FUNC_IMPL(__imp__sub_825A3498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A34A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,23996
	ctx.r11.s64 = ctx.r11.s64 + 23996;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,-26380
	ctx.r31.s64 = ctx.r31.s64 + -26380;
	// ori r29,r11,44764
	ctx.r29.u64 = ctx.r11.u64 | 44764;
loc_825A34C0:
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
	ctx.lr = 0x825A34DC;
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
	ctx.lr = 0x825A34F4;
	sub_823F0190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825a34c0
	if (!cr0.lt) goto loc_825A34C0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3504"))) PPC_WEAK_FUNC(sub_825A3504);
PPC_FUNC_IMPL(__imp__sub_825A3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3508"))) PPC_WEAK_FUNC(sub_825A3508);
PPC_FUNC_IMPL(__imp__sub_825A3508) {
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
	// addi r31,r3,11084
	ctx.r31.s64 = ctx.r3.s64 + 11084;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825A3524:
	// addi r31,r31,-5540
	ctx.r31.s64 = ctx.r31.s64 + -5540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825A3530;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825a3524
	if (!cr0.lt) goto loc_825A3524;
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

__attribute__((alias("__imp__sub_825A3550"))) PPC_WEAK_FUNC(sub_825A3550);
PPC_FUNC_IMPL(__imp__sub_825A3550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x825A3558;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// subf r27,r3,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3580:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3580;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r8,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r8.u8);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lbz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// stb r6,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r6.u8);
	// lbz r11,65(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 65);
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x825A35D8;
	sub_831CE980(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// lbz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 148);
	// stb r9,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r9.u8);
	// lbz r8,149(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// stb r8,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r8.u8);
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// lbz r6,156(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// stb r6,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r6.u8);
	// lbz r5,157(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// stb r5,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r5.u8);
	// lbz r4,158(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 158);
	// stb r4,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r4.u8);
	// lbz r3,159(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 159);
	// stb r3,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r3.u8);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lfs f0,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lbz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// stb r9,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r9.u8);
	// lbz r8,169(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 169);
	// stb r8,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r8.u8);
	// lwz r7,172(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,176(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// lbz r5,180(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 180);
	// stb r5,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r5.u8);
	// lfs f13,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lbz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// stb r4,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r4.u8);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// lfs f12,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f11,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,208(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f10,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,212(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f9,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,216(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f8,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,220(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f7,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,224(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f6,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,228(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f5,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,232(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
loc_825A36C4:
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a36c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A36C4;
	// lfs f0,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lbz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 252);
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// addi r11,r30,276
	ctx.r11.s64 = ctx.r30.s64 + 276;
	// lbz r8,253(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 253);
	// addi r10,r31,276
	ctx.r10.s64 = ctx.r31.s64 + 276;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stb r8,253(r31)
	PPC_STORE_U8(ctx.r31.u32 + 253, ctx.r8.u8);
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r7,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// lfs f13,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f12,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,264(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f11,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,268(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lwz r6,272(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// lfs f10,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,276(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfs f9,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,280(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f8,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,284(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lwz r5,288(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r5,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r5.u32);
	// lfs f7,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,292(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f6,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,296(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f5,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,300(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lbz r4,304(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 304);
	// stb r4,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r4.u8);
loc_825A376C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825a376c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A376C;
	// lfs f0,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,336
	ctx.r11.s64 = ctx.r30.s64 + 336;
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lfs f13,340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f12,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,344(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lfs f11,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,352(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lfs f10,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,356(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lfs f9,360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,360(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// lbz r8,364(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 364);
	// stb r8,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r8.u8);
loc_825A37D0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825a37d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A37D0;
	// lfs f0,396(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,396
	ctx.r11.s64 = ctx.r30.s64 + 396;
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f12,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lfs f11,412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f10,416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f9,420(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,420(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lbz r10,424(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 424);
	// stb r10,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r10.u8);
loc_825A3834:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a3834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3834;
	// lfs f0,456(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,456
	ctx.r11.s64 = ctx.r30.s64 + 456;
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// lfs f13,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stfs f13,460(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// addi r10,r31,456
	ctx.r10.s64 = ctx.r31.s64 + 456;
	// lfs f12,464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// stfs f12,464(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lfs f11,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// lfs f10,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,476(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// lfs f9,480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,480(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// lbz r10,484(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 484);
	// stb r10,484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 484, ctx.r10.u8);
loc_825A3898:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a3898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3898;
	// lfs f0,516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,516
	ctx.r11.s64 = ctx.r30.s64 + 516;
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r31,516
	ctx.r10.s64 = ctx.r31.s64 + 516;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,520(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// lfs f12,524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// lfs f11,532(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,532(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// lfs f10,536(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,536(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lfs f9,540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,540(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// lbz r10,544(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 544);
	// stb r10,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r10.u8);
loc_825A38FC:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a38fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A38FC;
	// lfs f0,576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,576
	ctx.r11.s64 = ctx.r30.s64 + 576;
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// addi r10,r31,576
	ctx.r10.s64 = ctx.r31.s64 + 576;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// li r7,7
	ctx.r7.s64 = 7;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,580(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// lfs f12,584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,584(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lwz r11,588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// lfs f11,592(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,592(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// lfs f10,596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,596(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// lfs f9,600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,600(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// lbz r10,604(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 604);
	// stb r10,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r10.u8);
loc_825A3960:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a3960
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3960;
	// lfs f0,636(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,636
	ctx.r11.s64 = ctx.r30.s64 + 636;
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r31,636
	ctx.r10.s64 = ctx.r31.s64 + 636;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,640(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// lfs f12,644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,644(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// lfs f11,652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,652(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// lfs f10,656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,656(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// lfs f9,660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,660(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lbz r10,664(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 664);
	// stb r10,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r10.u8);
loc_825A39C4:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a39c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A39C4;
	// lfs f0,696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,696
	ctx.r11.s64 = ctx.r30.s64 + 696;
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// addi r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 + 696;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// li r7,7
	ctx.r7.s64 = 7;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// lfs f12,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,704(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lfs f11,712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,712(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 712, temp.u32);
	// lfs f10,716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,716(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 716, temp.u32);
	// lfs f9,720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,720(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 720, temp.u32);
	// lbz r10,724(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 724);
	// stb r10,724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 724, ctx.r10.u8);
loc_825A3A28:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a3a28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3A28;
	// addi r10,r30,760
	ctx.r10.s64 = ctx.r30.s64 + 760;
	// addi r11,r31,776
	ctx.r11.s64 = ctx.r31.s64 + 776;
	// li r6,3
	ctx.r6.s64 = 3;
loc_825A3A40:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stfs f0,-20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f10,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lbz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// stb r5,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r5.u8);
loc_825A3A90:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825a3a90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3A90;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bne 0x825a3a40
	if (!cr0.eq) goto loc_825A3A40;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,936
	ctx.r11.s64 = ctx.r31.s64 + 936;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3AB8:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3ab8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3AB8;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,980
	ctx.r11.s64 = ctx.r31.s64 + 980;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3AD4:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3ad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3AD4;
	// lfs f0,1024(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// addi r10,r30,1116
	ctx.r10.s64 = ctx.r30.s64 + 1116;
	// lfs f13,1028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,1124
	ctx.r11.s64 = ctx.r31.s64 + 1124;
	// stfs f13,1028(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lfs f12,1032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,1032(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// lfs f11,1036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1036(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1036, temp.u32);
	// lfs f10,1040(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1040(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// lfs f9,1044(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1044(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// lfs f8,1048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1048(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// lfs f7,1052(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1052(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// lfs f6,1056(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1056(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// lfs f5,1060(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1060(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// lfs f4,1064(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1064);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1064(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// lfs f3,1068(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1068(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1068, temp.u32);
	// lfs f2,1072(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,1072(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// lfs f1,1076(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,1076(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// lfs f0,1080(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// lfs f13,1084(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1084(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// lfs f12,1088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1088(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// lfs f11,1092(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1092(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// lfs f10,1096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1096(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// lfs f9,1100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// lfs f8,1104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1104(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// lfs f7,1108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1108(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// lfs f6,1112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lfs f5,1116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1116);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1116(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1116, temp.u32);
loc_825A3BB4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x825a3bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3BB4;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1156
	ctx.r9.s64 = ctx.r30.s64 + 1156;
	// addi r8,r31,1156
	ctx.r8.s64 = ctx.r31.s64 + 1156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3BE8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a3be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3BE8;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1167
	ctx.r9.s64 = ctx.r30.s64 + 1167;
	// addi r8,r31,1167
	ctx.r8.s64 = ctx.r31.s64 + 1167;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3C0C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a3c0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3C0C;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1178
	ctx.r9.s64 = ctx.r30.s64 + 1178;
	// addi r8,r31,1178
	ctx.r8.s64 = ctx.r31.s64 + 1178;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3C30:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a3c30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3C30;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1192
	ctx.r11.s64 = ctx.r31.s64 + 1192;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3C4C:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3c4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3C4C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1236
	ctx.r11.s64 = ctx.r31.s64 + 1236;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3C68:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3c68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3C68;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1280
	ctx.r11.s64 = ctx.r31.s64 + 1280;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3C84:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3c84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3C84;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1324
	ctx.r11.s64 = ctx.r31.s64 + 1324;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A3CA0:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a3ca0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A3CA0;
	// lbz r11,1368(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1368);
	// addi r4,r30,1404
	ctx.r4.s64 = ctx.r30.s64 + 1404;
	// addi r3,r31,1404
	ctx.r3.s64 = ctx.r31.s64 + 1404;
	// li r5,1320
	ctx.r5.s64 = 1320;
	// stb r11,1368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1368, ctx.r11.u8);
	// lbz r10,1369(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1369);
	// stb r10,1369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1369, ctx.r10.u8);
	// lwz r9,1372(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1372);
	// stw r9,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r9.u32);
	// lwz r8,1376(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1376);
	// stw r8,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r8.u32);
	// lwz r7,1380(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// stw r7,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r7.u32);
	// lwz r6,1384(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1384);
	// stw r6,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r6.u32);
	// lbz r11,1388(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1388);
	// stb r11,1388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1388, ctx.r11.u8);
	// lbz r10,1389(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1389);
	// stb r10,1389(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1389, ctx.r10.u8);
	// lbz r9,1390(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1390);
	// stb r9,1390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1390, ctx.r9.u8);
	// lbz r8,1391(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1391);
	// stb r8,1391(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1391, ctx.r8.u8);
	// lwz r7,1392(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// stw r7,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r7.u32);
	// lwz r6,1396(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// stw r6,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r6.u32);
	// lbz r11,1400(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1400);
	// stb r11,1400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1400, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x825A3D28;
	sub_831CE980(ctx, base);
	// addi r4,r30,2724
	ctx.r4.s64 = ctx.r30.s64 + 2724;
	// addi r3,r31,2724
	ctx.r3.s64 = ctx.r31.s64 + 2724;
	// li r5,220
	ctx.r5.s64 = 220;
	// bl 0x831ce980
	ctx.lr = 0x825A3D38;
	sub_831CE980(ctx, base);
	// lwz r10,2944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2944);
	// addi r11,r30,2948
	ctx.r11.s64 = ctx.r30.s64 + 2948;
	// addi r11,r31,2948
	ctx.r11.s64 = ctx.r31.s64 + 2948;
	// addi r11,r31,3004
	ctx.r11.s64 = ctx.r31.s64 + 3004;
	// stw r10,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r10.u32);
	// lwz r9,2948(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2948);
	// stw r9,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r9.u32);
	// lwz r8,2952(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2952);
	// stw r8,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r8.u32);
	// lwz r7,2956(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2956);
	// stw r7,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r7.u32);
	// lwz r6,2960(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2960);
	// stw r6,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r6.u32);
	// lwz r5,2964(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2964);
	// stw r5,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r5.u32);
	// lfs f0,2968(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2968, temp.u32);
	// lfs f13,2972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2972);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2972(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2972, temp.u32);
	// lfs f12,2976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2976);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2976(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2976, temp.u32);
	// lfs f11,2980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,2980(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2980, temp.u32);
	// lfs f10,2984(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2984);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,2984(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2984, temp.u32);
	// lfs f9,2988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2988);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,2988(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2988, temp.u32);
	// lfs f8,2992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2992);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,2992(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2992, temp.u32);
	// lfs f7,2996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2996);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,2996(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2996, temp.u32);
	// lfs f6,3000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3000);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3000(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3000, temp.u32);
	// lwz r4,3004(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3004);
	// stw r4,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r4.u32);
	// lwz r3,3008(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3008);
	// stw r3,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r3.u32);
	// lwz r10,3012(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3012);
	// stw r10,3012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3012, ctx.r10.u32);
	// lwz r9,3016(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3016);
	// stw r9,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r9.u32);
	// lwz r8,3020(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// stw r8,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r8.u32);
	// lfs f5,3024(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3024);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3024(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3024, temp.u32);
	// lfs f4,3028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3028);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3028(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3028, temp.u32);
	// lfs f3,3032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3032);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3032(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3032, temp.u32);
	// lfs f2,3036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3036);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,3036(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3036, temp.u32);
	// lfs f1,3040(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3040);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,3040(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3040, temp.u32);
	// lfs f0,3044(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3044, temp.u32);
	// lfs f13,3048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3048(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3048, temp.u32);
	// lfs f12,3052(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3052);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3052(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3052, temp.u32);
	// lfs f11,3056(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3056);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3056(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3056, temp.u32);
	// lwz r7,3060(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3060);
	// stw r7,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r7.u32);
	// lwz r6,3064(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3064);
	// stw r6,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r6.u32);
	// lwz r5,3068(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3068);
	// stw r5,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r5.u32);
	// lwz r4,3072(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3072);
	// stw r4,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r4.u32);
	// lwz r3,3076(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3076);
	// stw r3,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r3.u32);
	// lfs f10,3080(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,3080(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3080, temp.u32);
	// lfs f9,3084(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3084);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,3084(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3084, temp.u32);
	// lfs f8,3088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3088);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,3088(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3088, temp.u32);
	// lfs f7,3092(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,3092(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3092, temp.u32);
	// lfs f6,3096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3096);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3096(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3096, temp.u32);
	// lfs f5,3100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3100(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3100, temp.u32);
	// lfs f4,3104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3104, temp.u32);
	// lfs f3,3108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3108);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3108(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// lfs f2,3112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3112);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,3112(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3112, temp.u32);
	// lwz r11,3116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3116);
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// addi r11,r31,3420
	ctx.r11.s64 = ctx.r31.s64 + 3420;
	// lwz r10,3120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3120);
	// stw r10,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r10.u32);
	// addi r10,r30,3392
	ctx.r10.s64 = ctx.r30.s64 + 3392;
	// lwz r9,3124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3124);
	// stw r9,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r9.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r8,3128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3128);
	// stw r8,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r8.u32);
	// lwz r7,3132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3132);
	// stw r7,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r7.u32);
	// lfs f1,3136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3136);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,3136(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3136, temp.u32);
	// lfs f0,3140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3140, temp.u32);
	// lfs f13,3144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3144, temp.u32);
	// lfs f12,3148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3148, temp.u32);
	// lfs f11,3152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3152, temp.u32);
	// lfs f10,3156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3156);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,3156(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3156, temp.u32);
	// lfs f9,3160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,3160(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3160, temp.u32);
	// lfs f8,3164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3164);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,3164(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3164, temp.u32);
	// lfs f7,3168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3168);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,3168(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3168, temp.u32);
	// lwz r6,3172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3172);
	// stw r6,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r6.u32);
	// lwz r5,3176(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// stw r5,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r5.u32);
	// lwz r4,3180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3180);
	// stw r4,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r4.u32);
	// lwz r3,3184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3184);
	// stw r3,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r3.u32);
	// lwz r9,3188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3188);
	// stw r9,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r9.u32);
	// lfs f6,3192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3192);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3192(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// lfs f5,3196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3196);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3196(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3196, temp.u32);
	// lfs f4,3200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3200);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3200(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3200, temp.u32);
	// lfs f3,3204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3204);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3204(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3204, temp.u32);
	// lfs f2,3208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3208);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,3208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3208, temp.u32);
	// lfs f1,3212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3212);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,3212(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3212, temp.u32);
	// lfs f0,3216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3216, temp.u32);
	// lfs f13,3220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3220, temp.u32);
	// lfs f12,3224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3224(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// lwz r8,3228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r8,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r8.u32);
	// lwz r7,3232(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// stw r7,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r7.u32);
	// lwz r6,3236(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// stw r6,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r6.u32);
	// lwz r5,3240(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// stw r5,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r5.u32);
	// lwz r4,3244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// stw r4,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r4.u32);
	// lfs f11,3248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3248(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3248, temp.u32);
	// lfs f10,3252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3252);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,3252(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3252, temp.u32);
	// lfs f9,3256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,3256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3256, temp.u32);
	// lfs f8,3260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,3260(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3260, temp.u32);
	// lfs f7,3264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,3264(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3264, temp.u32);
	// lfs f6,3268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3268);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3268(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3268, temp.u32);
	// lfs f5,3272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3272);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3272(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// lfs f4,3276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3276);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3276(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3276, temp.u32);
	// lfs f3,3280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3280(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r3,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r3.u32);
	// lwz r9,3288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r9,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r9.u32);
	// lwz r8,3292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// stw r8,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r8.u32);
	// lwz r7,3296(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// stw r7,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r7.u32);
	// lwz r6,3300(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r6,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r6.u32);
	// lfs f2,3304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,3304(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lfs f1,3308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,3308(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// lfs f0,3312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3312, temp.u32);
	// lfs f13,3316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3316);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// lfs f12,3320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3320(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lfs f11,3324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3324(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// lfs f10,3328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,3328(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// lfs f9,3332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,3332(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lfs f8,3336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3336);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,3336(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// lwz r5,3340(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// stw r5,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r5.u32);
	// lwz r4,3344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3344);
	// stw r4,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r4.u32);
	// lwz r3,3348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3348);
	// stw r3,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r3.u32);
	// lwz r9,3352(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3352);
	// stw r9,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r9.u32);
	// lwz r8,3356(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3356);
	// stw r8,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r8.u32);
	// lfs f7,3360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,3360(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3360, temp.u32);
	// lfs f6,3364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3364(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3364, temp.u32);
	// lfs f5,3368(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3368);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3368(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3368, temp.u32);
	// lfs f4,3372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3372);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3372(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3372, temp.u32);
	// lfs f3,3376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3376(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3376, temp.u32);
	// lfs f2,3380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3380);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,3380(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3380, temp.u32);
	// lfs f1,3384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3384);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,3384(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3384, temp.u32);
	// lfs f0,3388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3388, temp.u32);
	// lfs f13,3392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3392, temp.u32);
loc_825A40DC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r8.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfsu f0,56(r10)
	ea = 56 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bdnz 0x825a40dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A40DC;
	// lwz r9,3564(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3564);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,3568
	ctx.r11.s64 = ctx.r31.s64 + 3568;
	// stw r9,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4168:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a4168
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4168;
	// li r5,30936
	ctx.r5.s64 = 30936;
	// addi r4,r30,3612
	ctx.r4.s64 = ctx.r30.s64 + 3612;
	// addi r3,r31,3612
	ctx.r3.s64 = ctx.r31.s64 + 3612;
	// bl 0x831ce980
	ctx.lr = 0x825A4188;
	sub_831CE980(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,34548
	ctx.r11.u64 = ctx.r11.u64 | 34548;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x825a23f8
	ctx.lr = 0x825A419C;
	sub_825A23F8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r10,39088
	ctx.r11.u64 = ctx.r10.u64 | 39088;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825A41C4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x825a41c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A41C4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,39100
	ctx.r11.u64 = ctx.r11.u64 | 39100;
	// ori r10,r10,39104
	ctx.r10.u64 = ctx.r10.u64 | 39104;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r5,39108
	ctx.r11.u64 = ctx.r5.u64 | 39108;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r10,11
	ctx.r10.s64 = 11;
	// stwx r4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-26424
	ctx.r11.s64 = ctx.r11.s64 + -26424;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r8,r30,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r8,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lbzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stbx r7,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
loc_825A4228:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a4228
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4228;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r28,11
	ctx.r28.s64 = 11;
	// addi r29,r29,-26380
	ctx.r29.s64 = ctx.r29.s64 + -26380;
loc_825A4244:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A4254;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// bne 0x825a4244
	if (!cr0.eq) goto loc_825A4244;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39728
	ctx.r11.u64 = ctx.r11.u64 | 39728;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ori r11,r9,39732
	ctx.r11.u64 = ctx.r9.u64 | 39732;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
loc_825A42A0:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a42a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A42A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,39780
	ctx.r11.u64 = ctx.r11.u64 | 39780;
	// ori r10,r10,39784
	ctx.r10.u64 = ctx.r10.u64 | 39784;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// rotlwi r23,r26,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r22,1114
	ctx.r22.s64 = 1114;
	// ori r11,r7,39788
	ctx.r11.u64 = ctx.r7.u64 | 39788;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stbx r5,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// rotlwi r31,r27,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// addis r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 65536;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r27,r27,-25700
	ctx.r27.s64 = ctx.r27.s64 + -25700;
	// ori r28,r6,39792
	ctx.r28.u64 = ctx.r6.u64 | 39792;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rotlwi r27,r22,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r29,r4,39796
	ctx.r29.u64 = ctx.r4.u64 | 39796;
	// ori r3,r3,39800
	ctx.r3.u64 = ctx.r3.u64 | 39800;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r4,r11,39804
	ctx.r4.u64 = ctx.r11.u64 | 39804;
	// ori r5,r10,39808
	ctx.r5.u64 = ctx.r10.u64 | 39808;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r6,r9,39812
	ctx.r6.u64 = ctx.r9.u64 | 39812;
	// ori r7,r8,39816
	ctx.r7.u64 = ctx.r8.u64 | 39816;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwzx r26,r30,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r30,220(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// ori r8,r11,39820
	ctx.r8.u64 = ctx.r11.u64 | 39820;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,39824
	ctx.r9.u64 = ctx.r10.u64 | 39824;
	// ori r10,r11,39828
	ctx.r10.u64 = ctx.r11.u64 | 39828;
	// stwx r26,r31,r23
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r26.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39832
	ctx.r11.u64 = ctx.r11.u64 | 39832;
	// lwzx r27,r30,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// stwx r27,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r27.u32);
	// lwzx r27,r30,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r27,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u32);
	// lwzx r28,r30,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// lwzx r29,r30,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r29,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// lfsx f0,r30,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r31,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lfsx f12,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r31,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r31,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A43DC:
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a43dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A43DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,44292
	ctx.r11.u64 = ctx.r11.u64 | 44292;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r8,44294
	ctx.r7.u64 = ctx.r8.u64 | 44294;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r5,44295
	ctx.r8.u64 = ctx.r5.u64 | 44295;
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r6,r10,44293
	ctx.r6.u64 = ctx.r10.u64 | 44293;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stbx r4,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// ori r11,r5,44304
	ctx.r11.u64 = ctx.r5.u64 | 44304;
	// ori r9,r3,44296
	ctx.r9.u64 = ctx.r3.u64 | 44296;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ori r10,r10,44300
	ctx.r10.u64 = ctx.r10.u64 | 44300;
	// lbzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stbx r11,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r6,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// lbzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// stbx r5,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// lbzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x825a2fb0
	ctx.lr = 0x825A4464;
	sub_825A2FB0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r11,r8,44624
	ctx.r11.u64 = ctx.r8.u64 | 44624;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r7,44636
	ctx.r4.u64 = ctx.r7.u64 | 44636;
	// ori r5,r11,44640
	ctx.r5.u64 = ctx.r11.u64 | 44640;
	// ori r7,r9,44648
	ctx.r7.u64 = ctx.r9.u64 | 44648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r5,44656
	ctx.r9.u64 = ctx.r5.u64 | 44656;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r6,r10,44644
	ctx.r6.u64 = ctx.r10.u64 | 44644;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r8,44652
	ctx.r8.u64 = ctx.r8.u64 | 44652;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// ori r10,r11,44660
	ctx.r10.u64 = ctx.r11.u64 | 44660;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,44664
	ctx.r11.u64 = ctx.r11.u64 | 44664;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-20868
	ctx.r11.s64 = ctx.r11.s64 + -20868;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lfsx f0,r30,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// lfsx f13,r30,r26
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r31,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, temp.u32);
	// lfsx f12,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r31,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r31,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lfsx f10,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r31,r8
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfsx f9,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r31,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lfsx f8,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f8,r31,r10
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfsx f7,r30,r25
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r31,r25
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, temp.u32);
loc_825A452C:
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a452c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A452C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A454C:
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a454c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A454C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,44724
	ctx.r11.u64 = ctx.r11.u64 | 44724;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ori r11,r10,44726
	ctx.r11.u64 = ctx.r10.u64 | 44726;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r7.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r8,44732
	ctx.r6.u64 = ctx.r8.u64 | 44732;
	// ori r8,r11,44740
	ctx.r8.u64 = ctx.r11.u64 | 44740;
	// ori r4,r9,44727
	ctx.r4.u64 = ctx.r9.u64 | 44727;
	// sthx r10,r31,r7
	PPC_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u16);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r5,r9,44728
	ctx.r5.u64 = ctx.r9.u64 | 44728;
	// ori r9,r10,44744
	ctx.r9.u64 = ctx.r10.u64 | 44744;
	// ori r10,r8,44748
	ctx.r10.u64 = ctx.r8.u64 | 44748;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// li r10,11
	ctx.r10.s64 = 11;
	// ori r7,r7,44736
	ctx.r7.u64 = ctx.r7.u64 | 44736;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r11,r11,44752
	ctx.r11.u64 = ctx.r11.u64 | 44752;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stbx r3,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// lbzx r10,r30,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// stbx r10,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwzx r7,r30,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// stwx r7,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// lwzx r6,r30,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// stwx r6,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u32);
	// lwzx r5,r30,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// stwx r5,r31,r23
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r5.u32);
loc_825A4638:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a4638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4654"))) PPC_WEAK_FUNC(sub_825A4654);
PPC_FUNC_IMPL(__imp__sub_825A4654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4658"))) PPC_WEAK_FUNC(sub_825A4658);
PPC_FUNC_IMPL(__imp__sub_825A4658) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,6684
	ctx.r4.s64 = ctx.r11.s64 + 6684;
	// li r5,6680
	ctx.r5.s64 = 6680;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A466C"))) PPC_WEAK_FUNC(sub_825A466C);
PPC_FUNC_IMPL(__imp__sub_825A466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4670"))) PPC_WEAK_FUNC(sub_825A4670);
PPC_FUNC_IMPL(__imp__sub_825A4670) {
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
	// addi r11,r3,17772
	ctx.r11.s64 = ctx.r3.s64 + 17772;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,5644
	ctx.r31.s64 = ctx.r11.s64 + 5644;
loc_825A4690:
	// addi r31,r31,-8884
	ctx.r31.s64 = ctx.r31.s64 + -8884;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x83102db0
	ctx.lr = 0x825A469C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825A46A4;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825a4690
	if (!cr0.lt) goto loc_825A4690;
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

__attribute__((alias("__imp__sub_825A46C4"))) PPC_WEAK_FUNC(sub_825A46C4);
PPC_FUNC_IMPL(__imp__sub_825A46C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A46C8"))) PPC_WEAK_FUNC(sub_825A46C8);
PPC_FUNC_IMPL(__imp__sub_825A46C8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
loc_825A46EC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825a46ec
	if (!cr0.eq) goto loc_825A46EC;
	// lwsync 
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a471c
	if (cr6.eq) goto loc_825A471C;
	// bl 0x825a30d8
	ctx.lr = 0x825A471C;
	sub_825A30D8(ctx, base);
loc_825A471C:
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

__attribute__((alias("__imp__sub_825A4738"))) PPC_WEAK_FUNC(sub_825A4738);
PPC_FUNC_IMPL(__imp__sub_825A4738) {
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
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// lbz r8,10(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r7,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r7.u8);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// lbz r5,13(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r5,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r5.u8);
	// lbz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// lbz r10,15(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// stb r10,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r10.u8);
	// lbz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// lbz r8,17(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// lbz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// lbz r6,19(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r6,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r6.u8);
	// lbz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r5,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r5.u8);
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lbz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r7,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r7.u8);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4834"))) PPC_WEAK_FUNC(sub_825A4834);
PPC_FUNC_IMPL(__imp__sub_825A4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4838"))) PPC_WEAK_FUNC(sub_825A4838);
PPC_FUNC_IMPL(__imp__sub_825A4838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4848:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a4848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4848;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4864:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a4864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4864;
	// lwz r7,128(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r4,152
	ctx.r10.s64 = ctx.r4.s64 + 152;
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// stw r7,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r6,132(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lwz r8,140(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// lwz r7,144(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// lwz r6,148(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r6,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r6.u32);
	// lwz r5,152(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
loc_825A48BC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfsu f0,60(r10)
	ea = 60 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bdnz 0x825a48bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A48BC;
	// lbz r7,456(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 456);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,490
	ctx.r9.s64 = ctx.r4.s64 + 490;
	// addi r8,r3,490
	ctx.r8.s64 = ctx.r3.s64 + 490;
	// stb r7,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r6,460(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// stw r6,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r6.u32);
	// lwz r5,464(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// stw r5,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r5.u32);
	// lwz r10,468(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// lwz r7,472(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 472);
	// stw r7,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r7.u32);
	// lwz r6,476(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r6,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r6.u32);
	// lbz r5,480(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 480);
	// stb r5,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r5.u8);
	// lwz r10,484(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 484);
	// stw r10,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r10.u32);
	// lbz r7,488(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 488);
	// stb r7,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r7.u8);
	// lbz r6,489(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 489);
	// stb r6,489(r3)
	PPC_STORE_U8(ctx.r3.u32 + 489, ctx.r6.u8);
loc_825A49A0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a49a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A49A0;
	// lbz r11,512(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// lbz r10,513(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 513);
	// stb r10,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r10.u8);
	// lbz r9,514(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 514);
	// stb r9,514(r3)
	PPC_STORE_U8(ctx.r3.u32 + 514, ctx.r9.u8);
	// lwz r8,516(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// stw r8,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r8.u32);
	// lwz r7,520(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// stw r7,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r7.u32);
	// lwz r6,524(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// stw r6,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r6.u32);
	// lbz r5,528(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 528);
	// stb r5,528(r3)
	PPC_STORE_U8(ctx.r3.u32 + 528, ctx.r5.u8);
	// lbz r11,529(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 529);
	// stb r11,529(r3)
	PPC_STORE_U8(ctx.r3.u32 + 529, ctx.r11.u8);
	// lbz r10,530(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 530);
	// stb r10,530(r3)
	PPC_STORE_U8(ctx.r3.u32 + 530, ctx.r10.u8);
	// lbz r9,531(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 531);
	// stb r9,531(r3)
	PPC_STORE_U8(ctx.r3.u32 + 531, ctx.r9.u8);
	// lbz r8,532(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 532);
	// stb r8,532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 532, ctx.r8.u8);
	// lbz r7,533(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 533);
	// stb r7,533(r3)
	PPC_STORE_U8(ctx.r3.u32 + 533, ctx.r7.u8);
	// lwz r6,536(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 536);
	// stw r6,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r6.u32);
	// lwz r5,540(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	// stw r5,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r5.u32);
	// lwz r11,544(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 544);
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// lwz r10,548(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 548);
	// stw r10,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// lwz r9,552(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 552);
	// stw r9,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r9.u32);
	// lwz r8,556(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 556);
	// stw r8,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4A44"))) PPC_WEAK_FUNC(sub_825A4A44);
PPC_FUNC_IMPL(__imp__sub_825A4A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4A48"))) PPC_WEAK_FUNC(sub_825A4A48);
PPC_FUNC_IMPL(__imp__sub_825A4A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
loc_825A4A6C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lfs f7,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f6,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f4,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f3,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f2,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f1,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r6,84(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r6,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// lwzu r9,88(r10)
	ea = 88 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// bdnz 0x825a4a6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4A6C;
	// lfs f0,972(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,972
	ctx.r10.s64 = ctx.r3.s64 + 972;
	// stfs f0,972(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// addi r11,r4,972
	ctx.r11.s64 = ctx.r4.s64 + 972;
	// lfs f13,976(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,976(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f12,980(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 980);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,980(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// lfs f11,984(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,984(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f10,988(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 988);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,988(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// lfs f9,992(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 992);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,992(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 992, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4B60"))) PPC_WEAK_FUNC(sub_825A4B60);
PPC_FUNC_IMPL(__imp__sub_825A4B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r31,3
	ctx.r31.s64 = 3;
loc_825A4B74:
	// lbzx r30,r5,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// li r6,11
	ctx.r6.s64 = 11;
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r11,r7,15
	ctx.r11.s64 = ctx.r7.s64 + 15;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// lbzx r30,r5,r7
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stb r30,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r30.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_825A4BA0:
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lfs f7,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f6,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f4,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f3,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f2,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f1,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r6,84(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r6,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// lwzu r6,88(r10)
	ea = 88 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// bdnz 0x825a4ba0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4BA0;
	// lfs f0,972(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,972
	ctx.r11.s64 = ctx.r9.s64 + 972;
	// stfs f0,972(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 972, temp.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lfs f13,976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,972
	ctx.r11.s64 = ctx.r8.s64 + 972;
	// stfs f13,976(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 976, temp.u32);
	// lfs f12,980(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 980);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,980(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 980, temp.u32);
	// lfs f11,984(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,984(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 984, temp.u32);
	// lfs f10,988(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 988);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,988(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 988, temp.u32);
	// lfs f9,992(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 992);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,992(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 992, temp.u32);
	// addi r9,r9,996
	ctx.r9.s64 = ctx.r9.s64 + 996;
	// bne 0x825a4b74
	if (!cr0.eq) goto loc_825A4B74;
	// lwz r11,2988(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2988);
	// stw r11,2988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2988, ctx.r11.u32);
	// lwz r10,2992(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2992);
	// stw r10,2992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2992, ctx.r10.u32);
	// lwz r9,2996(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2996);
	// stw r9,2996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2996, ctx.r9.u32);
	// lwz r8,3000(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3000);
	// stw r8,3000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3000, ctx.r8.u32);
	// lwz r7,3004(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3004);
	// stw r7,3004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3004, ctx.r7.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4CD0"))) PPC_WEAK_FUNC(sub_825A4CD0);
PPC_FUNC_IMPL(__imp__sub_825A4CD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// li r5,136
	ctx.r5.s64 = 136;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4CE4"))) PPC_WEAK_FUNC(sub_825A4CE4);
PPC_FUNC_IMPL(__imp__sub_825A4CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4CE8"))) PPC_WEAK_FUNC(sub_825A4CE8);
PPC_FUNC_IMPL(__imp__sub_825A4CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A4CF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,512
	ctx.r10.s64 = 512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
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
	// lbz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r5,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
loc_825A4D50:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a4d50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4D50;
	// addi r29,r31,544
	ctx.r29.s64 = ctx.r31.s64 + 544;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,27
	ctx.r28.s64 = 27;
loc_825A4D6C:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A4D7C;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// bne 0x825a4d6c
	if (!cr0.eq) goto loc_825A4D6C;
	// li r10,128
	ctx.r10.s64 = 128;
	// lfs f0,3568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3568, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3572);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r30,3576
	ctx.r9.s64 = ctx.r30.s64 + 3576;
	// stfs f13,3572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3572, temp.u32);
	// addi r8,r31,3576
	ctx.r8.s64 = ctx.r31.s64 + 3576;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4DAC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a4dac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4DAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4DC8"))) PPC_WEAK_FUNC(sub_825A4DC8);
PPC_FUNC_IMPL(__imp__sub_825A4DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A4DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A4DF4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825a4df4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4DF4;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,20
	ctx.r28.s64 = 20;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lbz r10,33(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
	// lbz r9,34(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// stb r9,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r9.u8);
loc_825A4E24:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A4E34;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// bne 0x825a4e24
	if (!cr0.eq) goto loc_825A4E24;
	// lwz r9,1556(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r31,1560
	ctx.r11.s64 = ctx.r31.s64 + 1560;
	// stw r9,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4E54:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a4e54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4E54;
	// li r10,40
	ctx.r10.s64 = 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1720
	ctx.r9.s64 = ctx.r30.s64 + 1720;
	// addi r8,r31,1720
	ctx.r8.s64 = ctx.r31.s64 + 1720;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A4E78:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a4e78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4E78;
	// lbz r11,1760(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1760);
	// addi r4,r30,1776
	ctx.r4.s64 = ctx.r30.s64 + 1776;
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r11,1760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1760, ctx.r11.u8);
	// lbz r10,1761(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1761);
	// stb r10,1761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1761, ctx.r10.u8);
	// lbz r9,1762(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1762);
	// stb r9,1762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1762, ctx.r9.u8);
	// lbz r8,1763(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1763);
	// stb r8,1763(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1763, ctx.r8.u8);
	// lbz r7,1764(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1764);
	// stb r7,1764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1764, ctx.r7.u8);
	// lfs f0,1768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// lfs f13,1772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1772(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// bl 0x831ce980
	ctx.lr = 0x825A4ED0;
	sub_831CE980(ctx, base);
	// addi r4,r30,1836
	ctx.r4.s64 = ctx.r30.s64 + 1836;
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x825a4ce8
	ctx.lr = 0x825A4EDC;
	sub_825A4CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4EE8"))) PPC_WEAK_FUNC(sub_825A4EE8);
PPC_FUNC_IMPL(__imp__sub_825A4EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A4EFC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,-24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lbz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r9,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r9.u8);
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,-16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f5,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lfs f4,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f3,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f2,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lbz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lfs f12,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f11,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f9,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f8,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f7,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f6,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lbz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 108);
	// stb r6,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r6.u8);
	// lfs f4,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,56(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f3,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,60(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f2,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,64(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f1,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,68(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f13,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f12,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f11,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lbz r5,144(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// stb r5,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r5.u8);
	// lfs f10,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f9,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f8,156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f7,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f6,164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f5,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f4,172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f3,176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lbz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 180);
	// stb r9,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r9.u8);
	// lfs f2,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,128(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lfs f1,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,132(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lfs f0,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f13,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f12,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f11,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,148(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lfs f10,208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,152(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lfs f9,212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,156(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lbz r7,216(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 216);
	// stb r7,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r7.u8);
	// lfs f8,220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,164(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f7,224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,168(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f6,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,172(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f5,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,176(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f4,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,180(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f3,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,184(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lfs f2,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,188(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lfs f1,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,192(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lbz r6,252(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// stb r6,196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 196, ctx.r6.u8);
	// lfs f0,256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lfs f13,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lfs f12,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,208(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lfs f11,268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,212(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lfs f10,272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,216(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lfs f9,276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,220(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// lfs f8,280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,224(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// lfs f7,284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,228(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// lbz r5,288(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 288);
	// stb r5,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r5.u8);
	// lfs f6,292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,236(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lfs f5,296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,240(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lfs f4,300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,244(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// lfs f3,304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,248(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lfs f2,308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,252(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// lfs f1,312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,256(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// lfs f0,316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// lfs f13,320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// lbz r9,324(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 324);
	// stb r9,268(r11)
	PPC_STORE_U8(ctx.r11.u32 + 268, ctx.r9.u8);
	// lfs f12,328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,272(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// lfs f11,332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,276(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// lfs f10,336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,280(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// lfs f9,340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,284(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// lfs f8,344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,288(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// lfs f7,348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,292(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// lfs f6,352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,296(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// lfs f5,356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,300(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// lbzu r9,360(r10)
	ea = 360 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r9.u8);
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// bdnz 0x825a4efc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A4EFC;
	// lfs f0,720(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,720(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// lbz r11,724(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 724);
	// stb r11,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r11.u8);
	// lbz r10,725(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 725);
	// stb r10,725(r3)
	PPC_STORE_U8(ctx.r3.u32 + 725, ctx.r10.u8);
	// lbz r9,726(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 726);
	// stb r9,726(r3)
	PPC_STORE_U8(ctx.r3.u32 + 726, ctx.r9.u8);
	// lbz r8,727(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 727);
	// stb r8,727(r3)
	PPC_STORE_U8(ctx.r3.u32 + 727, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5200"))) PPC_WEAK_FUNC(sub_825A5200);
PPC_FUNC_IMPL(__imp__sub_825A5200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A5208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r5,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r5.u8);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_825A5270:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f11,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f10,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f9,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f8,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f7,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f6,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,84(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f5,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f4,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f3,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f2,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f1,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,104(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f0,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfsu f0,120(r10)
	ea = 120 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x825a5270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A5270;
	// lbz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 264);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,265
	ctx.r9.s64 = ctx.r30.s64 + 265;
	// addi r8,r31,265
	ctx.r8.s64 = ctx.r31.s64 + 265;
	// stb r7,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A5384:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a5384
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A5384;
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x825a4ee8
	ctx.lr = 0x825A53A0;
	sub_825A4EE8(ctx, base);
	// addi r11,r31,1016
	ctx.r11.s64 = ctx.r31.s64 + 1016;
	// li r10,20
	ctx.r10.s64 = 20;
loc_825A53A8:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x825a53a8
	if (!cr0.eq) goto loc_825A53A8;
	// lfs f0,1256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lfs f13,1260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// lfs f12,1264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1264(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// lfs f11,1268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1268(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A53FC"))) PPC_WEAK_FUNC(sub_825A53FC);
PPC_FUNC_IMPL(__imp__sub_825A53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5400"))) PPC_WEAK_FUNC(sub_825A5400);
PPC_FUNC_IMPL(__imp__sub_825A5400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A5408;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,924
	ctx.r4.s64 = 924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A5430;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5448
	if (cr6.eq) goto loc_825A5448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b4e80
	ctx.lr = 0x825A5440;
	sub_825B4E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825a544c
	goto loc_825A544C;
loc_825A5448:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825A544C:
	// stw r31,1020(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1020, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825a54a4
	if (cr6.eq) goto loc_825A54A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A546C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r7,r9,-25760
	ctx.r7.s64 = ctx.r9.s64 + -25760;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A54A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A54A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A54AC"))) PPC_WEAK_FUNC(sub_825A54AC);
PPC_FUNC_IMPL(__imp__sub_825A54AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A54B0"))) PPC_WEAK_FUNC(sub_825A54B0);
PPC_FUNC_IMPL(__imp__sub_825A54B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A54B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A54DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a553c
	if (cr6.eq) goto loc_825A553C;
	// bl 0x825b8a60
	ctx.lr = 0x825A54E8;
	sub_825B8A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5534
	if (cr6.eq) goto loc_825A5534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b9870
	ctx.lr = 0x825A54FC;
	sub_825B9870(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,-25752
	ctx.r9.s64 = ctx.r11.s64 + -25752;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825A5530;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A5534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A553C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5548"))) PPC_WEAK_FUNC(sub_825A5548);
PPC_FUNC_IMPL(__imp__sub_825A5548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825A5550;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5710
	if (cr6.eq) goto loc_825A5710;
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
	ctx.lr = 0x825A5588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8291bce0
	ctx.lr = 0x825A5594;
	sub_8291BCE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825832f8
	ctx.lr = 0x825A55A0;
	sub_825832F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83131d70
	ctx.lr = 0x825A55AC;
	sub_83131D70(ctx, base);
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x825a55c8
	if (!cr6.eq) goto loc_825A55C8;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_825A55C8:
	// bl 0x8291bd18
	ctx.lr = 0x825A55CC;
	sub_8291BD18(ctx, base);
	// li r31,32
	ctx.r31.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A55E4;
	sub_82595718(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a55fc
	if (cr6.eq) goto loc_825A55FC;
	// bl 0x8291bfb0
	ctx.lr = 0x825A55F4;
	sub_8291BFB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825a5600
	goto loc_825A5600;
loc_825A55FC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825A5600:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A5614;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a563c
	if (cr6.eq) goto loc_825A563C;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8291c7d0
	ctx.lr = 0x825A5634;
	sub_8291C7D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825a5640
	goto loc_825A5640;
loc_825A563C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825A5640:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825a56d0
	if (cr6.eq) goto loc_825A56D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a56b4
	if (cr6.eq) goto loc_825A56B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82721308
	ctx.lr = 0x825A565C;
	sub_82721308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291bd90
	ctx.lr = 0x825A5668;
	sub_8291BD90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825A5674;
	sub_825AE6C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25640
	ctx.r4.s64 = ctx.r11.s64 + -25640;
	// bl 0x8259afd8
	ctx.lr = 0x825A5684;
	sub_8259AFD8(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A56A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x825A56AC;
	sub_83102DB0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825A56B4:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x825A56C4;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a56f0
	goto loc_825A56F0;
loc_825A56D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a5708
	if (cr6.eq) goto loc_825A5708;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x825A56E8;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A56F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A5700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x825A5708;
	sub_82595170(ctx, base);
loc_825A5708:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x825A5710;
	sub_83102DB0(ctx, base);
loc_825A5710:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5718"))) PPC_WEAK_FUNC(sub_825A5718);
PPC_FUNC_IMPL(__imp__sub_825A5718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825A5720;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5858
	if (cr6.eq) goto loc_825A5858;
	// li r31,32
	ctx.r31.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A5750;
	sub_82595718(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5768
	if (cr6.eq) goto loc_825A5768;
	// bl 0x8291bfb0
	ctx.lr = 0x825A5760;
	sub_8291BFB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825a576c
	goto loc_825A576C;
loc_825A5768:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825A576C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A5780;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5794
	if (cr6.eq) goto loc_825A5794;
	// bl 0x8291cad0
	ctx.lr = 0x825A578C;
	sub_8291CAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825a5798
	goto loc_825A5798;
loc_825A5794:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825A5798:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825a5820
	if (cr6.eq) goto loc_825A5820;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a5804
	if (cr6.eq) goto loc_825A5804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82721308
	ctx.lr = 0x825A57B4;
	sub_82721308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291bd90
	ctx.lr = 0x825A57C0;
	sub_8291BD90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825A57CC;
	sub_825AE6C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25632
	ctx.r4.s64 = ctx.r11.s64 + -25632;
	// bl 0x8259afd8
	ctx.lr = 0x825A57DC;
	sub_8259AFD8(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A57FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825A5804:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x825A5814;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a5840
	goto loc_825A5840;
loc_825A5820:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a5858
	if (cr6.eq) goto loc_825A5858;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x825A5838;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A5840:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A5850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x825A5858;
	sub_82595170(ctx, base);
loc_825A5858:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5860"))) PPC_WEAK_FUNC(sub_825A5860);
PPC_FUNC_IMPL(__imp__sub_825A5860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825A5868;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,32
	ctx.r26.s64 = 32;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// bl 0x82595718
	ctx.lr = 0x825A5898;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r25,r11,-25656
	ctx.r25.s64 = ctx.r11.s64 + -25656;
	// beq cr6,0x825a58e8
	if (cr6.eq) goto loc_825A58E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825badd0
	ctx.lr = 0x825A58B0;
	sub_825BADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a58e8
	if (cr6.eq) goto loc_825A58E8;
	// addi r11,r25,-5812
	ctx.r11.s64 = ctx.r25.s64 + -5812;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A58E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A58E8:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,696
	ctx.r4.s64 = 696;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825A5900;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5948
	if (cr6.eq) goto loc_825A5948;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825bac20
	ctx.lr = 0x825A5910;
	sub_825BAC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5948
	if (cr6.eq) goto loc_825A5948;
	// addi r11,r25,-5684
	ctx.r11.s64 = ctx.r25.s64 + -5684;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A5948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5948:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a5bb0
	if (!cr6.eq) goto loc_825A5BB0;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,772
	ctx.r4.s64 = 772;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x825A596C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5ad4
	if (cr6.eq) goto loc_825A5AD4;
	// bl 0x825afba8
	ctx.lr = 0x825A5978;
	sub_825AFBA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a59bc
	if (cr6.eq) goto loc_825A59BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825ae5f8
	ctx.lr = 0x825A598C;
	sub_825AE5F8(ctx, base);
	// addi r11,r25,-40
	ctx.r11.s64 = ctx.r25.s64 + -40;
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825A59BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A59BC:
	// stw r28,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82a13948
	ctx.lr = 0x825A59C8;
	sub_82A13948(ctx, base);
	// addi r27,r31,132
	ctx.r27.s64 = ctx.r31.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a12748
	ctx.lr = 0x825A59D4;
	sub_82A12748(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a5548
	ctx.lr = 0x825A59EC;
	sub_825A5548(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a5548
	ctx.lr = 0x825A5A08;
	sub_825A5548(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a5548
	ctx.lr = 0x825A5A24;
	sub_825A5548(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a5548
	ctx.lr = 0x825A5A40;
	sub_825A5548(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a5718
	ctx.lr = 0x825A5A54;
	sub_825A5718(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83095648
	ctx.lr = 0x825A5A60;
	sub_83095648(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5a98
	if (cr6.eq) goto loc_825A5A98;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A5A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5A98:
	// stw r28,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
	// bl 0x82a0cc80
	ctx.lr = 0x825A5AA8;
	sub_82A0CC80(ctx, base);
	// bl 0x82a0d0d8
	ctx.lr = 0x825A5AAC;
	sub_82A0D0D8(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,664
	ctx.r4.s64 = 664;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x825A5AC0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5adc
	if (cr6.eq) goto loc_825A5ADC;
	// bl 0x825b0c50
	ctx.lr = 0x825A5ACC;
	sub_825B0C50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825a5ae0
	goto loc_825A5AE0;
loc_825A5AD4:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x825a59bc
	goto loc_825A59BC;
loc_825A5ADC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A5AE0:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// li r4,656
	ctx.r4.s64 = 656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x825A5AF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5b0c
	if (cr6.eq) goto loc_825A5B0C;
	// bl 0x825ba020
	ctx.lr = 0x825A5B04;
	sub_825BA020(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x825a5b10
	goto loc_825A5B10;
loc_825A5B0C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825A5B10:
	// stw r28,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a5bb0
	if (cr6.eq) goto loc_825A5BB0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x825A5B30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5b9c
	if (cr6.eq) goto loc_825A5B9C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825ba938
	ctx.lr = 0x825A5B40;
	sub_825BA938(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5b9c
	if (cr6.eq) goto loc_825A5B9C;
	// bl 0x83102db0
	ctx.lr = 0x825A5B50;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba588
	ctx.lr = 0x825A5B5C;
	sub_825BA588(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// bl 0x825ba5a8
	ctx.lr = 0x825A5B68;
	sub_825BA5A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba098
	ctx.lr = 0x825A5B70;
	sub_825BA098(ctx, base);
	// addi r4,r25,32
	ctx.r4.s64 = ctx.r25.s64 + 32;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8259afd8
	ctx.lr = 0x825A5B7C;
	sub_8259AFD8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A5B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5B9C:
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5bb0
	if (cr6.eq) goto loc_825A5BB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825A5BB0;
	sub_825AE6C0(ctx, base);
loc_825A5BB0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5BB8"))) PPC_WEAK_FUNC(sub_825A5BB8);
PPC_FUNC_IMPL(__imp__sub_825A5BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,6684
	ctx.r3.s64 = ctx.r11.s64 + 6684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5BC4"))) PPC_WEAK_FUNC(sub_825A5BC4);
PPC_FUNC_IMPL(__imp__sub_825A5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5BC8"))) PPC_WEAK_FUNC(sub_825A5BC8);
PPC_FUNC_IMPL(__imp__sub_825A5BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,8888
	ctx.r3.s64 = ctx.r11.s64 + 8888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5BD4"))) PPC_WEAK_FUNC(sub_825A5BD4);
PPC_FUNC_IMPL(__imp__sub_825A5BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5BD8"))) PPC_WEAK_FUNC(sub_825A5BD8);
PPC_FUNC_IMPL(__imp__sub_825A5BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5BE4"))) PPC_WEAK_FUNC(sub_825A5BE4);
PPC_FUNC_IMPL(__imp__sub_825A5BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5BE8"))) PPC_WEAK_FUNC(sub_825A5BE8);
PPC_FUNC_IMPL(__imp__sub_825A5BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-20768
	ctx.r3.s64 = ctx.r3.s64 + -20768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5BF8"))) PPC_WEAK_FUNC(sub_825A5BF8);
PPC_FUNC_IMPL(__imp__sub_825A5BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5C04"))) PPC_WEAK_FUNC(sub_825A5C04);
PPC_FUNC_IMPL(__imp__sub_825A5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5C08"))) PPC_WEAK_FUNC(sub_825A5C08);
PPC_FUNC_IMPL(__imp__sub_825A5C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-10208
	ctx.r3.s64 = ctx.r3.s64 + -10208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5C18"))) PPC_WEAK_FUNC(sub_825A5C18);
PPC_FUNC_IMPL(__imp__sub_825A5C18) {
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
loc_825A5C34:
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
	// bne 0x825a5c34
	if (!cr0.eq) goto loc_825A5C34;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a5c80
	if (!cr6.eq) goto loc_825A5C80;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A5C60;
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
	ctx.lr = 0x825A5C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5C80:
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

__attribute__((alias("__imp__sub_825A5C98"))) PPC_WEAK_FUNC(sub_825A5C98);
PPC_FUNC_IMPL(__imp__sub_825A5C98) {
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
loc_825A5CB4:
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
	// bne 0x825a5cb4
	if (!cr0.eq) goto loc_825A5CB4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a5d00
	if (!cr6.eq) goto loc_825A5D00;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A5CE0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,19664
	ctx.r5.s64 = ctx.r11.s64 + 19664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A5D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5D00:
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

__attribute__((alias("__imp__sub_825A5D18"))) PPC_WEAK_FUNC(sub_825A5D18);
PPC_FUNC_IMPL(__imp__sub_825A5D18) {
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
loc_825A5D34:
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
	// bne 0x825a5d34
	if (!cr0.eq) goto loc_825A5D34;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825a5d80
	if (!cr6.eq) goto loc_825A5D80;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a5d80
	if (cr6.eq) goto loc_825A5D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3498
	ctx.lr = 0x825A5D6C;
	sub_825A3498(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A5D80;
	sub_825952B8(ctx, base);
loc_825A5D80:
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

__attribute__((alias("__imp__sub_825A5D94"))) PPC_WEAK_FUNC(sub_825A5D94);
PPC_FUNC_IMPL(__imp__sub_825A5D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5D98"))) PPC_WEAK_FUNC(sub_825A5D98);
PPC_FUNC_IMPL(__imp__sub_825A5D98) {
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
loc_825A5DB4:
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
	// bne 0x825a5db4
	if (!cr0.eq) goto loc_825A5DB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825a5e00
	if (!cr6.eq) goto loc_825A5E00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a5e00
	if (cr6.eq) goto loc_825A5E00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3508
	ctx.lr = 0x825A5DEC;
	sub_825A3508(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A5E00;
	sub_825952B8(ctx, base);
loc_825A5E00:
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

__attribute__((alias("__imp__sub_825A5E14"))) PPC_WEAK_FUNC(sub_825A5E14);
PPC_FUNC_IMPL(__imp__sub_825A5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5E18"))) PPC_WEAK_FUNC(sub_825A5E18);
PPC_FUNC_IMPL(__imp__sub_825A5E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A5E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825A5E30:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825a5e30
	if (!cr0.eq) goto loc_825A5E30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825a5e9c
	if (!cr6.eq) goto loc_825A5E9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825a5e9c
	if (cr6.eq) goto loc_825A5E9C;
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r31,-20420
	ctx.r31.s64 = ctx.r31.s64 + -20420;
	// ori r29,r11,55324
	ctx.r29.u64 = ctx.r11.u64 | 55324;
loc_825A5E74:
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825A5E80;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825a5e74
	if (!cr0.lt) goto loc_825A5E74;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A5E9C;
	sub_825952B8(ctx, base);
loc_825A5E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5EA4"))) PPC_WEAK_FUNC(sub_825A5EA4);
PPC_FUNC_IMPL(__imp__sub_825A5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5EA8"))) PPC_WEAK_FUNC(sub_825A5EA8);
PPC_FUNC_IMPL(__imp__sub_825A5EA8) {
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
	// li r5,4456
	ctx.r5.s64 = 4456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A5ECC;
	sub_831CE980(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,4468
	ctx.r11.s64 = ctx.r30.s64 + 4468;
	// addi r10,r31,4468
	ctx.r10.s64 = ctx.r31.s64 + 4468;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,4456(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// stw r9,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r9.u32);
	// lwz r8,4460(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// stw r8,4460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4460, ctx.r8.u32);
	// lwz r7,4464(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	// stw r7,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r7.u32);
	// lwz r6,4468(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// stw r6,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r6.u32);
loc_825A5EFC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825a5efc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A5EFC;
	// addi r4,r30,4496
	ctx.r4.s64 = ctx.r30.s64 + 4496;
	// addi r3,r31,4496
	ctx.r3.s64 = ctx.r31.s64 + 4496;
	// bl 0x825a4738
	ctx.lr = 0x825A5F14;
	sub_825A4738(ctx, base);
	// addi r4,r30,4556
	ctx.r4.s64 = ctx.r30.s64 + 4556;
	// addi r3,r31,4556
	ctx.r3.s64 = ctx.r31.s64 + 4556;
	// bl 0x825a4838
	ctx.lr = 0x825A5F20;
	sub_825A4838(ctx, base);
	// addi r11,r30,5116
	ctx.r11.s64 = ctx.r30.s64 + 5116;
	// addi r11,r31,5116
	ctx.r11.s64 = ctx.r31.s64 + 5116;
	// addi r4,r30,5192
	ctx.r4.s64 = ctx.r30.s64 + 5192;
	// addi r3,r31,5192
	ctx.r3.s64 = ctx.r31.s64 + 5192;
	// li r5,148
	ctx.r5.s64 = 148;
	// lwz r11,5116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5116);
	// stw r11,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r11.u32);
	// lbz r10,5120(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5120);
	// stb r10,5120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5120, ctx.r10.u8);
	// lwz r9,5124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5124);
	// stw r9,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r9.u32);
	// lwz r8,5128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5128);
	// stw r8,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r8.u32);
	// lwz r7,5132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// stw r7,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r7.u32);
	// lwz r6,5136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5136);
	// stw r6,5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5136, ctx.r6.u32);
	// lwz r11,5140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5140);
	// stw r11,5140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5140, ctx.r11.u32);
	// lwz r10,5144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5144);
	// stw r10,5144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5144, ctx.r10.u32);
	// lwz r9,5148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5148);
	// stw r9,5148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5148, ctx.r9.u32);
	// lfs f0,5152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// lfs f13,5156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5156);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// lfs f12,5160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,5160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// lbz r8,5164(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5164);
	// stb r8,5164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5164, ctx.r8.u8);
	// lbz r7,5165(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5165);
	// stb r7,5165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5165, ctx.r7.u8);
	// lfs f11,5168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,5168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5168, temp.u32);
	// lfs f10,5172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5172);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,5172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5172, temp.u32);
	// lwz r6,5176(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5176);
	// stw r6,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r6.u32);
	// lwz r11,5180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5180);
	// stw r11,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r11.u32);
	// lwz r10,5184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5184);
	// stw r10,5184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5184, ctx.r10.u32);
	// lwz r9,5188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5188);
	// stw r9,5188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5188, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x825A5FD8;
	sub_831CE980(ctx, base);
	// lwz r8,5340(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5340);
	// addi r4,r30,5356
	ctx.r4.s64 = ctx.r30.s64 + 5356;
	// addi r3,r31,5356
	ctx.r3.s64 = ctx.r31.s64 + 5356;
	// stw r8,5340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5340, ctx.r8.u32);
	// lwz r7,5344(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5344);
	// stw r7,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r7.u32);
	// lwz r6,5348(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5348);
	// stw r6,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r6.u32);
	// lwz r5,5352(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stw r5,5352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5352, ctx.r5.u32);
	// bl 0x82a19bd0
	ctx.lr = 0x825A6004;
	sub_82A19BD0(ctx, base);
	// addi r4,r30,5404
	ctx.r4.s64 = ctx.r30.s64 + 5404;
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x825A6014;
	sub_831CE980(ctx, base);
	// addi r4,r30,5464
	ctx.r4.s64 = ctx.r30.s64 + 5464;
	// addi r3,r31,5464
	ctx.r3.s64 = ctx.r31.s64 + 5464;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x831ce980
	ctx.lr = 0x825A6024;
	sub_831CE980(ctx, base);
	// addi r4,r30,5644
	ctx.r4.s64 = ctx.r30.s64 + 5644;
	// addi r3,r31,5644
	ctx.r3.s64 = ctx.r31.s64 + 5644;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x831ce980
	ctx.lr = 0x825A6034;
	sub_831CE980(ctx, base);
	// addi r4,r30,5692
	ctx.r4.s64 = ctx.r30.s64 + 5692;
	// addi r3,r31,5692
	ctx.r3.s64 = ctx.r31.s64 + 5692;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x831ce980
	ctx.lr = 0x825A6044;
	sub_831CE980(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,5740(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r9,r30,5768
	ctx.r9.s64 = ctx.r30.s64 + 5768;
	// addi r8,r31,5768
	ctx.r8.s64 = ctx.r31.s64 + 5768;
	// stw r4,5740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5740, ctx.r4.u32);
	// lwz r3,5744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// stw r3,5744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5744, ctx.r3.u32);
	// lwz r10,5748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// stw r10,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r10.u32);
	// lwz r7,5752(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// stw r7,5752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5752, ctx.r7.u32);
	// lwz r6,5756(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// stw r6,5756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5756, ctx.r6.u32);
	// lwz r5,5760(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// stw r5,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r5.u32);
	// lfs f9,5764(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,5764(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5764, temp.u32);
loc_825A6090:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a6090
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A6090;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,5790
	ctx.r9.s64 = ctx.r30.s64 + 5790;
	// addi r8,r31,5790
	ctx.r8.s64 = ctx.r31.s64 + 5790;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A60B4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a60b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A60B4;
	// lbz r11,5812(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5812);
	// addi r4,r30,5868
	ctx.r4.s64 = ctx.r30.s64 + 5868;
	// addi r3,r31,5868
	ctx.r3.s64 = ctx.r31.s64 + 5868;
	// stb r11,5812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5812, ctx.r11.u8);
	// lbz r10,5813(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5813);
	// stb r10,5813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5813, ctx.r10.u8);
	// lbz r9,5814(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5814);
	// stb r9,5814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5814, ctx.r9.u8);
	// lbz r8,5815(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5815);
	// stb r8,5815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5815, ctx.r8.u8);
	// lbz r7,5816(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5816);
	// stb r7,5816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5816, ctx.r7.u8);
	// lbz r6,5817(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5817);
	// stb r6,5817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5817, ctx.r6.u8);
	// lhz r5,5818(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 5818);
	// sth r5,5818(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5818, ctx.r5.u16);
	// lbz r11,5820(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5820);
	// stb r11,5820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5820, ctx.r11.u8);
	// lbz r10,5821(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5821);
	// stb r10,5821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5821, ctx.r10.u8);
	// lbz r9,5822(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5822);
	// stb r9,5822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5822, ctx.r9.u8);
	// lwz r8,5824(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// stw r8,5824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5824, ctx.r8.u32);
	// lwz r7,5828(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// stw r7,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r7.u32);
	// lbz r6,5832(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5832);
	// stb r6,5832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5832, ctx.r6.u8);
	// lwz r5,5836(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// stw r5,5836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5836, ctx.r5.u32);
	// lwz r11,5840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// stw r11,5840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5840, ctx.r11.u32);
	// lwz r10,5844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// stw r10,5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5844, ctx.r10.u32);
	// lwz r9,5848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// stw r9,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r9.u32);
	// lwz r8,5852(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// stw r8,5852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5852, ctx.r8.u32);
	// lwz r7,5856(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// stw r7,5856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5856, ctx.r7.u32);
	// lfs f0,5860(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5860, temp.u32);
	// lbz r6,5864(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5864);
	// stb r6,5864(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5864, ctx.r6.u8);
	// lbz r5,5865(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5865);
	// stb r5,5865(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5865, ctx.r5.u8);
	// lbz r11,5866(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5866);
	// stb r11,5866(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5866, ctx.r11.u8);
	// bl 0x825a4b60
	ctx.lr = 0x825A6188;
	sub_825A4B60(ctx, base);
	// lwz r10,8876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8876);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8876, ctx.r10.u32);
	// lbz r9,8880(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8880);
	// stb r9,8880(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8880, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_825A61B4"))) PPC_WEAK_FUNC(sub_825A61B4);
PPC_FUNC_IMPL(__imp__sub_825A61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A61B8"))) PPC_WEAK_FUNC(sub_825A61B8);
PPC_FUNC_IMPL(__imp__sub_825A61B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825A61C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r4,20
	ctx.r28.s64 = ctx.r4.s64 + 20;
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// subf r26,r3,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r27,40
	ctx.r27.s64 = 40;
loc_825A61DC:
	// lwz r11,-20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,-28(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28, ctx.r11.u32);
	// lwz r10,-16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// stw r10,-24(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24, ctx.r10.u32);
	// lwz r9,-12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// stw r9,-20(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20, ctx.r9.u32);
	// lwz r8,-8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// stw r8,-16(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16, ctx.r8.u32);
	// lbz r7,-4(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + -4);
	// stb r7,-12(r29)
	PPC_STORE_U8(ctx.r29.u32 + -12, ctx.r7.u8);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r6.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// lfsx f13,r26,r29
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f12,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f11,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// bl 0x825a5200
	ctx.lr = 0x825A6238;
	sub_825A5200(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,1312
	ctx.r28.s64 = ctx.r28.s64 + 1312;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// bne 0x825a61dc
	if (!cr0.eq) goto loc_825A61DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r11,r11,52480
	ctx.r11.u64 = ctx.r11.u64 | 52480;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_825A626C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825a626c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A626C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,80
	ctx.r5.s64 = 80;
	// ori r11,r11,52520
	ctx.r11.u64 = ctx.r11.u64 | 52520;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A6290;
	sub_831CE980(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,52600
	ctx.r10.u64 = ctx.r10.u64 | 52600;
	// ori r11,r9,52604
	ctx.r11.u64 = ctx.r9.u64 | 52604;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-12924
	ctx.r11.s64 = ctx.r11.s64 + -12924;
	// stbx r4,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwzx r3,r30,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
loc_825A62D4:
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f11,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f10,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f9,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f8,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f7,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f6,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,84(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f5,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f4,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f3,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f2,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f1,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,104(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f0,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfsu f0,120(r10)
	ea = 120 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x825a62d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A62D4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,52848
	ctx.r11.u64 = ctx.r11.u64 | 52848;
	// lis r7,0
	ctx.r7.s64 = 0;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ori r29,r10,52860
	ctx.r29.u64 = ctx.r10.u64 | 52860;
	// ori r3,r7,52864
	ctx.r3.u64 = ctx.r7.u64 | 52864;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ori r4,r6,52868
	ctx.r4.u64 = ctx.r6.u64 | 52868;
	// ori r5,r5,52872
	ctx.r5.u64 = ctx.r5.u64 | 52872;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r11,52876
	ctx.r6.u64 = ctx.r11.u64 | 52876;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// ori r7,r9,52880
	ctx.r7.u64 = ctx.r9.u64 | 52880;
	// ori r9,r11,52885
	ctx.r9.u64 = ctx.r11.u64 | 52885;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52892
	ctx.r11.u64 = ctx.r11.u64 | 52892;
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r8,r30,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lis r29,0
	ctx.r29.s64 = 0;
	// stwx r8,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// ori r8,r10,52884
	ctx.r8.u64 = ctx.r10.u64 | 52884;
	// lwzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// ori r10,r29,52888
	ctx.r10.u64 = ctx.r29.u64 | 52888;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwzx r3,r30,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lbzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r7,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lbzx r8,r30,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r11,r11,-12636
	ctx.r11.s64 = ctx.r11.s64 + -12636;
	// stbx r8,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwzx r7,r30,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r7,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
loc_825A64C4:
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lbz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lbz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stb r5,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r5.u8);
	// lfs f6,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f4,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f3,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r4,68(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// lbz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// stb r3,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r3.u8);
	// lfs f2,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f1,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f13,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lbz r7,96(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// stb r7,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r7.u8);
	// lfs f12,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f11,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f10,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f9,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r6,116(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r6,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// lbz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// stb r5,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r5.u8);
	// lfs f8,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,116(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f7,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,120(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f6,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,124(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f5,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,128(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lwz r4,140(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r4,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// lbz r3,144(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// stb r3,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r3.u8);
	// lfs f4,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,140(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f3,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,144(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f2,156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,148(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lfs f1,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,152(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// stw r9,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
	// lbz r7,168(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 168);
	// stb r7,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r7.u8);
	// lfs f0,172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f13,176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f12,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f11,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,176(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r6,188(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// stw r6,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r6.u32);
	// lbz r5,192(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// stb r5,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r5.u8);
	// lfs f10,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,188(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lfs f9,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,192(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f8,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,196(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lfs f7,208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,200(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lwz r4,212(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// stw r4,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r4.u32);
	// lbz r3,216(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 216);
	// stb r3,208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 208, ctx.r3.u8);
	// lfs f6,220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,212(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lfs f5,224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,216(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lfs f4,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// lfs f3,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// lwz r9,236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// stw r9,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// lbzu r9,240(r10)
	ea = 240 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r9.u8);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// bdnz 0x825a64c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A64C4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// ori r11,r11,54336
	ctx.r11.u64 = ctx.r11.u64 | 54336;
	// addi r10,r10,-11184
	ctx.r10.s64 = ctx.r10.s64 + -11184;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// lbzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-11192
	ctx.r11.s64 = ctx.r11.s64 + -11192;
	// stbx r6,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
loc_825A66D8:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r6,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r6.u8);
	// lbz r5,9(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r5,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r5.u8);
	// lbz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r4,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r4.u8);
	// lbz r3,11(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r3,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r3.u8);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lbz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r6,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r6.u8);
	// lbz r5,33(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// stb r5,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r5.u8);
	// lbz r4,34(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// stb r4,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r4.u8);
	// lbz r3,35(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r3,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r3.u8);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lbz r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// stb r6,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r6.u8);
	// lbz r5,57(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// stb r5,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r5.u8);
	// lbz r4,58(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 58);
	// stb r4,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r4.u8);
	// lbz r3,59(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 59);
	// stb r3,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r3.u8);
	// lfs f2,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f1,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r7,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
	// lbz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// stb r6,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r6.u8);
	// lbz r5,81(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// stb r5,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r5.u8);
	// lbz r4,82(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 82);
	// stb r4,90(r11)
	PPC_STORE_U8(ctx.r11.u32 + 90, ctx.r4.u8);
	// lbz r3,83(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 83);
	// stb r3,91(r11)
	PPC_STORE_U8(ctx.r11.u32 + 91, ctx.r3.u8);
	// lfs f12,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f11,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f10,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f9,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r7,100(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// stb r6,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r6.u8);
	// lbz r5,105(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// stb r5,113(r11)
	PPC_STORE_U8(ctx.r11.u32 + 113, ctx.r5.u8);
	// lbz r4,106(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 106);
	// stb r4,114(r11)
	PPC_STORE_U8(ctx.r11.u32 + 114, ctx.r4.u8);
	// lbz r3,107(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 107);
	// stb r3,115(r11)
	PPC_STORE_U8(ctx.r11.u32 + 115, ctx.r3.u8);
	// lfs f8,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,116(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f7,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,120(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f6,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,124(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f5,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,128(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lwz r7,124(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// stw r7,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r7.u32);
	// lbz r6,128(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 128);
	// stb r6,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r6.u8);
	// lbz r5,129(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 129);
	// stb r5,137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 137, ctx.r5.u8);
	// lbz r4,130(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 130);
	// stb r4,138(r11)
	PPC_STORE_U8(ctx.r11.u32 + 138, ctx.r4.u8);
	// lbz r3,131(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 131);
	// stb r3,139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 139, ctx.r3.u8);
	// lfs f4,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,140(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f3,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,144(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f2,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,148(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lfs f1,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,152(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r7,148(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// stw r7,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r7.u32);
	// lbz r6,152(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 152);
	// stb r6,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r6.u8);
	// lbz r5,153(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 153);
	// stb r5,161(r11)
	PPC_STORE_U8(ctx.r11.u32 + 161, ctx.r5.u8);
	// lbz r4,154(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 154);
	// stb r4,162(r11)
	PPC_STORE_U8(ctx.r11.u32 + 162, ctx.r4.u8);
	// lbz r3,155(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 155);
	// stb r3,163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 163, ctx.r3.u8);
	// lfs f0,156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f13,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f12,164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f11,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,176(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r7,172(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// stw r7,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r7.u32);
	// lbz r6,176(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 176);
	// stb r6,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r6.u8);
	// lbz r5,177(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// stb r5,185(r11)
	PPC_STORE_U8(ctx.r11.u32 + 185, ctx.r5.u8);
	// lbz r4,178(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 178);
	// stb r4,186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 186, ctx.r4.u8);
	// lbz r3,179(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 179);
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// stb r3,187(r11)
	PPC_STORE_U8(ctx.r11.u32 + 187, ctx.r3.u8);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bne 0x825a66d8
	if (!cr0.eq) goto loc_825A66D8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,54724
	ctx.r11.u64 = ctx.r11.u64 | 54724;
	// ori r6,r10,54728
	ctx.r6.u64 = ctx.r10.u64 | 54728;
	// lis r3,0
	ctx.r3.s64 = 0;
	// add r5,r30,r6
	ctx.r5.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// ori r7,r3,54748
	ctx.r7.u64 = ctx.r3.u64 | 54748;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r29,r31,r7
	ctx.r29.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,54768
	ctx.r8.u64 = ctx.r9.u64 | 54768;
	// ori r9,r11,54788
	ctx.r9.u64 = ctx.r11.u64 | 54788;
	// add r28,r30,r8
	ctx.r28.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r27,r31,r8
	ctx.r27.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r26,r30,r9
	ctx.r26.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r25,r31,r9
	ctx.r25.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,54808
	ctx.r10.u64 = ctx.r10.u64 | 54808;
	// ori r11,r11,54828
	ctx.r11.u64 = ctx.r11.u64 | 54828;
	// add r24,r30,r10
	ctx.r24.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r23,r31,r10
	ctx.r23.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lis r22,0
	ctx.r22.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// add r20,r30,r11
	ctx.r20.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfsx f0,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r22,54848
	ctx.r11.u64 = ctx.r22.u64 | 54848;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfsx f9,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r31,r7
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lfsx f4,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f4,r31,r8
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f3,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f2,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,8(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f1,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,12(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f0,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r31,r21
	ctx.r28.u64 = ctx.r31.u64 + ctx.r21.u64;
	// stfs f0,16(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r31,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f11,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// lfs f10,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lfs f9,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r25)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// lfsx f8,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f8,r31,r10
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f7,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r23)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// lfs f6,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r23)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// lfs f5,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,12(r23)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
	// lfs f4,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stfs f4,16(r23)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + 16, temp.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r29,r10,54852
	ctx.r29.u64 = ctx.r10.u64 | 54852;
	// ori r3,r9,54856
	ctx.r3.u64 = ctx.r9.u64 | 54856;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r4,r8,54860
	ctx.r4.u64 = ctx.r8.u64 | 54860;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,54864
	ctx.r5.u64 = ctx.r7.u64 | 54864;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r6,r6,54868
	ctx.r6.u64 = ctx.r6.u64 | 54868;
	// ori r7,r3,54872
	ctx.r7.u64 = ctx.r3.u64 | 54872;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,54876
	ctx.r8.u64 = ctx.r11.u64 | 54876;
	// ori r9,r10,54880
	ctx.r9.u64 = ctx.r10.u64 | 54880;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f3,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// ori r10,r3,54884
	ctx.r10.u64 = ctx.r3.u64 | 54884;
	// stfs f3,0(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// ori r11,r11,54888
	ctx.r11.u64 = ctx.r11.u64 | 54888;
	// lfs f2,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f2,4(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f1,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f0,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lfs f13,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lwzx r28,r30,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// stwx r28,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r28.u32);
	// lwzx r28,r30,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// lwzx r29,r30,r22
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// stwx r29,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r29.u32);
	// lwzx r29,r30,r4
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// lwzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stbx r4,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6B5C"))) PPC_WEAK_FUNC(sub_825A6B5C);
PPC_FUNC_IMPL(__imp__sub_825A6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6B60"))) PPC_WEAK_FUNC(sub_825A6B60);
PPC_FUNC_IMPL(__imp__sub_825A6B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A6B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x825a6ba8
	if (cr6.eq) goto loc_825A6BA8;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_825A6B80:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a6b98
	if (cr6.eq) goto loc_825A6B98;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x825A6B98;
	sub_831CE980(ctx, base);
loc_825A6B98:
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x825a6b80
	if (!cr6.eq) goto loc_825A6B80;
loc_825A6BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6BB4"))) PPC_WEAK_FUNC(sub_825A6BB4);
PPC_FUNC_IMPL(__imp__sub_825A6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6BB8"))) PPC_WEAK_FUNC(sub_825A6BB8);
PPC_FUNC_IMPL(__imp__sub_825A6BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a5c18
	sub_825A5C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6BBC"))) PPC_WEAK_FUNC(sub_825A6BBC);
PPC_FUNC_IMPL(__imp__sub_825A6BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6BC0"))) PPC_WEAK_FUNC(sub_825A6BC0);
PPC_FUNC_IMPL(__imp__sub_825A6BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a5c98
	sub_825A5C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6BC4"))) PPC_WEAK_FUNC(sub_825A6BC4);
PPC_FUNC_IMPL(__imp__sub_825A6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6BC8"))) PPC_WEAK_FUNC(sub_825A6BC8);
PPC_FUNC_IMPL(__imp__sub_825A6BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A6BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a6c60
	if (cr6.eq) goto loc_825A6C60;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a6c54
	if (!cr6.eq) goto loc_825A6C54;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,13364
	ctx.r4.s64 = 13364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A6C04;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6c34
	if (cr6.eq) goto loc_825A6C34;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A6C1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16658
	ctx.lr = 0x825A6C24;
	sub_82A16658(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,6680
	ctx.r30.s64 = ctx.r30.s64 + 6680;
	// bge 0x825a6c1c
	if (!cr0.lt) goto loc_825A6C1C;
	// b 0x825a6c38
	goto loc_825A6C38;
loc_825A6C34:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A6C38:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825a6c54
	if (!cr6.eq) goto loc_825A6C54;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6C60:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6c70
	if (cr6.eq) goto loc_825A6C70;
	// bl 0x825df578
	ctx.lr = 0x825A6C70;
	sub_825DF578(ctx, base);
loc_825A6C70:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,13364
	ctx.r4.s64 = 13364;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A6C88;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6cb8
	if (cr6.eq) goto loc_825A6CB8;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A6CA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16658
	ctx.lr = 0x825A6CA8;
	sub_82A16658(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,6680
	ctx.r30.s64 = ctx.r30.s64 + 6680;
	// bge 0x825a6ca0
	if (!cr0.lt) goto loc_825A6CA0;
	// b 0x825a6cbc
	goto loc_825A6CBC;
loc_825A6CB8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A6CBC:
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

__attribute__((alias("__imp__sub_825A6CDC"))) PPC_WEAK_FUNC(sub_825A6CDC);
PPC_FUNC_IMPL(__imp__sub_825A6CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6CE0"))) PPC_WEAK_FUNC(sub_825A6CE0);
PPC_FUNC_IMPL(__imp__sub_825A6CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A6CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a6d78
	if (cr6.eq) goto loc_825A6D78;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a6d6c
	if (!cr6.eq) goto loc_825A6D6C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,276
	ctx.r4.s64 = 276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A6D1C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6d4c
	if (cr6.eq) goto loc_825A6D4C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A6D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16f80
	ctx.lr = 0x825A6D3C;
	sub_82A16F80(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// bge 0x825a6d34
	if (!cr0.lt) goto loc_825A6D34;
	// b 0x825a6d50
	goto loc_825A6D50;
loc_825A6D4C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A6D50:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825a6d6c
	if (!cr6.eq) goto loc_825A6D6C;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6D6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6D78:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6d88
	if (cr6.eq) goto loc_825A6D88;
	// bl 0x825df578
	ctx.lr = 0x825A6D88;
	sub_825DF578(ctx, base);
loc_825A6D88:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,276
	ctx.r4.s64 = 276;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A6DA0;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6dd0
	if (cr6.eq) goto loc_825A6DD0;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A6DB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16f80
	ctx.lr = 0x825A6DC0;
	sub_82A16F80(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// bge 0x825a6db8
	if (!cr0.lt) goto loc_825A6DB8;
	// b 0x825a6dd4
	goto loc_825A6DD4;
loc_825A6DD0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A6DD4:
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

__attribute__((alias("__imp__sub_825A6DF4"))) PPC_WEAK_FUNC(sub_825A6DF4);
PPC_FUNC_IMPL(__imp__sub_825A6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6DF8"))) PPC_WEAK_FUNC(sub_825A6DF8);
PPC_FUNC_IMPL(__imp__sub_825A6DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A6E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a6ea0
	if (cr6.eq) goto loc_825A6EA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a6e94
	if (!cr6.eq) goto loc_825A6E94;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23996
	ctx.r4.u64 = ctx.r4.u64 | 23996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A6E38;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6e74
	if (cr6.eq) goto loc_825A6E74;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,44764
	ctx.r31.u64 = ctx.r11.u64 | 44764;
loc_825A6E58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a15a98
	ctx.lr = 0x825A6E60;
	sub_82A15A98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825a6e58
	if (!cr0.lt) goto loc_825A6E58;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825a6e78
	goto loc_825A6E78;
loc_825A6E74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A6E78:
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a6e94
	if (!cr6.eq) goto loc_825A6E94;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825A6E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825A6EA0:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6eb0
	if (cr6.eq) goto loc_825A6EB0;
	// bl 0x825a5d18
	ctx.lr = 0x825A6EB0;
	sub_825A5D18(ctx, base);
loc_825A6EB0:
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23996
	ctx.r4.u64 = ctx.r4.u64 | 23996;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A6ECC;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6f08
	if (cr6.eq) goto loc_825A6F08;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,44764
	ctx.r31.u64 = ctx.r11.u64 | 44764;
loc_825A6EEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a15a98
	ctx.lr = 0x825A6EF4;
	sub_82A15A98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825a6eec
	if (!cr0.lt) goto loc_825A6EEC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825a6f0c
	goto loc_825A6F0C;
loc_825A6F08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A6F0C:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F2C"))) PPC_WEAK_FUNC(sub_825A6F2C);
PPC_FUNC_IMPL(__imp__sub_825A6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6F30"))) PPC_WEAK_FUNC(sub_825A6F30);
PPC_FUNC_IMPL(__imp__sub_825A6F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A6F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a6fc8
	if (cr6.eq) goto loc_825A6FC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a6fbc
	if (!cr6.eq) goto loc_825A6FBC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,11084
	ctx.r4.s64 = 11084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A6F6C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6f9c
	if (cr6.eq) goto loc_825A6F9C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A6F84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18030
	ctx.lr = 0x825A6F8C;
	sub_82A18030(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,5540
	ctx.r30.s64 = ctx.r30.s64 + 5540;
	// bge 0x825a6f84
	if (!cr0.lt) goto loc_825A6F84;
	// b 0x825a6fa0
	goto loc_825A6FA0;
loc_825A6F9C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A6FA0:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825a6fbc
	if (!cr6.eq) goto loc_825A6FBC;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6FBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A6FC8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6fd8
	if (cr6.eq) goto loc_825A6FD8;
	// bl 0x825a5d98
	ctx.lr = 0x825A6FD8;
	sub_825A5D98(ctx, base);
loc_825A6FD8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,11084
	ctx.r4.s64 = 11084;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A6FF0;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7020
	if (cr6.eq) goto loc_825A7020;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A7008:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18030
	ctx.lr = 0x825A7010;
	sub_82A18030(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,5540
	ctx.r30.s64 = ctx.r30.s64 + 5540;
	// bge 0x825a7008
	if (!cr0.lt) goto loc_825A7008;
	// b 0x825a7024
	goto loc_825A7024;
loc_825A7020:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A7024:
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

__attribute__((alias("__imp__sub_825A7044"))) PPC_WEAK_FUNC(sub_825A7044);
PPC_FUNC_IMPL(__imp__sub_825A7044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7048"))) PPC_WEAK_FUNC(sub_825A7048);
PPC_FUNC_IMPL(__imp__sub_825A7048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A7050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a70f0
	if (cr6.eq) goto loc_825A70F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a70e4
	if (!cr6.eq) goto loc_825A70E4;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,45116
	ctx.r4.u64 = ctx.r4.u64 | 45116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A7088;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a70c4
	if (cr6.eq) goto loc_825A70C4;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,55324
	ctx.r31.u64 = ctx.r11.u64 | 55324;
loc_825A70A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a192c0
	ctx.lr = 0x825A70B0;
	sub_82A192C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825a70a8
	if (!cr0.lt) goto loc_825A70A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825a70c8
	goto loc_825A70C8;
loc_825A70C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A70C8:
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a70e4
	if (!cr6.eq) goto loc_825A70E4;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825A70E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825A70F0:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7100
	if (cr6.eq) goto loc_825A7100;
	// bl 0x825a5e18
	ctx.lr = 0x825A7100;
	sub_825A5E18(ctx, base);
loc_825A7100:
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,45116
	ctx.r4.u64 = ctx.r4.u64 | 45116;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A711C;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7158
	if (cr6.eq) goto loc_825A7158;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,55324
	ctx.r31.u64 = ctx.r11.u64 | 55324;
loc_825A713C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a192c0
	ctx.lr = 0x825A7144;
	sub_82A192C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825a713c
	if (!cr0.lt) goto loc_825A713C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825a715c
	goto loc_825A715C;
loc_825A7158:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A715C:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A717C"))) PPC_WEAK_FUNC(sub_825A717C);
PPC_FUNC_IMPL(__imp__sub_825A717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7180"))) PPC_WEAK_FUNC(sub_825A7180);
PPC_FUNC_IMPL(__imp__sub_825A7180) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,-20768
	ctx.r4.s64 = ctx.r4.s64 + -20768;
	// b 0x825a3550
	sub_825A3550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7194"))) PPC_WEAK_FUNC(sub_825A7194);
PPC_FUNC_IMPL(__imp__sub_825A7194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7198"))) PPC_WEAK_FUNC(sub_825A7198);
PPC_FUNC_IMPL(__imp__sub_825A7198) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,5544
	ctx.r4.s64 = ctx.r11.s64 + 5544;
	// b 0x825a4dc8
	sub_825A4DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A71A8"))) PPC_WEAK_FUNC(sub_825A71A8);
PPC_FUNC_IMPL(__imp__sub_825A71A8) {
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
loc_825A71C4:
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
	// bne 0x825a71c4
	if (!cr0.eq) goto loc_825A71C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825a7210
	if (!cr6.eq) goto loc_825A7210;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a7210
	if (cr6.eq) goto loc_825A7210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a4670
	ctx.lr = 0x825A71FC;
	sub_825A4670(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7210;
	sub_825952B8(ctx, base);
loc_825A7210:
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

__attribute__((alias("__imp__sub_825A7224"))) PPC_WEAK_FUNC(sub_825A7224);
PPC_FUNC_IMPL(__imp__sub_825A7224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7228"))) PPC_WEAK_FUNC(sub_825A7228);
PPC_FUNC_IMPL(__imp__sub_825A7228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825A7230;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// subf r27,r3,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r28,10
	ctx.r28.s64 = 10;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
loc_825A7270:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83129668
	ctx.lr = 0x825A727C;
	sub_83129668(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x825a7270
	if (!cr0.eq) goto loc_825A7270;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// li r28,10
	ctx.r28.s64 = 10;
loc_825A7290:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18ea8
	ctx.lr = 0x825A729C;
	sub_82A18EA8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x825a7290
	if (!cr0.eq) goto loc_825A7290;
	// lbz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// lbz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r7,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r7.u8);
	// bl 0x825a61b8
	ctx.lr = 0x825A72DC;
	sub_825A61B8(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r11,r5,55052
	ctx.r11.u64 = ctx.r5.u64 | 55052;
	// ori r10,r6,55048
	ctx.r10.u64 = ctx.r6.u64 | 55048;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r5,55068
	ctx.r4.u64 = ctx.r5.u64 | 55068;
	// ori r5,r11,55069
	ctx.r5.u64 = ctx.r11.u64 | 55069;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r28,r8,55056
	ctx.r28.u64 = ctx.r8.u64 | 55056;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r29,r7,55060
	ctx.r29.u64 = ctx.r7.u64 | 55060;
	// ori r3,r6,55064
	ctx.r3.u64 = ctx.r6.u64 | 55064;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ori r6,r8,55070
	ctx.r6.u64 = ctx.r8.u64 | 55070;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// ori r8,r7,55071
	ctx.r8.u64 = ctx.r7.u64 | 55071;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r23,0
	ctx.r23.s64 = 0;
	// addis r19,r30,1
	ctx.r19.s64 = ctx.r30.s64 + 65536;
	// addis r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 65536;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r9,55104
	ctx.r11.u64 = ctx.r9.u64 | 55104;
	// ori r7,r10,55072
	ctx.r7.u64 = ctx.r10.u64 | 55072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r25,r30,r7
	ctx.r25.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r24,r31,r7
	ctx.r24.u64 = ctx.r31.u64 + ctx.r7.u64;
	// ori r10,r10,55100
	ctx.r10.u64 = ctx.r10.u64 | 55100;
	// ori r9,r9,55096
	ctx.r9.u64 = ctx.r9.u64 | 55096;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// ori r11,r23,55108
	ctx.r11.u64 = ctx.r23.u64 | 55108;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// addi r19,r19,-10452
	ctx.r19.s64 = ctx.r19.s64 + -10452;
	// addi r18,r18,-10452
	ctx.r18.s64 = ctx.r18.s64 + -10452;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwzx r27,r30,r27
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// stwx r27,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r27.u32);
	// lwzx r27,r30,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r27,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u32);
	// lwzx r28,r30,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// lwzx r29,r30,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r29,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u32);
	// lbzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// stbx r3,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u8);
	// lbzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// stbx r4,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u8);
	// lbzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stbx r3,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// lbzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// stbx r6,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// lfsx f0,r30,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f11,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f11,0(r18)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f10,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stfs f10,4(r18)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// add r8,r31,r5
	ctx.r8.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lfs f9,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r18)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// lwzx r4,r30,r16
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r16.u32);
	// stwx r4,r31,r16
	PPC_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r4.u32);
	// lwzx r3,r30,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// stwx r3,r31,r20
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r3.u32);
	// lwzx r10,r30,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// stwx r10,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r10.u32);
loc_825A7434:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a7434
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A7434;
	// li r10,11
	ctx.r10.s64 = 11;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-10416
	ctx.r11.s64 = ctx.r11.s64 + -10416;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A7454:
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a7454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A7454;
	// li r9,11
	ctx.r9.s64 = 11;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-10372
	ctx.r11.s64 = ctx.r11.s64 + -10372;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A7478:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a7478
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A7478;
	// li r9,11
	ctx.r9.s64 = 11;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-10328
	ctx.r11.s64 = ctx.r11.s64 + -10328;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A7498:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a7498
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A7498;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,22
	ctx.r10.s64 = 22;
	// ori r11,r11,55252
	ctx.r11.u64 = ctx.r11.u64 | 55252;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
loc_825A74CC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825a74cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A74CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r24,300(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,55274
	ctx.r11.u64 = ctx.r11.u64 | 55274;
	// ori r10,r10,55275
	ctx.r10.u64 = ctx.r10.u64 | 55275;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r3,55276
	ctx.r11.u64 = ctx.r3.u64 | 55276;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stbx r4,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// ori r3,r4,55282
	ctx.r3.u64 = ctx.r4.u64 | 55282;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// ori r25,r10,55277
	ctx.r25.u64 = ctx.r10.u64 | 55277;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r27,r9,55279
	ctx.r27.u64 = ctx.r9.u64 | 55279;
	// ori r26,r5,55278
	ctx.r26.u64 = ctx.r5.u64 | 55278;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// ori r28,r8,55280
	ctx.r28.u64 = ctx.r8.u64 | 55280;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// ori r29,r5,55281
	ctx.r29.u64 = ctx.r5.u64 | 55281;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r19,0
	ctx.r19.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// rotlwi r28,r26,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lbzx r4,r30,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r9,r11,55288
	ctx.r9.u64 = ctx.r11.u64 | 55288;
	// ori r10,r10,55292
	ctx.r10.u64 = ctx.r10.u64 | 55292;
	// ori r11,r19,55296
	ctx.r11.u64 = ctx.r19.u64 | 55296;
	// lis r27,0
	ctx.r27.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stbx r4,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u8);
	// ori r4,r8,55283
	ctx.r4.u64 = ctx.r8.u64 | 55283;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r19,0
	ctx.r19.s64 = 0;
	// lis r18,0
	ctx.r18.s64 = 0;
	// lis r17,0
	ctx.r17.s64 = 0;
	// lis r16,0
	ctx.r16.s64 = 0;
	// lis r15,0
	ctx.r15.s64 = 0;
	// lis r14,0
	ctx.r14.s64 = 0;
	// ori r6,r29,55285
	ctx.r6.u64 = ctx.r29.u64 | 55285;
	// ori r8,r30,55287
	ctx.r8.u64 = ctx.r30.u64 | 55287;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r7,r27,55286
	ctx.r7.u64 = ctx.r27.u64 | 55286;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ori r5,r5,55284
	ctx.r5.u64 = ctx.r5.u64 | 55284;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ori r19,r19,55300
	ctx.r19.u64 = ctx.r19.u64 | 55300;
	// ori r18,r18,55300
	ctx.r18.u64 = ctx.r18.u64 | 55300;
	// ori r17,r17,55304
	ctx.r17.u64 = ctx.r17.u64 | 55304;
	// lbzx r24,r24,r20
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r20.u32);
	// ori r16,r16,55304
	ctx.r16.u64 = ctx.r16.u64 | 55304;
	// ori r15,r15,55308
	ctx.r15.u64 = ctx.r15.u64 | 55308;
	// ori r21,r14,55308
	ctx.r21.u64 = ctx.r14.u64 | 55308;
	// stbx r24,r31,r20
	PPC_STORE_U8(ctx.r31.u32 + ctx.r20.u32, ctx.r24.u8);
	// lbzx r24,r22,r25
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// stbx r24,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r24.u8);
	// lis r24,0
	ctx.r24.s64 = 0;
	// lbzx r31,r22,r28
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r28.u32);
	// lis r28,0
	ctx.r28.s64 = 0;
	// lwz r25,292(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r28,55312
	ctx.r10.u64 = ctx.r28.u64 | 55312;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rotlwi r30,r27,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stbx r31,r25,r26
	PPC_STORE_U8(ctx.r25.u32 + ctx.r26.u32, ctx.r31.u8);
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// lwz r28,300(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r22,0
	ctx.r22.s64 = 0;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r20,88(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// ori r9,r24,55316
	ctx.r9.u64 = ctx.r24.u64 | 55316;
	// lbzx r28,r28,r23
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r23.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r23,104(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ori r10,r22,55320
	ctx.r10.u64 = ctx.r22.u64 | 55320;
	// lwz r14,292(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r28,r14,r20
	PPC_STORE_U8(ctx.r14.u32 + ctx.r20.u32, ctx.r28.u8);
	// lwz r26,300(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rotlwi r3,r14,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r24,300(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rotlwi r11,r24,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// lbzx r31,r26,r31
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// rotlwi r26,r14,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// stbx r31,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r31.u8);
	// lbzx r31,r24,r25
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r25.u32);
	// stbx r31,r3,r23
	PPC_STORE_U8(ctx.r3.u32 + ctx.r23.u32, ctx.r31.u8);
	// lbzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stbx r31,r3,r29
	PPC_STORE_U8(ctx.r3.u32 + ctx.r29.u32, ctx.r31.u8);
	// lbzx r31,r11,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r31,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r31.u8);
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stbx r4,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u8);
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r5,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r5.u8);
	// lbzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stbx r4,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u8);
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r7,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwzx r6,r11,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r6,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r5,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r5.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stwx r4,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r4.u32);
	// lwzx r8,r11,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// stwx r8,r3,r18
	PPC_STORE_U32(ctx.r3.u32 + ctx.r18.u32, ctx.r8.u32);
	// lwzx r7,r11,r17
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// stwx r7,r3,r16
	PPC_STORE_U32(ctx.r3.u32 + ctx.r16.u32, ctx.r7.u32);
	// lwzx r6,r11,r15
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// stwx r6,r3,r21
	PPC_STORE_U32(ctx.r3.u32 + ctx.r21.u32, ctx.r6.u32);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7738"))) PPC_WEAK_FUNC(sub_825A7738);
PPC_FUNC_IMPL(__imp__sub_825A7738) {
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
	ctx.lr = 0x825A7760;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a77b0
	if (cr6.eq) goto loc_825A77B0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25088
	ctx.r8.s64 = ctx.r10.s64 + -25088;
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
	// bl 0x825a6bc8
	ctx.lr = 0x825A7798;
	sub_825A6BC8(ctx, base);
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
loc_825A77B0:
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

__attribute__((alias("__imp__sub_825A77C8"))) PPC_WEAK_FUNC(sub_825A77C8);
PPC_FUNC_IMPL(__imp__sub_825A77C8) {
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
	ctx.lr = 0x825A77F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7840
	if (cr6.eq) goto loc_825A7840;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-24956
	ctx.r8.s64 = ctx.r10.s64 + -24956;
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
	// bl 0x825a6df8
	ctx.lr = 0x825A7828;
	sub_825A6DF8(ctx, base);
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
loc_825A7840:
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

__attribute__((alias("__imp__sub_825A7858"))) PPC_WEAK_FUNC(sub_825A7858);
PPC_FUNC_IMPL(__imp__sub_825A7858) {
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
	ctx.lr = 0x825A7880;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a78d0
	if (cr6.eq) goto loc_825A78D0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25000
	ctx.r8.s64 = ctx.r10.s64 + -25000;
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
	// bl 0x825a6ce0
	ctx.lr = 0x825A78B8;
	sub_825A6CE0(ctx, base);
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
loc_825A78D0:
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

__attribute__((alias("__imp__sub_825A78E8"))) PPC_WEAK_FUNC(sub_825A78E8);
PPC_FUNC_IMPL(__imp__sub_825A78E8) {
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
	ctx.lr = 0x825A7910;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7960
	if (cr6.eq) goto loc_825A7960;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-24912
	ctx.r8.s64 = ctx.r10.s64 + -24912;
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
	// bl 0x825a6f30
	ctx.lr = 0x825A7948;
	sub_825A6F30(ctx, base);
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
loc_825A7960:
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

__attribute__((alias("__imp__sub_825A7978"))) PPC_WEAK_FUNC(sub_825A7978);
PPC_FUNC_IMPL(__imp__sub_825A7978) {
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
	ctx.lr = 0x825A79A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a79f0
	if (cr6.eq) goto loc_825A79F0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-24868
	ctx.r8.s64 = ctx.r10.s64 + -24868;
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
	// bl 0x825a7048
	ctx.lr = 0x825A79D8;
	sub_825A7048(ctx, base);
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
loc_825A79F0:
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

__attribute__((alias("__imp__sub_825A7A08"))) PPC_WEAK_FUNC(sub_825A7A08);
PPC_FUNC_IMPL(__imp__sub_825A7A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A7A10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825a7a34
	if (!cr6.gt) goto loc_825A7A34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x825A7A34;
	sub_831CC150(ctx, base);
loc_825A7A34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,60
	ctx.r28.s64 = 60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x825a7ac0
	if (!cr6.lt) goto loc_825A7AC0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,60
	ctx.r29.s64 = ctx.r4.s64 * 60;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A7A6C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825a6b60
	ctx.lr = 0x825A7A84;
	sub_825A6B60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x825a7aa8
	if (cr6.eq) goto loc_825A7AA8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x825A7AA8;
	sub_825952B8(ctx, base);
loc_825A7AA8:
	// mulli r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 * 60;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_825A7AC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7AC8"))) PPC_WEAK_FUNC(sub_825A7AC8);
PPC_FUNC_IMPL(__imp__sub_825A7AC8) {
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
	// addi r10,r11,-25088
	ctx.r10.s64 = ctx.r11.s64 + -25088;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a7b08
	if (cr6.eq) goto loc_825A7B08;
	// bl 0x825df578
	ctx.lr = 0x825A7B00;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A7B08:
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
	// beq cr6,0x825a7b34
	if (cr6.eq) goto loc_825A7B34;
	// bl 0x82595188
	ctx.lr = 0x825A7B24;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7B34;
	sub_825952B8(ctx, base);
loc_825A7B34:
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

__attribute__((alias("__imp__sub_825A7B50"))) PPC_WEAK_FUNC(sub_825A7B50);
PPC_FUNC_IMPL(__imp__sub_825A7B50) {
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
	// addi r10,r11,-25000
	ctx.r10.s64 = ctx.r11.s64 + -25000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a7b90
	if (cr6.eq) goto loc_825A7B90;
	// bl 0x825df578
	ctx.lr = 0x825A7B88;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A7B90:
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
	// beq cr6,0x825a7bbc
	if (cr6.eq) goto loc_825A7BBC;
	// bl 0x82595188
	ctx.lr = 0x825A7BAC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7BBC;
	sub_825952B8(ctx, base);
loc_825A7BBC:
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

__attribute__((alias("__imp__sub_825A7BD8"))) PPC_WEAK_FUNC(sub_825A7BD8);
PPC_FUNC_IMPL(__imp__sub_825A7BD8) {
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
	// addi r10,r11,-24956
	ctx.r10.s64 = ctx.r11.s64 + -24956;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a7c18
	if (cr6.eq) goto loc_825A7C18;
	// bl 0x825a5d18
	ctx.lr = 0x825A7C10;
	sub_825A5D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A7C18:
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
	// beq cr6,0x825a7c44
	if (cr6.eq) goto loc_825A7C44;
	// bl 0x82595188
	ctx.lr = 0x825A7C34;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7C44;
	sub_825952B8(ctx, base);
loc_825A7C44:
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

__attribute__((alias("__imp__sub_825A7C60"))) PPC_WEAK_FUNC(sub_825A7C60);
PPC_FUNC_IMPL(__imp__sub_825A7C60) {
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
	// addi r10,r11,-24912
	ctx.r10.s64 = ctx.r11.s64 + -24912;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a7ca0
	if (cr6.eq) goto loc_825A7CA0;
	// bl 0x825a5d98
	ctx.lr = 0x825A7C98;
	sub_825A5D98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A7CA0:
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
	// beq cr6,0x825a7ccc
	if (cr6.eq) goto loc_825A7CCC;
	// bl 0x82595188
	ctx.lr = 0x825A7CBC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7CCC;
	sub_825952B8(ctx, base);
loc_825A7CCC:
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

__attribute__((alias("__imp__sub_825A7CE8"))) PPC_WEAK_FUNC(sub_825A7CE8);
PPC_FUNC_IMPL(__imp__sub_825A7CE8) {
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
	// addi r10,r11,-24868
	ctx.r10.s64 = ctx.r11.s64 + -24868;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a7d28
	if (cr6.eq) goto loc_825A7D28;
	// bl 0x825a5e18
	ctx.lr = 0x825A7D20;
	sub_825A5E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A7D28:
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
	// beq cr6,0x825a7d54
	if (cr6.eq) goto loc_825A7D54;
	// bl 0x82595188
	ctx.lr = 0x825A7D44;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A7D54;
	sub_825952B8(ctx, base);
loc_825A7D54:
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

__attribute__((alias("__imp__sub_825A7D70"))) PPC_WEAK_FUNC(sub_825A7D70);
PPC_FUNC_IMPL(__imp__sub_825A7D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825A7D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825a7e08
	if (cr6.eq) goto loc_825A7E08;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a7dfc
	if (!cr6.eq) goto loc_825A7DFC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,17772
	ctx.r4.s64 = 17772;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A7DAC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7ddc
	if (cr6.eq) goto loc_825A7DDC;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A7DC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1b750
	ctx.lr = 0x825A7DCC;
	sub_82A1B750(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,8884
	ctx.r30.s64 = ctx.r30.s64 + 8884;
	// bge 0x825a7dc4
	if (!cr0.lt) goto loc_825A7DC4;
	// b 0x825a7de0
	goto loc_825A7DE0;
loc_825A7DDC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A7DE0:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825a7dfc
	if (!cr6.eq) goto loc_825A7DFC;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A7DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825A7E08:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7e18
	if (cr6.eq) goto loc_825A7E18;
	// bl 0x825a71a8
	ctx.lr = 0x825A7E18;
	sub_825A71A8(ctx, base);
loc_825A7E18:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,17772
	ctx.r4.s64 = 17772;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825A7E30;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a7e60
	if (cr6.eq) goto loc_825A7E60;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825A7E48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1b750
	ctx.lr = 0x825A7E50;
	sub_82A1B750(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,8884
	ctx.r30.s64 = ctx.r30.s64 + 8884;
	// bge 0x825a7e48
	if (!cr0.lt) goto loc_825A7E48;
	// b 0x825a7e64
	goto loc_825A7E64;
loc_825A7E60:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825A7E64:
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

__attribute__((alias("__imp__sub_825A7E84"))) PPC_WEAK_FUNC(sub_825A7E84);
PPC_FUNC_IMPL(__imp__sub_825A7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7E88"))) PPC_WEAK_FUNC(sub_825A7E88);
PPC_FUNC_IMPL(__imp__sub_825A7E88) {
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
loc_825A7EA4:
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
	// bne 0x825a7ea4
	if (!cr0.eq) goto loc_825A7EA4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a7ef0
	if (!cr6.eq) goto loc_825A7EF0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A7ED0;
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
	ctx.lr = 0x825A7EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A7EF0:
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

__attribute__((alias("__imp__sub_825A7F08"))) PPC_WEAK_FUNC(sub_825A7F08);
PPC_FUNC_IMPL(__imp__sub_825A7F08) {
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
loc_825A7F24:
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
	// bne 0x825a7f24
	if (!cr0.eq) goto loc_825A7F24;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a7f70
	if (!cr6.eq) goto loc_825A7F70;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A7F50;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,29080
	ctx.r5.s64 = ctx.r11.s64 + 29080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A7F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A7F70:
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

__attribute__((alias("__imp__sub_825A7F88"))) PPC_WEAK_FUNC(sub_825A7F88);
PPC_FUNC_IMPL(__imp__sub_825A7F88) {
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
	ctx.lr = 0x825A7FB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8000
	if (cr6.eq) goto loc_825A8000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25044
	ctx.r8.s64 = ctx.r10.s64 + -25044;
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
	// bl 0x825a7d70
	ctx.lr = 0x825A7FE8;
	sub_825A7D70(ctx, base);
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
loc_825A8000:
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

__attribute__((alias("__imp__sub_825A8018"))) PPC_WEAK_FUNC(sub_825A8018);
PPC_FUNC_IMPL(__imp__sub_825A8018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825A8020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-24824
	ctx.r8.s64 = ctx.r11.s64 + -24824;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// li r7,150
	ctx.r7.s64 = 150;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stb r6,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r6.u8);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// stb r30,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r30.u8);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stb r5,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r5.u8);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x825A80F8;
	sub_82596FA8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lbz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// lbz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
	// lbz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// stb r7,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r7.u8);
	// lhz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// stb r6,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r6.u8);
	// lbz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// lbz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// stb r9,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r9.u8);
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f13,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lfs f12,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f11,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f10,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,124(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f9,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,128(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f8,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,132(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f7,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,136(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f6,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f5,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f4,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// lwz r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// lhz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// bl 0x825a7a08
	ctx.lr = 0x825A81E0;
	sub_825A7A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A81EC"))) PPC_WEAK_FUNC(sub_825A81EC);
PPC_FUNC_IMPL(__imp__sub_825A81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A81F0"))) PPC_WEAK_FUNC(sub_825A81F0);
PPC_FUNC_IMPL(__imp__sub_825A81F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// addi r10,r11,-24824
	ctx.r10.s64 = ctx.r11.s64 + -24824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x825A8218;
	sub_82596F90(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a8234
	if (cr6.eq) goto loc_825A8234;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A8234;
	sub_825952B8(ctx, base);
loc_825A8234:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-32552
	ctx.r9.s64 = ctx.r10.s64 + -32552;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_825A8264"))) PPC_WEAK_FUNC(sub_825A8264);
PPC_FUNC_IMPL(__imp__sub_825A8264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8268"))) PPC_WEAK_FUNC(sub_825A8268);
PPC_FUNC_IMPL(__imp__sub_825A8268) {
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
	// bl 0x825a81f0
	ctx.lr = 0x825A8288;
	sub_825A81F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a82a8
	if (cr6.eq) goto loc_825A82A8;
	// bl 0x82595188
	ctx.lr = 0x825A8298;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A82A8;
	sub_825952B8(ctx, base);
loc_825A82A8:
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

__attribute__((alias("__imp__sub_825A82C4"))) PPC_WEAK_FUNC(sub_825A82C4);
PPC_FUNC_IMPL(__imp__sub_825A82C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A82C8"))) PPC_WEAK_FUNC(sub_825A82C8);
PPC_FUNC_IMPL(__imp__sub_825A82C8) {
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
	// bl 0x835360c0
	ctx.lr = 0x825A82E0;
	sub_835360C0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-25132
	ctx.r8.s64 = ctx.r10.s64 + -25132;
	// addi r7,r9,-24816
	ctx.r7.s64 = ctx.r9.s64 + -24816;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x83537ae8
	ctx.lr = 0x825A8320;
	sub_83537AE8(ctx, base);
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

__attribute__((alias("__imp__sub_825A8338"))) PPC_WEAK_FUNC(sub_825A8338);
PPC_FUNC_IMPL(__imp__sub_825A8338) {
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
	// addi r10,r11,-24772
	ctx.r10.s64 = ctx.r11.s64 + -24772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825a3170
	ctx.lr = 0x825A8364;
	sub_825A3170(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a8384
	if (cr6.eq) goto loc_825A8384;
	// bl 0x82595188
	ctx.lr = 0x825A8374;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A8384;
	sub_825952B8(ctx, base);
loc_825A8384:
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

__attribute__((alias("__imp__sub_825A83A0"))) PPC_WEAK_FUNC(sub_825A83A0);
PPC_FUNC_IMPL(__imp__sub_825A83A0) {
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
	// addi r10,r11,-24732
	ctx.r10.s64 = ctx.r11.s64 + -24732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825a3170
	ctx.lr = 0x825A83CC;
	sub_825A3170(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a83ec
	if (cr6.eq) goto loc_825A83EC;
	// bl 0x82595188
	ctx.lr = 0x825A83DC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A83EC;
	sub_825952B8(ctx, base);
loc_825A83EC:
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

