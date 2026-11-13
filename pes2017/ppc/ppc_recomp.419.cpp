#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_836F9D30"))) PPC_WEAK_FUNC(sub_836F9D30);
PPC_FUNC_IMPL(__imp__sub_836F9D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x836F9D38;
	__savegprlr_21(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r21,r3,4
	ctx.r21.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,136
	ctx.r10.s64 = 136;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836f9d78
	if (!cr6.lt) goto loc_836F9D78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836F9D78;
	sub_82E745E0(ctx, base);
loc_836F9D78:
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r26,r11,31044
	ctx.r26.s64 = ctx.r11.s64 + 31044;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r6.u32);
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836F9DC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9DCC;
	sub_82E74C08(ctx, base);
	// lwz r5,532(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836f9de0
	if (cr6.lt) goto loc_836F9DE0;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836F9DE0;
	sub_82416268(ctx, base);
loc_836F9DE0:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x836f9e00
	if (cr6.lt) goto loc_836F9E00;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836F9E00:
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
loc_836F9E10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836f9e10
	if (!cr6.eq) goto loc_836F9E10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836F9E34;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9E40;
	sub_82E74C08(ctx, base);
	// lwz r10,724(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836f9e54
	if (cr6.lt) goto loc_836F9E54;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x836F9E54;
	sub_82416268(ctx, base);
loc_836F9E54:
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// addi r4,r26,-288
	ctx.r4.s64 = ctx.r26.s64 + -288;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836F9E7C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9E88;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836f9e9c
	if (cr6.lt) goto loc_836F9E9C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836F9E9C;
	sub_82416268(ctx, base);
loc_836F9E9C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836F9EB4;
	sub_82E746C0(ctx, base);
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// addi r4,r26,-280
	ctx.r4.s64 = ctx.r26.s64 + -280;
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82472fc0
	ctx.lr = 0x836F9ED0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9EDC;
	sub_82E74C08(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836f9ef0
	if (cr6.lt) goto loc_836F9EF0;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x836F9EF0;
	sub_82416268(ctx, base);
loc_836F9EF0:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// blt cr6,0x836f9f10
	if (cr6.lt) goto loc_836F9F10;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836F9F10:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
loc_836F9F20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836f9f20
	if (!cr6.eq) goto loc_836F9F20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836F9F44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9F50;
	sub_82E74C08(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836f9f64
	if (cr6.lt) goto loc_836F9F64;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x836F9F64;
	sub_82416268(ctx, base);
loc_836F9F64:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836F9F8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836F9F98;
	sub_82E74C08(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836f9fac
	if (cr6.lt) goto loc_836F9FAC;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x836F9FAC;
	sub_82416268(ctx, base);
loc_836F9FAC:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// blt cr6,0x836f9fcc
	if (cr6.lt) goto loc_836F9FCC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836F9FCC:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
loc_836F9FDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836f9fdc
	if (!cr6.eq) goto loc_836F9FDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FA000;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA00C;
	sub_82E74C08(ctx, base);
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fa020
	if (cr6.lt) goto loc_836FA020;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x836FA020;
	sub_82416268(ctx, base);
loc_836FA020:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// addi r4,r26,-264
	ctx.r4.s64 = ctx.r26.s64 + -264;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FA048;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA054;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa068
	if (cr6.lt) goto loc_836FA068;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x836FA068;
	sub_82416268(ctx, base);
loc_836FA068:
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836FA080;
	sub_82E746C0(ctx, base);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82472fc0
	ctx.lr = 0x836FA09C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA0A8;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa0bc
	if (cr6.lt) goto loc_836FA0BC;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836FA0BC;
	sub_82416268(ctx, base);
loc_836FA0BC:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x836fa0dc
	if (cr6.lt) goto loc_836FA0DC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FA0DC:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
loc_836FA0EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fa0ec
	if (!cr6.eq) goto loc_836FA0EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FA110;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA11C;
	sub_82E74C08(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fa130
	if (cr6.lt) goto loc_836FA130;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x836FA130;
	sub_82416268(ctx, base);
loc_836FA130:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// addi r4,r26,-244
	ctx.r4.s64 = ctx.r26.s64 + -244;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FA158;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA164;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa178
	if (cr6.lt) goto loc_836FA178;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836FA178;
	sub_82416268(ctx, base);
loc_836FA178:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// lwz r4,204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// bl 0x82e97d90
	ctx.lr = 0x836FA190;
	sub_82E97D90(ctx, base);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r4,r26,-232
	ctx.r4.s64 = ctx.r26.s64 + -232;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82472fc0
	ctx.lr = 0x836FA1AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e74c08
	ctx.lr = 0x836FA1B8;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa1cc
	if (cr6.lt) goto loc_836FA1CC;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836FA1CC;
	sub_82416268(ctx, base);
loc_836FA1CC:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r24,r29,208
	ctx.r24.s64 = ctx.r29.s64 + 208;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,208(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// bl 0x82e749f8
	ctx.lr = 0x836FA1E8;
	sub_82E749F8(ctx, base);
	// lwz r10,208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// extsw r25,r11
	ctx.r25.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, xer);
	// beq cr6,0x836fab58
	if (cr6.eq) goto loc_836FAB58;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,140
	ctx.r10.s64 = 140;
	// li r9,133
	ctx.r9.s64 = 133;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// li r23,8192
	ctx.r23.s64 = 8192;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// li r22,1
	ctx.r22.s64 = 1;
loc_836FA224:
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA234;
	sub_831CE980(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x836FA23C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82472fc0
	ctx.lr = 0x836FA280;
	sub_82472FC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82e74890
	ctx.lr = 0x836FA28C;
	sub_82E74890(ctx, base);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// lwz r28,288(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bge cr6,0x836fa2a8
	if (!cr6.lt) goto loc_836FA2A8;
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
loc_836FA2A8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa2c4
	if (!cr6.lt) goto loc_836FA2C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e745e0
	ctx.lr = 0x836FA2C4;
	sub_82E745E0(ctx, base);
loc_836FA2C4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA2DC;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x836fa2fc
	if (cr6.lt) goto loc_836FA2FC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FA2FC;
	sub_82416268(ctx, base);
loc_836FA2FC:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x836FA310;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r4,r26,-212
	ctx.r4.s64 = ctx.r26.s64 + -212;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FA348;
	sub_82472FC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x836FA354;
	sub_82E74890(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x836fa370
	if (!cr6.lt) goto loc_836FA370;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_836FA370:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa390
	if (!cr6.lt) goto loc_836FA390;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x836FA38C;
	sub_82E745E0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_836FA390:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA3A4;
	sub_831CE980(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x836fa3c0
	if (cr6.lt) goto loc_836FA3C0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FA3C0;
	sub_82416268(ctx, base);
loc_836FA3C0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,800(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82e97d90
	ctx.lr = 0x836FA3D8;
	sub_82E97D90(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r26,-204
	ctx.r4.s64 = ctx.r26.s64 + -204;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836FA3F4;
	sub_82472FC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82e74890
	ctx.lr = 0x836FA400;
	sub_82E74890(ctx, base);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,224(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bge cr6,0x836fa41c
	if (!cr6.lt) goto loc_836FA41C;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
loc_836FA41C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa43c
	if (!cr6.lt) goto loc_836FA43C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x836FA438;
	sub_82E745E0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_836FA43C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA450;
	sub_831CE980(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x836fa46c
	if (cr6.lt) goto loc_836FA46C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FA46C;
	sub_82416268(ctx, base);
loc_836FA46C:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,804(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// bl 0x82e97d90
	ctx.lr = 0x836FA484;
	sub_82E97D90(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r26,-196
	ctx.r4.s64 = ctx.r26.s64 + -196;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x836FA4A0;
	sub_82472FC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82e74890
	ctx.lr = 0x836FA4AC;
	sub_82E74890(ctx, base);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,352(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bge cr6,0x836fa4c8
	if (!cr6.lt) goto loc_836FA4C8;
	// addi r27,r1,352
	ctx.r27.s64 = ctx.r1.s64 + 352;
loc_836FA4C8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa4e8
	if (!cr6.lt) goto loc_836FA4E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x836FA4E4;
	sub_82E745E0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_836FA4E8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA4FC;
	sub_831CE980(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x836fa518
	if (cr6.lt) goto loc_836FA518;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FA518;
	sub_82416268(ctx, base);
loc_836FA518:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,808(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// bl 0x82e97d90
	ctx.lr = 0x836FA530;
	sub_82E97D90(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r26,-188
	ctx.r4.s64 = ctx.r26.s64 + -188;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x836FA54C;
	sub_82472FC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x836FA558;
	sub_82E74890(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x836fa574
	if (!cr6.lt) goto loc_836FA574;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
loc_836FA574:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa594
	if (!cr6.lt) goto loc_836FA594;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x836FA590;
	sub_82E745E0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_836FA594:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA5A8;
	sub_831CE980(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x836fa5c4
	if (cr6.lt) goto loc_836FA5C4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FA5C4;
	sub_82416268(ctx, base);
loc_836FA5C4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,812(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// bl 0x82e97d90
	ctx.lr = 0x836FA5DC;
	sub_82E97D90(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r4,r26,-164
	ctx.r4.s64 = ctx.r26.s64 + -164;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x836FA5F8;
	sub_82472FC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x836FA604;
	sub_82E74890(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x836fa620
	if (!cr6.lt) goto loc_836FA620;
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
loc_836FA620:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa640
	if (!cr6.lt) goto loc_836FA640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x836FA63C;
	sub_82E745E0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_836FA640:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA654;
	sub_831CE980(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x836fa670
	if (cr6.lt) goto loc_836FA670;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FA670;
	sub_82416268(ctx, base);
loc_836FA670:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,816(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82e97d90
	ctx.lr = 0x836FA688;
	sub_82E97D90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e74890
	ctx.lr = 0x836FA698;
	sub_82E74890(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x836fa6b8
	if (!cr6.lt) goto loc_836FA6B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e745e0
	ctx.lr = 0x836FA6B8;
	sub_82E745E0(ctx, base);
loc_836FA6B8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA6D4;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r26,-152
	ctx.r4.s64 = ctx.r26.s64 + -152;
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x836FA6FC;
	sub_82472FC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82e74890
	ctx.lr = 0x836FA708;
	sub_82E74890(ctx, base);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bge cr6,0x836fa724
	if (!cr6.lt) goto loc_836FA724;
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
loc_836FA724:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa740
	if (!cr6.lt) goto loc_836FA740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e745e0
	ctx.lr = 0x836FA740;
	sub_82E745E0(ctx, base);
loc_836FA740:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA758;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x836fa778
	if (cr6.lt) goto loc_836FA778;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FA778;
	sub_82416268(ctx, base);
loc_836FA778:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,820(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// bl 0x82e97d90
	ctx.lr = 0x836FA790;
	sub_82E97D90(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r4,r26,-140
	ctx.r4.s64 = ctx.r26.s64 + -140;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836FA7AC;
	sub_82472FC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82e74890
	ctx.lr = 0x836FA7B8;
	sub_82E74890(ctx, base);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,320(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bge cr6,0x836fa7d4
	if (!cr6.lt) goto loc_836FA7D4;
	// addi r28,r1,320
	ctx.r28.s64 = ctx.r1.s64 + 320;
loc_836FA7D4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa7f0
	if (!cr6.lt) goto loc_836FA7F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e745e0
	ctx.lr = 0x836FA7F0;
	sub_82E745E0(ctx, base);
loc_836FA7F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA808;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x836fa828
	if (cr6.lt) goto loc_836FA828;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FA828;
	sub_82416268(ctx, base);
loc_836FA828:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,824(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// bl 0x82e97d90
	ctx.lr = 0x836FA840;
	sub_82E97D90(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r26,-128
	ctx.r4.s64 = ctx.r26.s64 + -128;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x836FA85C;
	sub_82472FC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82e74890
	ctx.lr = 0x836FA868;
	sub_82E74890(ctx, base);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,384(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bge cr6,0x836fa884
	if (!cr6.lt) goto loc_836FA884;
	// addi r28,r1,384
	ctx.r28.s64 = ctx.r1.s64 + 384;
loc_836FA884:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x836fa8a0
	if (!cr6.lt) goto loc_836FA8A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e745e0
	ctx.lr = 0x836FA8A0;
	sub_82E745E0(ctx, base);
loc_836FA8A0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x836FA8B8;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,404(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x836fa8d8
	if (cr6.lt) goto loc_836FA8D8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FA8D8;
	sub_82416268(ctx, base);
loc_836FA8D8:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// lwz r4,828(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// bl 0x82e97d90
	ctx.lr = 0x836FA8F0;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82475d40
	ctx.lr = 0x836FA8FC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FA908;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa91c
	if (cr6.lt) goto loc_836FA91C;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x836FA91C;
	sub_82416268(ctx, base);
loc_836FA91C:
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// lwz r4,832(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82e97d90
	ctx.lr = 0x836FA934;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82475d40
	ctx.lr = 0x836FA940;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FA94C;
	sub_82E74C08(ctx, base);
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa960
	if (cr6.lt) goto loc_836FA960;
	// lwz r3,1088(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// bl 0x82416268
	ctx.lr = 0x836FA960;
	sub_82416268(ctx, base);
loc_836FA960:
	// stw r30,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// stb r31,1088(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1088, ctx.r31.u8);
	// lwz r4,836(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// bl 0x82e97d90
	ctx.lr = 0x836FA978;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-68
	ctx.r4.s64 = ctx.r26.s64 + -68;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82475d40
	ctx.lr = 0x836FA984;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FA990;
	sub_82E74C08(ctx, base);
	// lwz r11,948(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa9a4
	if (cr6.lt) goto loc_836FA9A4;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x836FA9A4;
	sub_82416268(ctx, base);
loc_836FA9A4:
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// lwz r4,840(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// bl 0x82e746c0
	ctx.lr = 0x836FA9BC;
	sub_82E746C0(ctx, base);
	// addi r4,r26,-52
	ctx.r4.s64 = ctx.r26.s64 + -52;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x836FA9C8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FA9D4;
	sub_82E74C08(ctx, base);
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fa9e8
	if (cr6.lt) goto loc_836FA9E8;
	// lwz r3,1056(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// bl 0x82416268
	ctx.lr = 0x836FA9E8;
	sub_82416268(ctx, base);
loc_836FA9E8:
	// stw r30,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
	// lwz r4,844(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// bl 0x82e97d90
	ctx.lr = 0x836FAA00;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82475d40
	ctx.lr = 0x836FAA0C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FAA18;
	sub_82E74C08(ctx, base);
	// lwz r11,1012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faa2c
	if (cr6.lt) goto loc_836FAA2C;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x836FAA2C;
	sub_82416268(ctx, base);
loc_836FAA2C:
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// lwz r4,848(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x82e97d90
	ctx.lr = 0x836FAA44;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82475d40
	ctx.lr = 0x836FAA50;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FAA5C;
	sub_82E74C08(ctx, base);
	// lwz r11,916(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faa70
	if (cr6.lt) goto loc_836FAA70;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x836FAA70;
	sub_82416268(ctx, base);
loc_836FAA70:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// lwz r4,852(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// bl 0x82e97d90
	ctx.lr = 0x836FAA88;
	sub_82E97D90(ctx, base);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82475d40
	ctx.lr = 0x836FAA94;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FAAA0;
	sub_82E74C08(ctx, base);
	// lwz r11,980(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faab4
	if (cr6.lt) goto loc_836FAAB4;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x836FAAB4;
	sub_82416268(ctx, base);
loc_836FAAB4:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// lwz r4,856(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// bl 0x82e97d90
	ctx.lr = 0x836FAACC;
	sub_82E97D90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82475d40
	ctx.lr = 0x836FAAD8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74c08
	ctx.lr = 0x836FAAE4;
	sub_82E74C08(ctx, base);
	// lwz r11,1044(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faaf8
	if (cr6.lt) goto loc_836FAAF8;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x836FAAF8;
	sub_82416268(ctx, base);
loc_836FAAF8:
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// bl 0x82e97d90
	ctx.lr = 0x836FAB10;
	sub_82E97D90(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e74890
	ctx.lr = 0x836FAB1C;
	sub_82E74890(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e74b98
	ctx.lr = 0x836FAB2C;
	sub_82E74B98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cf100
	ctx.lr = 0x836FAB34;
	sub_831CF100(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831cf100
	ctx.lr = 0x836FAB3C;
	sub_831CF100(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x836fa224
	if (!cr6.eq) goto loc_836FA224;
loc_836FAB58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAB64"))) PPC_WEAK_FUNC(sub_836FAB64);
PPC_FUNC_IMPL(__imp__sub_836FAB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FAB68"))) PPC_WEAK_FUNC(sub_836FAB68);
PPC_FUNC_IMPL(__imp__sub_836FAB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FAB70;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836FAB98;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836faddc
	if (!cr6.lt) goto loc_836FADDC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,31072
	ctx.r26.s64 = ctx.r11.s64 + 31072;
loc_836FABD0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836FAC04;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FAC1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836facb0
	if (!cr6.eq) goto loc_836FACB0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FAC54;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fac68
	if (!cr6.lt) goto loc_836FAC68;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FAC68:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FAC6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fac6c
	if (!cr6.eq) goto loc_836FAC6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FAC90;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836faca4
	if (cr6.lt) goto loc_836FACA4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FACA4;
	sub_82416268(ctx, base);
loc_836FACA4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FACB0:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FACC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fad04
	if (!cr6.eq) goto loc_836FAD04;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836facfc
	if (!cr6.eq) goto loc_836FACFC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fad00
	goto loc_836FAD00;
loc_836FACFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FAD00:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FAD04:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FAD1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fadb0
	if (!cr6.eq) goto loc_836FADB0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836FAD54;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fad68
	if (!cr6.lt) goto loc_836FAD68;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FAD68:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FAD6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fad6c
	if (!cr6.eq) goto loc_836FAD6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FAD90;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fada4
	if (cr6.lt) goto loc_836FADA4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FADA4;
	sub_82416268(ctx, base);
loc_836FADA4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FADB0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fadc4
	if (cr6.lt) goto loc_836FADC4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FADC4;
	sub_82416268(ctx, base);
loc_836FADC4:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fabd0
	if (!cr0.eq) goto loc_836FABD0;
loc_836FADDC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fadf8
	if (cr6.eq) goto loc_836FADF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FADF0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FADF8;
	sub_82416268(ctx, base);
loc_836FADF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAE04"))) PPC_WEAK_FUNC(sub_836FAE04);
PPC_FUNC_IMPL(__imp__sub_836FAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FAE08"))) PPC_WEAK_FUNC(sub_836FAE08);
PPC_FUNC_IMPL(__imp__sub_836FAE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FAE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FAE1C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,30680
	ctx.r29.s64 = ctx.r11.s64 + 30680;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FAE34;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,31180
	ctx.r7.s64 = ctx.r10.s64 + 31180;
	// addi r5,r8,31164
	ctx.r5.s64 = ctx.r8.s64 + 31164;
	// addi r6,r9,31168
	ctx.r6.s64 = ctx.r9.s64 + 31168;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FAE7C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FAE98;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FAEB8;
	sub_824208C8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
	// bl 0x82e47370
	ctx.lr = 0x836FAED4;
	sub_82E47370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAEE0"))) PPC_WEAK_FUNC(sub_836FAEE0);
PPC_FUNC_IMPL(__imp__sub_836FAEE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fafb0
	sub_836FAFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAEE8"))) PPC_WEAK_FUNC(sub_836FAEE8);
PPC_FUNC_IMPL(__imp__sub_836FAEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fafb0
	sub_836FAFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAEF0"))) PPC_WEAK_FUNC(sub_836FAEF0);
PPC_FUNC_IMPL(__imp__sub_836FAEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FAEF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,31180
	ctx.r8.s64 = ctx.r11.s64 + 31180;
	// addi r7,r10,31168
	ctx.r7.s64 = ctx.r10.s64 + 31168;
	// addi r6,r9,31164
	ctx.r6.s64 = ctx.r9.s64 + 31164;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// stw r6,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r6.u32);
	// bl 0x836ead98
	ctx.lr = 0x836FAF2C;
	sub_836EAD98(ctx, base);
	// lwz r5,396(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// addi r29,r28,376
	ctx.r29.s64 = ctx.r28.s64 + 376;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836faf44
	if (cr6.lt) goto loc_836FAF44;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FAF44;
	sub_8386D088(ctx, base);
loc_836FAF44:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faf70
	if (cr6.lt) goto loc_836FAF70;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FAF70;
	sub_8386D088(ctx, base);
loc_836FAF70:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836faf94
	if (cr6.lt) goto loc_836FAF94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FAF94;
	sub_8386D088(ctx, base);
loc_836FAF94:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FAFA8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FAFB0"))) PPC_WEAK_FUNC(sub_836FAFB0);
PPC_FUNC_IMPL(__imp__sub_836FAFB0) {
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
	// bl 0x836faef0
	ctx.lr = 0x836FAFD0;
	sub_836FAEF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836faff0
	if (cr6.eq) goto loc_836FAFF0;
	// bl 0x82595188
	ctx.lr = 0x836FAFE0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FAFF0;
	sub_825952B8(ctx, base);
loc_836FAFF0:
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

__attribute__((alias("__imp__sub_836FB00C"))) PPC_WEAK_FUNC(sub_836FB00C);
PPC_FUNC_IMPL(__imp__sub_836FB00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FB010"))) PPC_WEAK_FUNC(sub_836FB010);
PPC_FUNC_IMPL(__imp__sub_836FB010) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FB028;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,30680
	ctx.r4.s64 = ctx.r11.s64 + 30680;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x824208c8
	ctx.lr = 0x836FB03C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,31228
	ctx.r3.s64 = ctx.r7.s64 + 31228;
	// addi r6,r10,31212
	ctx.r6.s64 = ctx.r10.s64 + 31212;
	// addi r5,r9,31200
	ctx.r5.s64 = ctx.r9.s64 + 31200;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,31196
	ctx.r4.s64 = ctx.r8.s64 + 31196;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836FB084"))) PPC_WEAK_FUNC(sub_836FB084);
PPC_FUNC_IMPL(__imp__sub_836FB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FB088"))) PPC_WEAK_FUNC(sub_836FB088);
PPC_FUNC_IMPL(__imp__sub_836FB088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fb0a0
	sub_836FB0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FB090"))) PPC_WEAK_FUNC(sub_836FB090);
PPC_FUNC_IMPL(__imp__sub_836FB090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fb0a0
	sub_836FB0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FB098"))) PPC_WEAK_FUNC(sub_836FB098);
PPC_FUNC_IMPL(__imp__sub_836FB098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fb0a0
	sub_836FB0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FB0A0"))) PPC_WEAK_FUNC(sub_836FB0A0);
PPC_FUNC_IMPL(__imp__sub_836FB0A0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,31212
	ctx.r7.s64 = ctx.r11.s64 + 31212;
	// addi r6,r10,31200
	ctx.r6.s64 = ctx.r10.s64 + 31200;
	// addi r5,r9,31196
	ctx.r5.s64 = ctx.r9.s64 + 31196;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,31228
	ctx.r4.s64 = ctx.r8.s64 + 31228;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836FB0F0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836fb110
	if (cr6.eq) goto loc_836FB110;
	// bl 0x82595188
	ctx.lr = 0x836FB100;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FB110;
	sub_825952B8(ctx, base);
loc_836FB110:
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

__attribute__((alias("__imp__sub_836FB12C"))) PPC_WEAK_FUNC(sub_836FB12C);
PPC_FUNC_IMPL(__imp__sub_836FB12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FB130"))) PPC_WEAK_FUNC(sub_836FB130);
PPC_FUNC_IMPL(__imp__sub_836FB130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FB138;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836fb178
	if (!cr6.lt) goto loc_836FB178;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FB178;
	sub_82E745E0(ctx, base);
loc_836FB178:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,31364
	ctx.r27.s64 = ctx.r11.s64 + 31364;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FB1C0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB1CC;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fb1e0
	if (cr6.lt) goto loc_836FB1E0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FB1E0;
	sub_82416268(ctx, base);
loc_836FB1E0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836fb200
	if (cr6.lt) goto loc_836FB200;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FB200:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836FB210:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb210
	if (!cr6.eq) goto loc_836FB210;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FB234;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB240;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb254
	if (cr6.lt) goto loc_836FB254;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FB254;
	sub_82416268(ctx, base);
loc_836FB254:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FB27C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB288;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fb29c
	if (cr6.lt) goto loc_836FB29C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FB29C;
	sub_82416268(ctx, base);
loc_836FB29C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FB2B4;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x836FB2D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB2DC;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fb2f0
	if (cr6.lt) goto loc_836FB2F0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FB2F0;
	sub_82416268(ctx, base);
loc_836FB2F0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836fb310
	if (cr6.lt) goto loc_836FB310;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FB310:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FB320:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb320
	if (!cr6.eq) goto loc_836FB320;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FB344;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB350;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb364
	if (cr6.lt) goto loc_836FB364;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FB364;
	sub_82416268(ctx, base);
loc_836FB364:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FB38C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB398;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fb3ac
	if (cr6.lt) goto loc_836FB3AC;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FB3AC;
	sub_82416268(ctx, base);
loc_836FB3AC:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836fb3cc
	if (cr6.lt) goto loc_836FB3CC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FB3CC:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_836FB3DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb3dc
	if (!cr6.eq) goto loc_836FB3DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FB400;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836FB40C;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb420
	if (cr6.lt) goto loc_836FB420;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FB420;
	sub_82416268(ctx, base);
loc_836FB420:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FB42C"))) PPC_WEAK_FUNC(sub_836FB42C);
PPC_FUNC_IMPL(__imp__sub_836FB42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FB430"))) PPC_WEAK_FUNC(sub_836FB430);
PPC_FUNC_IMPL(__imp__sub_836FB430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x836FB438;
	__savegprlr_24(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83691bb8
	ctx.lr = 0x836FB460;
	sub_83691BB8(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fbbf4
	if (!cr6.lt) goto loc_836FBBF4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r25,r11,31484
	ctx.r25.s64 = ctx.r11.s64 + 31484;
loc_836FB498:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r10,r26,-16
	ctx.r10.s64 = ctx.r26.s64 + -16;
	// ld r9,-8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -8);
	// ld r8,-16(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82472fc0
	ctx.lr = 0x836FB4CC;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-112
	ctx.r6.s64 = ctx.r25.s64 + -112;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836FB4E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb578
	if (!cr6.eq) goto loc_836FB578;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r4,492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x82472fc0
	ctx.lr = 0x836FB51C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fb530
	if (!cr6.lt) goto loc_836FB530;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FB530:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FB534:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb534
	if (!cr6.eq) goto loc_836FB534;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FB558;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb56c
	if (cr6.lt) goto loc_836FB56C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FB56C;
	sub_82416268(ctx, base);
loc_836FB56C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FB578:
	// addi r6,r25,-104
	ctx.r6.s64 = ctx.r25.s64 + -104;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836FB590;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb5cc
	if (!cr6.eq) goto loc_836FB5CC;
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,608(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fb5c4
	if (!cr6.eq) goto loc_836FB5C4;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fb5c8
	goto loc_836FB5C8;
loc_836FB5C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FB5C8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FB5CC:
	// addi r6,r25,-96
	ctx.r6.s64 = ctx.r25.s64 + -96;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836FB5E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb678
	if (!cr6.eq) goto loc_836FB678;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x836FB61C;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fb630
	if (!cr6.lt) goto loc_836FB630;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836FB630:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FB634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb634
	if (!cr6.eq) goto loc_836FB634;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FB658;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb66c
	if (cr6.lt) goto loc_836FB66C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836FB66C;
	sub_82416268(ctx, base);
loc_836FB66C:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_836FB678:
	// addi r6,r25,-88
	ctx.r6.s64 = ctx.r25.s64 + -88;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836FB690;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fbbc8
	if (!cr6.eq) goto loc_836FBBC8;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836FB6B4;
	sub_83691BB8(ctx, base);
	// lwz r10,408(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fbbac
	if (!cr6.lt) goto loc_836FBBAC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_836FB6E0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// bl 0x82472fc0
	ctx.lr = 0x836FB714;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-76
	ctx.r6.s64 = ctx.r25.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB72C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb7c0
	if (!cr6.eq) goto loc_836FB7C0;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x836FB764;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fb778
	if (!cr6.lt) goto loc_836FB778;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836FB778:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FB77C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb77c
	if (!cr6.eq) goto loc_836FB77C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FB7A0;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb7b4
	if (cr6.lt) goto loc_836FB7B4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836FB7B4;
	sub_82416268(ctx, base);
loc_836FB7B4:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_836FB7C0:
	// addi r6,r25,-64
	ctx.r6.s64 = ctx.r25.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB7D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb814
	if (!cr6.eq) goto loc_836FB814;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,464(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fb80c
	if (!cr6.eq) goto loc_836FB80C;
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fb810
	goto loc_836FB810;
loc_836FB80C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FB810:
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
loc_836FB814:
	// addi r6,r25,-52
	ctx.r6.s64 = ctx.r25.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB82C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb8c0
	if (!cr6.eq) goto loc_836FB8C0;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x836FB864;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fb878
	if (!cr6.lt) goto loc_836FB878;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836FB878:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FB87C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb87c
	if (!cr6.eq) goto loc_836FB87C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,180
	ctx.r3.s64 = ctx.r28.s64 + 180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FB8A0;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb8b4
	if (cr6.lt) goto loc_836FB8B4;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836FB8B4;
	sub_82416268(ctx, base);
loc_836FB8B4:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
loc_836FB8C0:
	// addi r6,r25,-44
	ctx.r6.s64 = ctx.r25.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB8D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb914
	if (!cr6.eq) goto loc_836FB914;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fb90c
	if (!cr6.eq) goto loc_836FB90C;
	// ld r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fb910
	goto loc_836FB910;
loc_836FB90C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FB910:
	// stw r11,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r11.u32);
loc_836FB914:
	// addi r6,r25,-32
	ctx.r6.s64 = ctx.r25.s64 + -32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB92C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fb9c0
	if (!cr6.eq) goto loc_836FB9C0;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r30,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// bl 0x82472fc0
	ctx.lr = 0x836FB964;
	sub_82472FC0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fb978
	if (!cr6.lt) goto loc_836FB978;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_836FB978:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FB97C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fb97c
	if (!cr6.eq) goto loc_836FB97C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,212
	ctx.r3.s64 = ctx.r28.s64 + 212;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FB9A0;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fb9b4
	if (cr6.lt) goto loc_836FB9B4;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836FB9B4;
	sub_82416268(ctx, base);
loc_836FB9B4:
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// stb r30,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r30.u8);
loc_836FB9C0:
	// addi r6,r25,-24
	ctx.r6.s64 = ctx.r25.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FB9D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fba6c
	if (!cr6.eq) goto loc_836FBA6C;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82472fc0
	ctx.lr = 0x836FBA10;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fba24
	if (!cr6.lt) goto loc_836FBA24;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836FBA24:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FBA28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fba28
	if (!cr6.eq) goto loc_836FBA28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,240
	ctx.r3.s64 = ctx.r28.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FBA4C;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fba60
	if (cr6.lt) goto loc_836FBA60;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836FBA60;
	sub_82416268(ctx, base);
loc_836FBA60:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_836FBA6C:
	// addi r6,r25,-16
	ctx.r6.s64 = ctx.r25.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FBA84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fbad4
	if (!cr6.eq) goto loc_836FBAD4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836fbab8
	if (!cr6.eq) goto loc_836FBAB8;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fbad0
	goto loc_836FBAD0;
loc_836FBAB8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836fbacc
	if (!cr6.eq) goto loc_836FBACC;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836fbad0
	goto loc_836FBAD0;
loc_836FBACC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FBAD0:
	// stw r11,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r11.u32);
loc_836FBAD4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FBAEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fbb80
	if (!cr6.eq) goto loc_836FBB80;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,632(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r4,636(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x82472fc0
	ctx.lr = 0x836FBB24;
	sub_82472FC0(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fbb38
	if (!cr6.lt) goto loc_836FBB38;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_836FBB38:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FBB3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fbb3c
	if (!cr6.eq) goto loc_836FBB3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,272
	ctx.r3.s64 = ctx.r28.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FBB60;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fbb74
	if (cr6.lt) goto loc_836FBB74;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x836FBB74;
	sub_82416268(ctx, base);
loc_836FBB74:
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
loc_836FBB80:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fbb94
	if (cr6.lt) goto loc_836FBB94;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FBB94;
	sub_82416268(ctx, base);
loc_836FBB94:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fb6e0
	if (!cr0.eq) goto loc_836FB6E0;
loc_836FBBAC:
	// lwz r31,416(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fbbc8
	if (cr6.eq) goto loc_836FBBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FBBC0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FBBC8;
	sub_82416268(ctx, base);
loc_836FBBC8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fbbdc
	if (cr6.lt) goto loc_836FBBDC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FBBDC;
	sub_82416268(ctx, base);
loc_836FBBDC:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bne 0x836fb498
	if (!cr0.eq) goto loc_836FB498;
loc_836FBBF4:
	// lwz r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fbc10
	if (cr6.eq) goto loc_836FBC10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FBC08;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FBC10;
	sub_82416268(ctx, base);
loc_836FBC10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBC1C"))) PPC_WEAK_FUNC(sub_836FBC1C);
PPC_FUNC_IMPL(__imp__sub_836FBC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FBC20"))) PPC_WEAK_FUNC(sub_836FBC20);
PPC_FUNC_IMPL(__imp__sub_836FBC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FBC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FBC34;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,31280
	ctx.r30.s64 = ctx.r11.s64 + 31280;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FBC4C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,31596
	ctx.r7.s64 = ctx.r10.s64 + 31596;
	// addi r5,r8,31580
	ctx.r5.s64 = ctx.r8.s64 + 31580;
	// addi r6,r9,31584
	ctx.r6.s64 = ctx.r9.s64 + 31584;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FBC94;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FBCB0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBCBC"))) PPC_WEAK_FUNC(sub_836FBCBC);
PPC_FUNC_IMPL(__imp__sub_836FBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FBCC0"))) PPC_WEAK_FUNC(sub_836FBCC0);
PPC_FUNC_IMPL(__imp__sub_836FBCC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fbd68
	sub_836FBD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBCC8"))) PPC_WEAK_FUNC(sub_836FBCC8);
PPC_FUNC_IMPL(__imp__sub_836FBCC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fbd68
	sub_836FBD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBCD0"))) PPC_WEAK_FUNC(sub_836FBCD0);
PPC_FUNC_IMPL(__imp__sub_836FBCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FBCD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,31596
	ctx.r8.s64 = ctx.r11.s64 + 31596;
	// addi r7,r10,31584
	ctx.r7.s64 = ctx.r10.s64 + 31584;
	// addi r6,r9,31580
	ctx.r6.s64 = ctx.r9.s64 + 31580;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fbd1c
	if (cr6.lt) goto loc_836FBD1C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FBD1C;
	sub_8386D088(ctx, base);
loc_836FBD1C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fbd48
	if (cr6.lt) goto loc_836FBD48;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FBD48;
	sub_8386D088(ctx, base);
loc_836FBD48:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FBD5C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBD64"))) PPC_WEAK_FUNC(sub_836FBD64);
PPC_FUNC_IMPL(__imp__sub_836FBD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FBD68"))) PPC_WEAK_FUNC(sub_836FBD68);
PPC_FUNC_IMPL(__imp__sub_836FBD68) {
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
	// bl 0x836fbcd0
	ctx.lr = 0x836FBD88;
	sub_836FBCD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fbda8
	if (cr6.eq) goto loc_836FBDA8;
	// bl 0x82595188
	ctx.lr = 0x836FBD98;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FBDA8;
	sub_825952B8(ctx, base);
loc_836FBDA8:
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

__attribute__((alias("__imp__sub_836FBDC4"))) PPC_WEAK_FUNC(sub_836FBDC4);
PPC_FUNC_IMPL(__imp__sub_836FBDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FBDC8"))) PPC_WEAK_FUNC(sub_836FBDC8);
PPC_FUNC_IMPL(__imp__sub_836FBDC8) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FBDE0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,31280
	ctx.r4.s64 = ctx.r11.s64 + 31280;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x836FBDF4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,31632
	ctx.r6.s64 = ctx.r10.s64 + 31632;
	// addi r5,r9,31620
	ctx.r5.s64 = ctx.r9.s64 + 31620;
	// addi r4,r8,31616
	ctx.r4.s64 = ctx.r8.s64 + 31616;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r7,31612
	ctx.r11.s64 = ctx.r7.s64 + 31612;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x83697868
	ctx.lr = 0x836FBE2C;
	sub_83697868(ctx, base);
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

__attribute__((alias("__imp__sub_836FBE44"))) PPC_WEAK_FUNC(sub_836FBE44);
PPC_FUNC_IMPL(__imp__sub_836FBE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FBE48"))) PPC_WEAK_FUNC(sub_836FBE48);
PPC_FUNC_IMPL(__imp__sub_836FBE48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fbe60
	sub_836FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBE50"))) PPC_WEAK_FUNC(sub_836FBE50);
PPC_FUNC_IMPL(__imp__sub_836FBE50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fbe60
	sub_836FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBE58"))) PPC_WEAK_FUNC(sub_836FBE58);
PPC_FUNC_IMPL(__imp__sub_836FBE58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fbe60
	sub_836FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FBE60"))) PPC_WEAK_FUNC(sub_836FBE60);
PPC_FUNC_IMPL(__imp__sub_836FBE60) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,31632
	ctx.r7.s64 = ctx.r11.s64 + 31632;
	// addi r6,r10,31620
	ctx.r6.s64 = ctx.r10.s64 + 31620;
	// addi r5,r9,31616
	ctx.r5.s64 = ctx.r9.s64 + 31616;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,31612
	ctx.r4.s64 = ctx.r8.s64 + 31612;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,348
	ctx.r3.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836971d8
	ctx.lr = 0x836FBEB4;
	sub_836971D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836FBEBC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836fbedc
	if (cr6.eq) goto loc_836FBEDC;
	// bl 0x82595188
	ctx.lr = 0x836FBECC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FBEDC;
	sub_825952B8(ctx, base);
loc_836FBEDC:
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

__attribute__((alias("__imp__sub_836FBEF8"))) PPC_WEAK_FUNC(sub_836FBEF8);
PPC_FUNC_IMPL(__imp__sub_836FBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FBF00;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,134
	ctx.r11.s64 = 134;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836fbf40
	if (!cr6.lt) goto loc_836FBF40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FBF40;
	sub_82E745E0(ctx, base);
loc_836FBF40:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,31816
	ctx.r27.s64 = ctx.r11.s64 + 31816;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FBF88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FBF94;
	sub_82E74C08(ctx, base);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fbfa8
	if (cr6.lt) goto loc_836FBFA8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FBFA8;
	sub_82416268(ctx, base);
loc_836FBFA8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x836fbfc8
	if (cr6.lt) goto loc_836FBFC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FBFC8:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_836FBFD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fbfd8
	if (!cr6.eq) goto loc_836FBFD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FBFFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC008;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc01c
	if (cr6.lt) goto loc_836FC01C;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FC01C;
	sub_82416268(ctx, base);
loc_836FC01C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FC044;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC050;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc064
	if (cr6.lt) goto loc_836FC064;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FC064;
	sub_82416268(ctx, base);
loc_836FC064:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FC07C;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836FC098;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC0A4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc0b8
	if (cr6.lt) goto loc_836FC0B8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FC0B8;
	sub_82416268(ctx, base);
loc_836FC0B8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836fc0d8
	if (cr6.lt) goto loc_836FC0D8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FC0D8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_836FC0E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc0e8
	if (!cr6.eq) goto loc_836FC0E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FC10C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC118;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc12c
	if (cr6.lt) goto loc_836FC12C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FC12C;
	sub_82416268(ctx, base);
loc_836FC12C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FC154;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC160;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc174
	if (cr6.lt) goto loc_836FC174;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FC174;
	sub_82416268(ctx, base);
loc_836FC174:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836fc194
	if (cr6.lt) goto loc_836FC194;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FC194:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FC1A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc1a4
	if (!cr6.eq) goto loc_836FC1A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FC1C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC1D4;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc1e8
	if (cr6.lt) goto loc_836FC1E8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FC1E8;
	sub_82416268(ctx, base);
loc_836FC1E8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FC210;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC21C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc230
	if (cr6.lt) goto loc_836FC230;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FC230;
	sub_82416268(ctx, base);
loc_836FC230:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836fc250
	if (cr6.lt) goto loc_836FC250;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FC250:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_836FC260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc260
	if (!cr6.eq) goto loc_836FC260;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FC284;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC290;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc2a4
	if (cr6.lt) goto loc_836FC2A4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FC2A4;
	sub_82416268(ctx, base);
loc_836FC2A4:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FC2CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC2D8;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc2ec
	if (cr6.lt) goto loc_836FC2EC;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FC2EC;
	sub_82416268(ctx, base);
loc_836FC2EC:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x836fc30c
	if (cr6.lt) goto loc_836FC30C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FC30C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_836FC31C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc31c
	if (!cr6.eq) goto loc_836FC31C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FC340;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FC34C;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc360
	if (cr6.lt) goto loc_836FC360;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836FC360;
	sub_82416268(ctx, base);
loc_836FC360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC36C"))) PPC_WEAK_FUNC(sub_836FC36C);
PPC_FUNC_IMPL(__imp__sub_836FC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FC370"))) PPC_WEAK_FUNC(sub_836FC370);
PPC_FUNC_IMPL(__imp__sub_836FC370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FC378;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83691bb8
	ctx.lr = 0x836FC3A0;
	sub_83691BB8(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fc6f8
	if (!cr6.lt) goto loc_836FC6F8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,31876
	ctx.r26.s64 = ctx.r11.s64 + 31876;
loc_836FC3D8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82472fc0
	ctx.lr = 0x836FC40C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FC424;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fc4b8
	if (!cr6.eq) goto loc_836FC4B8;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x836FC45C;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fc470
	if (!cr6.lt) goto loc_836FC470;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836FC470:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FC474:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc474
	if (!cr6.eq) goto loc_836FC474;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FC498;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc4ac
	if (cr6.lt) goto loc_836FC4AC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836FC4AC;
	sub_82416268(ctx, base);
loc_836FC4AC:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_836FC4B8:
	// addi r6,r26,-28
	ctx.r6.s64 = ctx.r26.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FC4D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fc50c
	if (!cr6.eq) goto loc_836FC50C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fc504
	if (!cr6.eq) goto loc_836FC504;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fc508
	goto loc_836FC508;
loc_836FC504:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FC508:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FC50C:
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FC524;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fc5b8
	if (!cr6.eq) goto loc_836FC5B8;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x836FC55C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fc570
	if (!cr6.lt) goto loc_836FC570;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FC570:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FC574:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc574
	if (!cr6.eq) goto loc_836FC574;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FC598;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc5ac
	if (cr6.lt) goto loc_836FC5AC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FC5AC;
	sub_82416268(ctx, base);
loc_836FC5AC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FC5B8:
	// addi r6,r26,-12
	ctx.r6.s64 = ctx.r26.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FC5D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fc664
	if (!cr6.eq) goto loc_836FC664;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FC608;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fc61c
	if (!cr6.lt) goto loc_836FC61C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FC61C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FC620:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fc620
	if (!cr6.eq) goto loc_836FC620;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FC644;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fc658
	if (cr6.lt) goto loc_836FC658;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FC658;
	sub_82416268(ctx, base);
loc_836FC658:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FC664:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FC67C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fc6cc
	if (!cr6.eq) goto loc_836FC6CC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836fc6b0
	if (!cr6.eq) goto loc_836FC6B0;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fc6c8
	goto loc_836FC6C8;
loc_836FC6B0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836fc6c4
	if (!cr6.eq) goto loc_836FC6C4;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836fc6c8
	goto loc_836FC6C8;
loc_836FC6C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FC6C8:
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
loc_836FC6CC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc6e0
	if (cr6.lt) goto loc_836FC6E0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FC6E0;
	sub_82416268(ctx, base);
loc_836FC6E0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fc3d8
	if (!cr0.eq) goto loc_836FC3D8;
loc_836FC6F8:
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fc714
	if (cr6.eq) goto loc_836FC714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FC70C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FC714;
	sub_82416268(ctx, base);
loc_836FC714:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC720"))) PPC_WEAK_FUNC(sub_836FC720);
PPC_FUNC_IMPL(__imp__sub_836FC720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FC728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FC734;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,31696
	ctx.r29.s64 = ctx.r11.s64 + 31696;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FC74C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,31984
	ctx.r7.s64 = ctx.r10.s64 + 31984;
	// addi r5,r8,31968
	ctx.r5.s64 = ctx.r8.s64 + 31968;
	// addi r6,r9,31972
	ctx.r6.s64 = ctx.r9.s64 + 31972;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FC794;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FC7B0;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FC7CC;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FC7E8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC7F4"))) PPC_WEAK_FUNC(sub_836FC7F4);
PPC_FUNC_IMPL(__imp__sub_836FC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FC7F8"))) PPC_WEAK_FUNC(sub_836FC7F8);
PPC_FUNC_IMPL(__imp__sub_836FC7F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fc8e8
	sub_836FC8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC800"))) PPC_WEAK_FUNC(sub_836FC800);
PPC_FUNC_IMPL(__imp__sub_836FC800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fc8e8
	sub_836FC8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC808"))) PPC_WEAK_FUNC(sub_836FC808);
PPC_FUNC_IMPL(__imp__sub_836FC808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FC810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,31984
	ctx.r8.s64 = ctx.r11.s64 + 31984;
	// addi r7,r10,31972
	ctx.r7.s64 = ctx.r10.s64 + 31972;
	// addi r6,r9,31968
	ctx.r6.s64 = ctx.r9.s64 + 31968;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,400
	ctx.r30.s64 = ctx.r3.s64 + 400;
	// lwz r5,420(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fc854
	if (cr6.lt) goto loc_836FC854;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FC854;
	sub_8386D088(ctx, base);
loc_836FC854:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,372
	ctx.r29.s64 = ctx.r28.s64 + 372;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc880
	if (cr6.lt) goto loc_836FC880;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FC880;
	sub_8386D088(ctx, base);
loc_836FC880:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc8a4
	if (cr6.lt) goto loc_836FC8A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FC8A4;
	sub_8386D088(ctx, base);
loc_836FC8A4:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fc8c8
	if (cr6.lt) goto loc_836FC8C8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FC8C8;
	sub_8386D088(ctx, base);
loc_836FC8C8:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FC8DC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC8E4"))) PPC_WEAK_FUNC(sub_836FC8E4);
PPC_FUNC_IMPL(__imp__sub_836FC8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FC8E8"))) PPC_WEAK_FUNC(sub_836FC8E8);
PPC_FUNC_IMPL(__imp__sub_836FC8E8) {
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
	// bl 0x836fc808
	ctx.lr = 0x836FC908;
	sub_836FC808(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fc928
	if (cr6.eq) goto loc_836FC928;
	// bl 0x82595188
	ctx.lr = 0x836FC918;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FC928;
	sub_825952B8(ctx, base);
loc_836FC928:
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

__attribute__((alias("__imp__sub_836FC944"))) PPC_WEAK_FUNC(sub_836FC944);
PPC_FUNC_IMPL(__imp__sub_836FC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FC948"))) PPC_WEAK_FUNC(sub_836FC948);
PPC_FUNC_IMPL(__imp__sub_836FC948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836FC950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836FC95C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,31696
	ctx.r30.s64 = ctx.r11.s64 + 31696;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FC974;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,32008
	ctx.r5.s64 = ctx.r9.s64 + 32008;
	// addi r4,r8,32004
	ctx.r4.s64 = ctx.r8.s64 + 32004;
	// addi r3,r7,32000
	ctx.r3.s64 = ctx.r7.s64 + 32000;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,32020
	ctx.r6.s64 = ctx.r10.s64 + 32020;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// stb r29,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FC9C8;
	sub_824208C8(ctx, base);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC9D8"))) PPC_WEAK_FUNC(sub_836FC9D8);
PPC_FUNC_IMPL(__imp__sub_836FC9D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fca88
	sub_836FCA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC9E0"))) PPC_WEAK_FUNC(sub_836FC9E0);
PPC_FUNC_IMPL(__imp__sub_836FC9E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fca88
	sub_836FCA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC9E8"))) PPC_WEAK_FUNC(sub_836FC9E8);
PPC_FUNC_IMPL(__imp__sub_836FC9E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fca88
	sub_836FCA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FC9F0"))) PPC_WEAK_FUNC(sub_836FC9F0);
PPC_FUNC_IMPL(__imp__sub_836FC9F0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,32020
	ctx.r7.s64 = ctx.r11.s64 + 32020;
	// addi r6,r10,32008
	ctx.r6.s64 = ctx.r10.s64 + 32008;
	// addi r5,r9,32004
	ctx.r5.s64 = ctx.r9.s64 + 32004;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,32000
	ctx.r4.s64 = ctx.r8.s64 + 32000;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836fca50
	if (cr6.lt) goto loc_836FCA50;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FCA50;
	sub_8386D088(ctx, base);
loc_836FCA50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836FCA6C;
	sub_82EAF978(ctx, base);
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

__attribute__((alias("__imp__sub_836FCA84"))) PPC_WEAK_FUNC(sub_836FCA84);
PPC_FUNC_IMPL(__imp__sub_836FCA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FCA88"))) PPC_WEAK_FUNC(sub_836FCA88);
PPC_FUNC_IMPL(__imp__sub_836FCA88) {
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
	// bl 0x836fc9f0
	ctx.lr = 0x836FCAA8;
	sub_836FC9F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fcac8
	if (cr6.eq) goto loc_836FCAC8;
	// bl 0x82595188
	ctx.lr = 0x836FCAB8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FCAC8;
	sub_825952B8(ctx, base);
loc_836FCAC8:
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

__attribute__((alias("__imp__sub_836FCAE4"))) PPC_WEAK_FUNC(sub_836FCAE4);
PPC_FUNC_IMPL(__imp__sub_836FCAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FCAE8"))) PPC_WEAK_FUNC(sub_836FCAE8);
PPC_FUNC_IMPL(__imp__sub_836FCAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FCAF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,137
	ctx.r10.s64 = 137;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836fcb30
	if (!cr6.lt) goto loc_836FCB30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FCB30;
	sub_82E745E0(ctx, base);
loc_836FCB30:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,32284
	ctx.r27.s64 = ctx.r11.s64 + 32284;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r27,-76
	ctx.r4.s64 = ctx.r27.s64 + -76;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCB78;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCB84;
	sub_82E74C08(ctx, base);
	// lwz r5,564(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fcb98
	if (cr6.lt) goto loc_836FCB98;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836FCB98;
	sub_82416268(ctx, base);
loc_836FCB98:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x836fcbb8
	if (cr6.lt) goto loc_836FCBB8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FCBB8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FCBC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fcbc8
	if (!cr6.eq) goto loc_836FCBC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FCBEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCBF8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fcc0c
	if (cr6.lt) goto loc_836FCC0C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FCC0C;
	sub_82416268(ctx, base);
loc_836FCC0C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCC34;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCC40;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fcc54
	if (cr6.lt) goto loc_836FCC54;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836FCC54;
	sub_82416268(ctx, base);
loc_836FCC54:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FCC6C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836FCC88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCC94;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fcca8
	if (cr6.lt) goto loc_836FCCA8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FCCA8;
	sub_82416268(ctx, base);
loc_836FCCA8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836fccc8
	if (cr6.lt) goto loc_836FCCC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FCCC8:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_836FCCD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fccd8
	if (!cr6.eq) goto loc_836FCCD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FCCFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCD08;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fcd1c
	if (cr6.lt) goto loc_836FCD1C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836FCD1C;
	sub_82416268(ctx, base);
loc_836FCD1C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCD44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCD50;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fcd64
	if (cr6.lt) goto loc_836FCD64;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FCD64;
	sub_82416268(ctx, base);
loc_836FCD64:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836fcd84
	if (cr6.lt) goto loc_836FCD84;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FCD84:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_836FCD94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fcd94
	if (!cr6.eq) goto loc_836FCD94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FCDB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCDC4;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fcdd8
	if (cr6.lt) goto loc_836FCDD8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FCDD8;
	sub_82416268(ctx, base);
loc_836FCDD8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCE00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCE0C;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fce20
	if (cr6.lt) goto loc_836FCE20;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FCE20;
	sub_82416268(ctx, base);
loc_836FCE20:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836FCE38;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x836FCE54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCE60;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fce74
	if (cr6.lt) goto loc_836FCE74;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FCE74;
	sub_82416268(ctx, base);
loc_836FCE74:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836fce94
	if (cr6.lt) goto loc_836FCE94;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FCE94:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_836FCEA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fcea4
	if (!cr6.eq) goto loc_836FCEA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FCEC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCED4;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fcee8
	if (cr6.lt) goto loc_836FCEE8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FCEE8;
	sub_82416268(ctx, base);
loc_836FCEE8:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCF10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCF1C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fcf30
	if (cr6.lt) goto loc_836FCF30;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FCF30;
	sub_82416268(ctx, base);
loc_836FCF30:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x836fcf50
	if (cr6.lt) goto loc_836FCF50;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FCF50:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_836FCF60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fcf60
	if (!cr6.eq) goto loc_836FCF60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FCF84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCF90;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fcfa4
	if (cr6.lt) goto loc_836FCFA4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FCFA4;
	sub_82416268(ctx, base);
loc_836FCFA4:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FCFCC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FCFD8;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fcfec
	if (cr6.lt) goto loc_836FCFEC;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FCFEC;
	sub_82416268(ctx, base);
loc_836FCFEC:
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// addi r4,r28,232
	ctx.r4.s64 = ctx.r28.s64 + 232;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x836fd00c
	if (cr6.lt) goto loc_836FD00C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FD00C:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836FD01C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd01c
	if (!cr6.eq) goto loc_836FD01C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FD040;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD04C;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd060
	if (cr6.lt) goto loc_836FD060;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836FD060;
	sub_82416268(ctx, base);
loc_836FD060:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FD088;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD094;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd0a8
	if (cr6.lt) goto loc_836FD0A8;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836FD0A8;
	sub_82416268(ctx, base);
loc_836FD0A8:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// addi r4,r28,260
	ctx.r4.s64 = ctx.r28.s64 + 260;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x836fd0c8
	if (cr6.lt) goto loc_836FD0C8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FD0C8:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
loc_836FD0D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd0d8
	if (!cr6.eq) goto loc_836FD0D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FD0FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD108;
	sub_82E74C08(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd11c
	if (cr6.lt) goto loc_836FD11C;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x836FD11C;
	sub_82416268(ctx, base);
loc_836FD11C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD128"))) PPC_WEAK_FUNC(sub_836FD128);
PPC_FUNC_IMPL(__imp__sub_836FD128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FD130;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836FD158;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fd39c
	if (!cr6.lt) goto loc_836FD39C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,32320
	ctx.r26.s64 = ctx.r11.s64 + 32320;
loc_836FD190:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836FD1C4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FD1DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fd270
	if (!cr6.eq) goto loc_836FD270;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FD214;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fd228
	if (!cr6.lt) goto loc_836FD228;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FD228:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FD22C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd22c
	if (!cr6.eq) goto loc_836FD22C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FD250;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd264
	if (cr6.lt) goto loc_836FD264;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FD264;
	sub_82416268(ctx, base);
loc_836FD264:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FD270:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FD288;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fd2c4
	if (!cr6.eq) goto loc_836FD2C4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fd2bc
	if (!cr6.eq) goto loc_836FD2BC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fd2c0
	goto loc_836FD2C0;
loc_836FD2BC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FD2C0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FD2C4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FD2DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fd370
	if (!cr6.eq) goto loc_836FD370;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836FD314;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fd328
	if (!cr6.lt) goto loc_836FD328;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FD328:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FD32C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd32c
	if (!cr6.eq) goto loc_836FD32C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FD350;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd364
	if (cr6.lt) goto loc_836FD364;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FD364;
	sub_82416268(ctx, base);
loc_836FD364:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FD370:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd384
	if (cr6.lt) goto loc_836FD384;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FD384;
	sub_82416268(ctx, base);
loc_836FD384:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fd190
	if (!cr0.eq) goto loc_836FD190;
loc_836FD39C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fd3b8
	if (cr6.eq) goto loc_836FD3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FD3B0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FD3B8;
	sub_82416268(ctx, base);
loc_836FD3B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD3C4"))) PPC_WEAK_FUNC(sub_836FD3C4);
PPC_FUNC_IMPL(__imp__sub_836FD3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FD3C8"))) PPC_WEAK_FUNC(sub_836FD3C8);
PPC_FUNC_IMPL(__imp__sub_836FD3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FD3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FD3DC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,32088
	ctx.r29.s64 = ctx.r11.s64 + 32088;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FD3F4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,32428
	ctx.r7.s64 = ctx.r10.s64 + 32428;
	// addi r5,r8,32412
	ctx.r5.s64 = ctx.r8.s64 + 32412;
	// addi r6,r9,32416
	ctx.r6.s64 = ctx.r9.s64 + 32416;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD43C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD458;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD478;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD494;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD4B0;
	sub_824208C8(ctx, base);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FD4CC;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD4D8"))) PPC_WEAK_FUNC(sub_836FD4D8);
PPC_FUNC_IMPL(__imp__sub_836FD4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fd610
	sub_836FD610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD4E0"))) PPC_WEAK_FUNC(sub_836FD4E0);
PPC_FUNC_IMPL(__imp__sub_836FD4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fd610
	sub_836FD610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD4E8"))) PPC_WEAK_FUNC(sub_836FD4E8);
PPC_FUNC_IMPL(__imp__sub_836FD4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FD4F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,32428
	ctx.r8.s64 = ctx.r11.s64 + 32428;
	// addi r7,r10,32416
	ctx.r7.s64 = ctx.r10.s64 + 32416;
	// addi r6,r9,32412
	ctx.r6.s64 = ctx.r9.s64 + 32412;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,460
	ctx.r29.s64 = ctx.r3.s64 + 460;
	// lwz r5,480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fd534
	if (cr6.lt) goto loc_836FD534;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD534;
	sub_8386D088(ctx, base);
loc_836FD534:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,432
	ctx.r28.s64 = ctx.r30.s64 + 432;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd560
	if (cr6.lt) goto loc_836FD560;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD560;
	sub_8386D088(ctx, base);
loc_836FD560:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,404
	ctx.r29.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd584
	if (cr6.lt) goto loc_836FD584;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD584;
	sub_8386D088(ctx, base);
loc_836FD584:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,376
	ctx.r28.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd5a8
	if (cr6.lt) goto loc_836FD5A8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD5A8;
	sub_8386D088(ctx, base);
loc_836FD5A8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd5cc
	if (cr6.lt) goto loc_836FD5CC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD5CC;
	sub_8386D088(ctx, base);
loc_836FD5CC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd5f0
	if (cr6.lt) goto loc_836FD5F0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FD5F0;
	sub_8386D088(ctx, base);
loc_836FD5F0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FD604;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD60C"))) PPC_WEAK_FUNC(sub_836FD60C);
PPC_FUNC_IMPL(__imp__sub_836FD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FD610"))) PPC_WEAK_FUNC(sub_836FD610);
PPC_FUNC_IMPL(__imp__sub_836FD610) {
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
	// bl 0x836fd4e8
	ctx.lr = 0x836FD630;
	sub_836FD4E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fd650
	if (cr6.eq) goto loc_836FD650;
	// bl 0x82595188
	ctx.lr = 0x836FD640;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FD650;
	sub_825952B8(ctx, base);
loc_836FD650:
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

__attribute__((alias("__imp__sub_836FD66C"))) PPC_WEAK_FUNC(sub_836FD66C);
PPC_FUNC_IMPL(__imp__sub_836FD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FD670"))) PPC_WEAK_FUNC(sub_836FD670);
PPC_FUNC_IMPL(__imp__sub_836FD670) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FD688;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x824208c8
	ctx.lr = 0x836FD69C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,32476
	ctx.r3.s64 = ctx.r7.s64 + 32476;
	// addi r6,r10,32460
	ctx.r6.s64 = ctx.r10.s64 + 32460;
	// addi r5,r9,32448
	ctx.r5.s64 = ctx.r9.s64 + 32448;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,32444
	ctx.r4.s64 = ctx.r8.s64 + 32444;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836FD6E4"))) PPC_WEAK_FUNC(sub_836FD6E4);
PPC_FUNC_IMPL(__imp__sub_836FD6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FD6E8"))) PPC_WEAK_FUNC(sub_836FD6E8);
PPC_FUNC_IMPL(__imp__sub_836FD6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fd700
	sub_836FD700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD6F0"))) PPC_WEAK_FUNC(sub_836FD6F0);
PPC_FUNC_IMPL(__imp__sub_836FD6F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fd700
	sub_836FD700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD6F8"))) PPC_WEAK_FUNC(sub_836FD6F8);
PPC_FUNC_IMPL(__imp__sub_836FD6F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fd700
	sub_836FD700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FD700"))) PPC_WEAK_FUNC(sub_836FD700);
PPC_FUNC_IMPL(__imp__sub_836FD700) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,32460
	ctx.r7.s64 = ctx.r11.s64 + 32460;
	// addi r6,r10,32448
	ctx.r6.s64 = ctx.r10.s64 + 32448;
	// addi r5,r9,32444
	ctx.r5.s64 = ctx.r9.s64 + 32444;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,32476
	ctx.r4.s64 = ctx.r8.s64 + 32476;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836FD750;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836fd770
	if (cr6.eq) goto loc_836FD770;
	// bl 0x82595188
	ctx.lr = 0x836FD760;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FD770;
	sub_825952B8(ctx, base);
loc_836FD770:
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

__attribute__((alias("__imp__sub_836FD78C"))) PPC_WEAK_FUNC(sub_836FD78C);
PPC_FUNC_IMPL(__imp__sub_836FD78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FD790"))) PPC_WEAK_FUNC(sub_836FD790);
PPC_FUNC_IMPL(__imp__sub_836FD790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FD798;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836fd7d8
	if (!cr6.lt) goto loc_836FD7D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FD7D8;
	sub_82E745E0(ctx, base);
loc_836FD7D8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,32612
	ctx.r27.s64 = ctx.r11.s64 + 32612;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FD820;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD82C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fd840
	if (cr6.lt) goto loc_836FD840;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FD840;
	sub_82416268(ctx, base);
loc_836FD840:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836fd860
	if (cr6.lt) goto loc_836FD860;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FD860:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FD870:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd870
	if (!cr6.eq) goto loc_836FD870;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FD894;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD8A0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd8b4
	if (cr6.lt) goto loc_836FD8B4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FD8B4;
	sub_82416268(ctx, base);
loc_836FD8B4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FD8DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD8E8;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd8fc
	if (cr6.lt) goto loc_836FD8FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FD8FC;
	sub_82416268(ctx, base);
loc_836FD8FC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FD914;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836FD930;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD93C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fd950
	if (cr6.lt) goto loc_836FD950;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FD950;
	sub_82416268(ctx, base);
loc_836FD950:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836fd970
	if (cr6.lt) goto loc_836FD970;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FD970:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836FD980:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fd980
	if (!cr6.eq) goto loc_836FD980;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FD9A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD9B0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fd9c4
	if (cr6.lt) goto loc_836FD9C4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FD9C4;
	sub_82416268(ctx, base);
loc_836FD9C4:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FD9EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FD9F8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fda0c
	if (cr6.lt) goto loc_836FDA0C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FDA0C;
	sub_82416268(ctx, base);
loc_836FDA0C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836fda2c
	if (cr6.lt) goto loc_836FDA2C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FDA2C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836FDA3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fda3c
	if (!cr6.eq) goto loc_836FDA3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FDA60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FDA6C;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fda80
	if (cr6.lt) goto loc_836FDA80;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FDA80;
	sub_82416268(ctx, base);
loc_836FDA80:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FDAA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FDAB4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fdac8
	if (cr6.lt) goto loc_836FDAC8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FDAC8;
	sub_82416268(ctx, base);
loc_836FDAC8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836FDAE0;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDAEC"))) PPC_WEAK_FUNC(sub_836FDAEC);
PPC_FUNC_IMPL(__imp__sub_836FDAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FDAF0"))) PPC_WEAK_FUNC(sub_836FDAF0);
PPC_FUNC_IMPL(__imp__sub_836FDAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FDAF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836FDB20;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fdd64
	if (!cr6.lt) goto loc_836FDD64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,32632
	ctx.r26.s64 = ctx.r11.s64 + 32632;
loc_836FDB58:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836FDB8C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FDBA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fdc38
	if (!cr6.eq) goto loc_836FDC38;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FDBDC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fdbf0
	if (!cr6.lt) goto loc_836FDBF0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FDBF0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FDBF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fdbf4
	if (!cr6.eq) goto loc_836FDBF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FDC18;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fdc2c
	if (cr6.lt) goto loc_836FDC2C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FDC2C;
	sub_82416268(ctx, base);
loc_836FDC2C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FDC38:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FDC50;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fdc8c
	if (!cr6.eq) goto loc_836FDC8C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fdc84
	if (!cr6.eq) goto loc_836FDC84;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fdc88
	goto loc_836FDC88;
loc_836FDC84:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FDC88:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FDC8C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FDCA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fdd38
	if (!cr6.eq) goto loc_836FDD38;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836FDCDC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fdcf0
	if (!cr6.lt) goto loc_836FDCF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FDCF0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FDCF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fdcf4
	if (!cr6.eq) goto loc_836FDCF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FDD18;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fdd2c
	if (cr6.lt) goto loc_836FDD2C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FDD2C;
	sub_82416268(ctx, base);
loc_836FDD2C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FDD38:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fdd4c
	if (cr6.lt) goto loc_836FDD4C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FDD4C;
	sub_82416268(ctx, base);
loc_836FDD4C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fdb58
	if (!cr0.eq) goto loc_836FDB58;
loc_836FDD64:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fdd80
	if (cr6.eq) goto loc_836FDD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FDD78;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FDD80;
	sub_82416268(ctx, base);
loc_836FDD80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDD8C"))) PPC_WEAK_FUNC(sub_836FDD8C);
PPC_FUNC_IMPL(__imp__sub_836FDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FDD90"))) PPC_WEAK_FUNC(sub_836FDD90);
PPC_FUNC_IMPL(__imp__sub_836FDD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FDD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FDDA4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,32528
	ctx.r29.s64 = ctx.r11.s64 + 32528;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FDDBC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,32740
	ctx.r7.s64 = ctx.r10.s64 + 32740;
	// addi r5,r8,32724
	ctx.r5.s64 = ctx.r8.s64 + 32724;
	// addi r6,r9,32728
	ctx.r6.s64 = ctx.r9.s64 + 32728;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FDE04;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FDE20;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDE30"))) PPC_WEAK_FUNC(sub_836FDE30);
PPC_FUNC_IMPL(__imp__sub_836FDE30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fded8
	sub_836FDED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDE38"))) PPC_WEAK_FUNC(sub_836FDE38);
PPC_FUNC_IMPL(__imp__sub_836FDE38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fded8
	sub_836FDED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDE40"))) PPC_WEAK_FUNC(sub_836FDE40);
PPC_FUNC_IMPL(__imp__sub_836FDE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FDE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,32740
	ctx.r8.s64 = ctx.r11.s64 + 32740;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r6,r9,32724
	ctx.r6.s64 = ctx.r9.s64 + 32724;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fde8c
	if (cr6.lt) goto loc_836FDE8C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FDE8C;
	sub_8386D088(ctx, base);
loc_836FDE8C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fdeb8
	if (cr6.lt) goto loc_836FDEB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FDEB8;
	sub_8386D088(ctx, base);
loc_836FDEB8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FDECC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDED4"))) PPC_WEAK_FUNC(sub_836FDED4);
PPC_FUNC_IMPL(__imp__sub_836FDED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FDED8"))) PPC_WEAK_FUNC(sub_836FDED8);
PPC_FUNC_IMPL(__imp__sub_836FDED8) {
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
	// bl 0x836fde40
	ctx.lr = 0x836FDEF8;
	sub_836FDE40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fdf18
	if (cr6.eq) goto loc_836FDF18;
	// bl 0x82595188
	ctx.lr = 0x836FDF08;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FDF18;
	sub_825952B8(ctx, base);
loc_836FDF18:
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

__attribute__((alias("__imp__sub_836FDF34"))) PPC_WEAK_FUNC(sub_836FDF34);
PPC_FUNC_IMPL(__imp__sub_836FDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FDF38"))) PPC_WEAK_FUNC(sub_836FDF38);
PPC_FUNC_IMPL(__imp__sub_836FDF38) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FDF50;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x824208c8
	ctx.lr = 0x836FDF64;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-32748
	ctx.r3.s64 = ctx.r7.s64 + -32748;
	// addi r6,r10,-32764
	ctx.r6.s64 = ctx.r10.s64 + -32764;
	// addi r5,r9,32760
	ctx.r5.s64 = ctx.r9.s64 + 32760;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,32756
	ctx.r4.s64 = ctx.r8.s64 + 32756;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836FDFAC"))) PPC_WEAK_FUNC(sub_836FDFAC);
PPC_FUNC_IMPL(__imp__sub_836FDFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FDFB0"))) PPC_WEAK_FUNC(sub_836FDFB0);
PPC_FUNC_IMPL(__imp__sub_836FDFB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fdfc8
	sub_836FDFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDFB8"))) PPC_WEAK_FUNC(sub_836FDFB8);
PPC_FUNC_IMPL(__imp__sub_836FDFB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fdfc8
	sub_836FDFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDFC0"))) PPC_WEAK_FUNC(sub_836FDFC0);
PPC_FUNC_IMPL(__imp__sub_836FDFC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fdfc8
	sub_836FDFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FDFC8"))) PPC_WEAK_FUNC(sub_836FDFC8);
PPC_FUNC_IMPL(__imp__sub_836FDFC8) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-32764
	ctx.r7.s64 = ctx.r11.s64 + -32764;
	// addi r6,r10,32760
	ctx.r6.s64 = ctx.r10.s64 + 32760;
	// addi r5,r9,32756
	ctx.r5.s64 = ctx.r9.s64 + 32756;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-32748
	ctx.r4.s64 = ctx.r8.s64 + -32748;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836FE018;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836fe038
	if (cr6.eq) goto loc_836FE038;
	// bl 0x82595188
	ctx.lr = 0x836FE028;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FE038;
	sub_825952B8(ctx, base);
loc_836FE038:
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

__attribute__((alias("__imp__sub_836FE054"))) PPC_WEAK_FUNC(sub_836FE054);
PPC_FUNC_IMPL(__imp__sub_836FE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE058"))) PPC_WEAK_FUNC(sub_836FE058);
PPC_FUNC_IMPL(__imp__sub_836FE058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FE060;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836fe0a0
	if (!cr6.lt) goto loc_836FE0A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FE0A0;
	sub_82E745E0(ctx, base);
loc_836FE0A0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-32588
	ctx.r27.s64 = ctx.r11.s64 + -32588;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FE0E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE0F4;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fe108
	if (cr6.lt) goto loc_836FE108;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FE108;
	sub_82416268(ctx, base);
loc_836FE108:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836fe128
	if (cr6.lt) goto loc_836FE128;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FE128:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FE138:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe138
	if (!cr6.eq) goto loc_836FE138;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FE15C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE168;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe17c
	if (cr6.lt) goto loc_836FE17C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FE17C;
	sub_82416268(ctx, base);
loc_836FE17C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FE1A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE1B0;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe1c4
	if (cr6.lt) goto loc_836FE1C4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FE1C4;
	sub_82416268(ctx, base);
loc_836FE1C4:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FE1DC;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836FE1F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE204;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe218
	if (cr6.lt) goto loc_836FE218;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FE218;
	sub_82416268(ctx, base);
loc_836FE218:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836fe238
	if (cr6.lt) goto loc_836FE238;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FE238:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836FE248:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe248
	if (!cr6.eq) goto loc_836FE248;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FE26C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE278;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe28c
	if (cr6.lt) goto loc_836FE28C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FE28C;
	sub_82416268(ctx, base);
loc_836FE28C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FE2B4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE2C0;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe2d4
	if (cr6.lt) goto loc_836FE2D4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FE2D4;
	sub_82416268(ctx, base);
loc_836FE2D4:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836fe2f4
	if (cr6.lt) goto loc_836FE2F4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FE2F4:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_836FE304:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe304
	if (!cr6.eq) goto loc_836FE304;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FE328;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE334;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe348
	if (cr6.lt) goto loc_836FE348;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FE348;
	sub_82416268(ctx, base);
loc_836FE348:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FE370;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE37C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe390
	if (cr6.lt) goto loc_836FE390;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FE390;
	sub_82416268(ctx, base);
loc_836FE390:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836FE3A8;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836FE3C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE3D0;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe3e4
	if (cr6.lt) goto loc_836FE3E4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FE3E4;
	sub_82416268(ctx, base);
loc_836FE3E4:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836fe404
	if (cr6.lt) goto loc_836FE404;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FE404:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_836FE414:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe414
	if (!cr6.eq) goto loc_836FE414;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FE438;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FE444;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe458
	if (cr6.lt) goto loc_836FE458;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FE458;
	sub_82416268(ctx, base);
loc_836FE458:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE464"))) PPC_WEAK_FUNC(sub_836FE464);
PPC_FUNC_IMPL(__imp__sub_836FE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE468"))) PPC_WEAK_FUNC(sub_836FE468);
PPC_FUNC_IMPL(__imp__sub_836FE468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FE470;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836FE498;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fe6dc
	if (!cr6.lt) goto loc_836FE6DC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-32560
	ctx.r26.s64 = ctx.r11.s64 + -32560;
loc_836FE4D0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836FE504;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FE51C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fe5b0
	if (!cr6.eq) goto loc_836FE5B0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FE554;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fe568
	if (!cr6.lt) goto loc_836FE568;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FE568:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FE56C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe56c
	if (!cr6.eq) goto loc_836FE56C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FE590;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe5a4
	if (cr6.lt) goto loc_836FE5A4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FE5A4;
	sub_82416268(ctx, base);
loc_836FE5A4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FE5B0:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FE5C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fe604
	if (!cr6.eq) goto loc_836FE604;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836fe5fc
	if (!cr6.eq) goto loc_836FE5FC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836fe600
	goto loc_836FE600;
loc_836FE5FC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FE600:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FE604:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FE61C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fe6b0
	if (!cr6.eq) goto loc_836FE6B0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836FE654;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fe668
	if (!cr6.lt) goto loc_836FE668;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FE668:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FE66C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fe66c
	if (!cr6.eq) goto loc_836FE66C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FE690;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fe6a4
	if (cr6.lt) goto loc_836FE6A4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FE6A4;
	sub_82416268(ctx, base);
loc_836FE6A4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FE6B0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe6c4
	if (cr6.lt) goto loc_836FE6C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FE6C4;
	sub_82416268(ctx, base);
loc_836FE6C4:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836fe4d0
	if (!cr0.eq) goto loc_836FE4D0;
loc_836FE6DC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fe6f8
	if (cr6.eq) goto loc_836FE6F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FE6F0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FE6F8;
	sub_82416268(ctx, base);
loc_836FE6F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE704"))) PPC_WEAK_FUNC(sub_836FE704);
PPC_FUNC_IMPL(__imp__sub_836FE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE708"))) PPC_WEAK_FUNC(sub_836FE708);
PPC_FUNC_IMPL(__imp__sub_836FE708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FE710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FE71C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-32696
	ctx.r29.s64 = ctx.r11.s64 + -32696;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FE734;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-32452
	ctx.r7.s64 = ctx.r10.s64 + -32452;
	// addi r5,r8,-32468
	ctx.r5.s64 = ctx.r8.s64 + -32468;
	// addi r6,r9,-32464
	ctx.r6.s64 = ctx.r9.s64 + -32464;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FE77C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FE798;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FE7B8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE7C4"))) PPC_WEAK_FUNC(sub_836FE7C4);
PPC_FUNC_IMPL(__imp__sub_836FE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE7C8"))) PPC_WEAK_FUNC(sub_836FE7C8);
PPC_FUNC_IMPL(__imp__sub_836FE7C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fe890
	sub_836FE890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE7D0"))) PPC_WEAK_FUNC(sub_836FE7D0);
PPC_FUNC_IMPL(__imp__sub_836FE7D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fe890
	sub_836FE890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE7D8"))) PPC_WEAK_FUNC(sub_836FE7D8);
PPC_FUNC_IMPL(__imp__sub_836FE7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FE7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-32452
	ctx.r8.s64 = ctx.r11.s64 + -32452;
	// addi r7,r10,-32464
	ctx.r7.s64 = ctx.r10.s64 + -32464;
	// addi r6,r9,-32468
	ctx.r6.s64 = ctx.r9.s64 + -32468;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836fe824
	if (cr6.lt) goto loc_836FE824;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FE824;
	sub_8386D088(ctx, base);
loc_836FE824:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe850
	if (cr6.lt) goto loc_836FE850;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FE850;
	sub_8386D088(ctx, base);
loc_836FE850:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fe874
	if (cr6.lt) goto loc_836FE874;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FE874;
	sub_8386D088(ctx, base);
loc_836FE874:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FE888;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE890"))) PPC_WEAK_FUNC(sub_836FE890);
PPC_FUNC_IMPL(__imp__sub_836FE890) {
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
	// bl 0x836fe7d8
	ctx.lr = 0x836FE8B0;
	sub_836FE7D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836fe8d0
	if (cr6.eq) goto loc_836FE8D0;
	// bl 0x82595188
	ctx.lr = 0x836FE8C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FE8D0;
	sub_825952B8(ctx, base);
loc_836FE8D0:
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

__attribute__((alias("__imp__sub_836FE8EC"))) PPC_WEAK_FUNC(sub_836FE8EC);
PPC_FUNC_IMPL(__imp__sub_836FE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE8F0"))) PPC_WEAK_FUNC(sub_836FE8F0);
PPC_FUNC_IMPL(__imp__sub_836FE8F0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FE908;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-32696
	ctx.r4.s64 = ctx.r11.s64 + -32696;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x824208c8
	ctx.lr = 0x836FE91C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-32404
	ctx.r3.s64 = ctx.r7.s64 + -32404;
	// addi r6,r10,-32420
	ctx.r6.s64 = ctx.r10.s64 + -32420;
	// addi r5,r9,-32432
	ctx.r5.s64 = ctx.r9.s64 + -32432;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-32436
	ctx.r4.s64 = ctx.r8.s64 + -32436;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836FE964"))) PPC_WEAK_FUNC(sub_836FE964);
PPC_FUNC_IMPL(__imp__sub_836FE964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FE968"))) PPC_WEAK_FUNC(sub_836FE968);
PPC_FUNC_IMPL(__imp__sub_836FE968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836fe980
	sub_836FE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE970"))) PPC_WEAK_FUNC(sub_836FE970);
PPC_FUNC_IMPL(__imp__sub_836FE970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836fe980
	sub_836FE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE978"))) PPC_WEAK_FUNC(sub_836FE978);
PPC_FUNC_IMPL(__imp__sub_836FE978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836fe980
	sub_836FE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FE980"))) PPC_WEAK_FUNC(sub_836FE980);
PPC_FUNC_IMPL(__imp__sub_836FE980) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-32420
	ctx.r7.s64 = ctx.r11.s64 + -32420;
	// addi r6,r10,-32432
	ctx.r6.s64 = ctx.r10.s64 + -32432;
	// addi r5,r9,-32436
	ctx.r5.s64 = ctx.r9.s64 + -32436;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-32404
	ctx.r4.s64 = ctx.r8.s64 + -32404;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836FE9D0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836fe9f0
	if (cr6.eq) goto loc_836FE9F0;
	// bl 0x82595188
	ctx.lr = 0x836FE9E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FE9F0;
	sub_825952B8(ctx, base);
loc_836FE9F0:
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

__attribute__((alias("__imp__sub_836FEA0C"))) PPC_WEAK_FUNC(sub_836FEA0C);
PPC_FUNC_IMPL(__imp__sub_836FEA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FEA10"))) PPC_WEAK_FUNC(sub_836FEA10);
PPC_FUNC_IMPL(__imp__sub_836FEA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FEA18;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,137
	ctx.r10.s64 = 137;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836fea58
	if (!cr6.lt) goto loc_836FEA58;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FEA58;
	sub_82E745E0(ctx, base);
loc_836FEA58:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-32164
	ctx.r27.s64 = ctx.r11.s64 + -32164;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r27,-76
	ctx.r4.s64 = ctx.r27.s64 + -76;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEAA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEAAC;
	sub_82E74C08(ctx, base);
	// lwz r5,564(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836feac0
	if (cr6.lt) goto loc_836FEAC0;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836FEAC0;
	sub_82416268(ctx, base);
loc_836FEAC0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x836feae0
	if (cr6.lt) goto loc_836FEAE0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEAE0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836FEAF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836feaf0
	if (!cr6.eq) goto loc_836FEAF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FEB14;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEB20;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836feb34
	if (cr6.lt) goto loc_836FEB34;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FEB34;
	sub_82416268(ctx, base);
loc_836FEB34:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEB5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEB68;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836feb7c
	if (cr6.lt) goto loc_836FEB7C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836FEB7C;
	sub_82416268(ctx, base);
loc_836FEB7C:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FEB94;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836FEBB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEBBC;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836febd0
	if (cr6.lt) goto loc_836FEBD0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FEBD0;
	sub_82416268(ctx, base);
loc_836FEBD0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836febf0
	if (cr6.lt) goto loc_836FEBF0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEBF0:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_836FEC00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fec00
	if (!cr6.eq) goto loc_836FEC00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FEC24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEC30;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fec44
	if (cr6.lt) goto loc_836FEC44;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836FEC44;
	sub_82416268(ctx, base);
loc_836FEC44:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEC6C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEC78;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fec8c
	if (cr6.lt) goto loc_836FEC8C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FEC8C;
	sub_82416268(ctx, base);
loc_836FEC8C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836fecac
	if (cr6.lt) goto loc_836FECAC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FECAC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_836FECBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fecbc
	if (!cr6.eq) goto loc_836FECBC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FECE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FECEC;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fed00
	if (cr6.lt) goto loc_836FED00;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FED00;
	sub_82416268(ctx, base);
loc_836FED00:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FED28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FED34;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fed48
	if (cr6.lt) goto loc_836FED48;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FED48;
	sub_82416268(ctx, base);
loc_836FED48:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836FED60;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x836FED7C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FED88;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fed9c
	if (cr6.lt) goto loc_836FED9C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FED9C;
	sub_82416268(ctx, base);
loc_836FED9C:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836fedbc
	if (cr6.lt) goto loc_836FEDBC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEDBC:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_836FEDCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fedcc
	if (!cr6.eq) goto loc_836FEDCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FEDF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEDFC;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fee10
	if (cr6.lt) goto loc_836FEE10;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FEE10;
	sub_82416268(ctx, base);
loc_836FEE10:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEE38;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEE44;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fee58
	if (cr6.lt) goto loc_836FEE58;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FEE58;
	sub_82416268(ctx, base);
loc_836FEE58:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x836fee78
	if (cr6.lt) goto loc_836FEE78;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEE78:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_836FEE88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fee88
	if (!cr6.eq) goto loc_836FEE88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FEEAC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEEB8;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836feecc
	if (cr6.lt) goto loc_836FEECC;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FEECC;
	sub_82416268(ctx, base);
loc_836FEECC:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEEF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEF00;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fef14
	if (cr6.lt) goto loc_836FEF14;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FEF14;
	sub_82416268(ctx, base);
loc_836FEF14:
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// addi r4,r28,232
	ctx.r4.s64 = ctx.r28.s64 + 232;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x836fef34
	if (cr6.lt) goto loc_836FEF34;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEF34:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836FEF44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fef44
	if (!cr6.eq) goto loc_836FEF44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FEF68;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEF74;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fef88
	if (cr6.lt) goto loc_836FEF88;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836FEF88;
	sub_82416268(ctx, base);
loc_836FEF88:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FEFB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FEFBC;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fefd0
	if (cr6.lt) goto loc_836FEFD0;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836FEFD0;
	sub_82416268(ctx, base);
loc_836FEFD0:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// addi r4,r28,260
	ctx.r4.s64 = ctx.r28.s64 + 260;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x836feff0
	if (cr6.lt) goto loc_836FEFF0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FEFF0:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
loc_836FF000:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff000
	if (!cr6.eq) goto loc_836FF000;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FF024;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF030;
	sub_82E74C08(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff044
	if (cr6.lt) goto loc_836FF044;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x836FF044;
	sub_82416268(ctx, base);
loc_836FF044:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF050"))) PPC_WEAK_FUNC(sub_836FF050);
PPC_FUNC_IMPL(__imp__sub_836FF050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FF058;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836FF080;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ff2c4
	if (!cr6.lt) goto loc_836FF2C4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-32132
	ctx.r26.s64 = ctx.r11.s64 + -32132;
loc_836FF0B8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836FF0EC;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FF104;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ff198
	if (!cr6.eq) goto loc_836FF198;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FF13C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ff150
	if (!cr6.lt) goto loc_836FF150;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FF150:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FF154:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff154
	if (!cr6.eq) goto loc_836FF154;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FF178;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff18c
	if (cr6.lt) goto loc_836FF18C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FF18C;
	sub_82416268(ctx, base);
loc_836FF18C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836FF198:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FF1B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ff1ec
	if (!cr6.eq) goto loc_836FF1EC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ff1e4
	if (!cr6.eq) goto loc_836FF1E4;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ff1e8
	goto loc_836FF1E8;
loc_836FF1E4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836FF1E8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FF1EC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FF204;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ff298
	if (!cr6.eq) goto loc_836FF298;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836FF23C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ff250
	if (!cr6.lt) goto loc_836FF250;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FF250:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FF254:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff254
	if (!cr6.eq) goto loc_836FF254;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FF278;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff28c
	if (cr6.lt) goto loc_836FF28C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FF28C;
	sub_82416268(ctx, base);
loc_836FF28C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836FF298:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff2ac
	if (cr6.lt) goto loc_836FF2AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FF2AC;
	sub_82416268(ctx, base);
loc_836FF2AC:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836ff0b8
	if (!cr0.eq) goto loc_836FF0B8;
loc_836FF2C4:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ff2e0
	if (cr6.eq) goto loc_836FF2E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FF2D8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FF2E0;
	sub_82416268(ctx, base);
loc_836FF2E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF2EC"))) PPC_WEAK_FUNC(sub_836FF2EC);
PPC_FUNC_IMPL(__imp__sub_836FF2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FF2F0"))) PPC_WEAK_FUNC(sub_836FF2F0);
PPC_FUNC_IMPL(__imp__sub_836FF2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FF2F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FF304;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-32352
	ctx.r29.s64 = ctx.r11.s64 + -32352;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836FF31C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-32024
	ctx.r7.s64 = ctx.r10.s64 + -32024;
	// addi r5,r8,-32040
	ctx.r5.s64 = ctx.r8.s64 + -32040;
	// addi r6,r9,-32036
	ctx.r6.s64 = ctx.r9.s64 + -32036;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF364;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF380;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF3A0;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF3BC;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF3D8;
	sub_824208C8(ctx, base);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836FF3F4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF400"))) PPC_WEAK_FUNC(sub_836FF400);
PPC_FUNC_IMPL(__imp__sub_836FF400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ff538
	sub_836FF538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF408"))) PPC_WEAK_FUNC(sub_836FF408);
PPC_FUNC_IMPL(__imp__sub_836FF408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ff538
	sub_836FF538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF410"))) PPC_WEAK_FUNC(sub_836FF410);
PPC_FUNC_IMPL(__imp__sub_836FF410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FF418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-32024
	ctx.r8.s64 = ctx.r11.s64 + -32024;
	// addi r7,r10,-32036
	ctx.r7.s64 = ctx.r10.s64 + -32036;
	// addi r6,r9,-32040
	ctx.r6.s64 = ctx.r9.s64 + -32040;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,460
	ctx.r29.s64 = ctx.r3.s64 + 460;
	// lwz r5,480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ff45c
	if (cr6.lt) goto loc_836FF45C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF45C;
	sub_8386D088(ctx, base);
loc_836FF45C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,432
	ctx.r28.s64 = ctx.r30.s64 + 432;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff488
	if (cr6.lt) goto loc_836FF488;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF488;
	sub_8386D088(ctx, base);
loc_836FF488:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,404
	ctx.r29.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff4ac
	if (cr6.lt) goto loc_836FF4AC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF4AC;
	sub_8386D088(ctx, base);
loc_836FF4AC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,376
	ctx.r28.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff4d0
	if (cr6.lt) goto loc_836FF4D0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF4D0;
	sub_8386D088(ctx, base);
loc_836FF4D0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff4f4
	if (cr6.lt) goto loc_836FF4F4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF4F4;
	sub_8386D088(ctx, base);
loc_836FF4F4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff518
	if (cr6.lt) goto loc_836FF518;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836FF518;
	sub_8386D088(ctx, base);
loc_836FF518:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836FF52C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF534"))) PPC_WEAK_FUNC(sub_836FF534);
PPC_FUNC_IMPL(__imp__sub_836FF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FF538"))) PPC_WEAK_FUNC(sub_836FF538);
PPC_FUNC_IMPL(__imp__sub_836FF538) {
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
	// bl 0x836ff410
	ctx.lr = 0x836FF558;
	sub_836FF410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836ff578
	if (cr6.eq) goto loc_836FF578;
	// bl 0x82595188
	ctx.lr = 0x836FF568;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FF578;
	sub_825952B8(ctx, base);
loc_836FF578:
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

__attribute__((alias("__imp__sub_836FF594"))) PPC_WEAK_FUNC(sub_836FF594);
PPC_FUNC_IMPL(__imp__sub_836FF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FF598"))) PPC_WEAK_FUNC(sub_836FF598);
PPC_FUNC_IMPL(__imp__sub_836FF598) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836FF5B0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-32352
	ctx.r4.s64 = ctx.r11.s64 + -32352;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x836FF5C4;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-31976
	ctx.r3.s64 = ctx.r7.s64 + -31976;
	// addi r6,r10,-31992
	ctx.r6.s64 = ctx.r10.s64 + -31992;
	// addi r5,r9,-32004
	ctx.r5.s64 = ctx.r9.s64 + -32004;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-32008
	ctx.r4.s64 = ctx.r8.s64 + -32008;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836FF60C"))) PPC_WEAK_FUNC(sub_836FF60C);
PPC_FUNC_IMPL(__imp__sub_836FF60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FF610"))) PPC_WEAK_FUNC(sub_836FF610);
PPC_FUNC_IMPL(__imp__sub_836FF610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ff628
	sub_836FF628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF618"))) PPC_WEAK_FUNC(sub_836FF618);
PPC_FUNC_IMPL(__imp__sub_836FF618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836ff628
	sub_836FF628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF620"))) PPC_WEAK_FUNC(sub_836FF620);
PPC_FUNC_IMPL(__imp__sub_836FF620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ff628
	sub_836FF628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FF628"))) PPC_WEAK_FUNC(sub_836FF628);
PPC_FUNC_IMPL(__imp__sub_836FF628) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-31992
	ctx.r7.s64 = ctx.r11.s64 + -31992;
	// addi r6,r10,-32004
	ctx.r6.s64 = ctx.r10.s64 + -32004;
	// addi r5,r9,-32008
	ctx.r5.s64 = ctx.r9.s64 + -32008;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-31976
	ctx.r4.s64 = ctx.r8.s64 + -31976;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836FF678;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ff698
	if (cr6.eq) goto loc_836FF698;
	// bl 0x82595188
	ctx.lr = 0x836FF688;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836FF698;
	sub_825952B8(ctx, base);
loc_836FF698:
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

__attribute__((alias("__imp__sub_836FF6B4"))) PPC_WEAK_FUNC(sub_836FF6B4);
PPC_FUNC_IMPL(__imp__sub_836FF6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FF6B8"))) PPC_WEAK_FUNC(sub_836FF6B8);
PPC_FUNC_IMPL(__imp__sub_836FF6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836FF6C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,136
	ctx.r10.s64 = 136;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836ff700
	if (!cr6.lt) goto loc_836FF700;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836FF700;
	sub_82E745E0(ctx, base);
loc_836FF700:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-31768
	ctx.r27.s64 = ctx.r11.s64 + -31768;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r27,-76
	ctx.r4.s64 = ctx.r27.s64 + -76;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FF748;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF754;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ff768
	if (cr6.lt) goto loc_836FF768;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836FF768;
	sub_82416268(ctx, base);
loc_836FF768:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836ff788
	if (cr6.lt) goto loc_836FF788;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FF788:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836FF798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff798
	if (!cr6.eq) goto loc_836FF798;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FF7BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF7C8;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff7dc
	if (cr6.lt) goto loc_836FF7DC;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836FF7DC;
	sub_82416268(ctx, base);
loc_836FF7DC:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FF804;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF810;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff824
	if (cr6.lt) goto loc_836FF824;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836FF824;
	sub_82416268(ctx, base);
loc_836FF824:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836FF83C;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x836FF858;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF864;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff878
	if (cr6.lt) goto loc_836FF878;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836FF878;
	sub_82416268(ctx, base);
loc_836FF878:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x836ff898
	if (cr6.lt) goto loc_836FF898;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FF898:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836FF8A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff8a8
	if (!cr6.eq) goto loc_836FF8A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FF8CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF8D8;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff8ec
	if (cr6.lt) goto loc_836FF8EC;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836FF8EC;
	sub_82416268(ctx, base);
loc_836FF8EC:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FF914;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF920;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff934
	if (cr6.lt) goto loc_836FF934;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836FF934;
	sub_82416268(ctx, base);
loc_836FF934:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x836ff954
	if (cr6.lt) goto loc_836FF954;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FF954:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_836FF964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ff964
	if (!cr6.eq) goto loc_836FF964;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FF988;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF994;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ff9a8
	if (cr6.lt) goto loc_836FF9A8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836FF9A8;
	sub_82416268(ctx, base);
loc_836FF9A8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FF9D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FF9DC;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ff9f0
	if (cr6.lt) goto loc_836FF9F0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836FF9F0;
	sub_82416268(ctx, base);
loc_836FF9F0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e97d90
	ctx.lr = 0x836FFA08;
	sub_82E97D90(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x836FFA24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFA30;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ffa44
	if (cr6.lt) goto loc_836FFA44;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836FFA44;
	sub_82416268(ctx, base);
loc_836FFA44:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// ori r10,r11,176
	ctx.r10.u64 = ctx.r11.u64 | 176;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x83354d50
	ctx.lr = 0x836FFA78;
	sub_83354D50(ctx, base);
	// lwz r9,564(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x836ffa8c
	if (!cr6.lt) goto loc_836FFA8C;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
loc_836FFA8C:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_836FFA9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ffa9c
	if (!cr6.eq) goto loc_836FFA9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FFAC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFACC;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ffae0
	if (cr6.lt) goto loc_836FFAE0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836FFAE0;
	sub_82416268(ctx, base);
loc_836FFAE0:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FFB08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFB14;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ffb28
	if (cr6.lt) goto loc_836FFB28;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836FFB28;
	sub_82416268(ctx, base);
loc_836FFB28:
	// addis r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 65536;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r4,180
	ctx.r4.s64 = ctx.r4.s64 + 180;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ffb4c
	if (cr6.lt) goto loc_836FFB4C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FFB4C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836FFB5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ffb5c
	if (!cr6.eq) goto loc_836FFB5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FFB80;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFB8C;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ffba0
	if (cr6.lt) goto loc_836FFBA0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836FFBA0;
	sub_82416268(ctx, base);
loc_836FFBA0:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836FFBC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFBD4;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ffbe8
	if (cr6.lt) goto loc_836FFBE8;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836FFBE8;
	sub_82416268(ctx, base);
loc_836FFBE8:
	// addis r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 65536;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// addi r4,r4,208
	ctx.r4.s64 = ctx.r4.s64 + 208;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ffc0c
	if (cr6.lt) goto loc_836FFC0C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836FFC0C:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_836FFC1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ffc1c
	if (!cr6.eq) goto loc_836FFC1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836FFC40;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836FFC4C;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ffc60
	if (cr6.lt) goto loc_836FFC60;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836FFC60;
	sub_82416268(ctx, base);
loc_836FFC60:
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// blt cr6,0x836ffc80
	if (cr6.lt) goto loc_836FFC80;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x8386d088
	ctx.lr = 0x836FFC80;
	sub_8386D088(ctx, base);
loc_836FFC80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FFC8C"))) PPC_WEAK_FUNC(sub_836FFC8C);
PPC_FUNC_IMPL(__imp__sub_836FFC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836FFC90"))) PPC_WEAK_FUNC(sub_836FFC90);
PPC_FUNC_IMPL(__imp__sub_836FFC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836FFC98;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83691bb8
	ctx.lr = 0x836FFCC0;
	sub_83691BB8(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836fffb0
	if (!cr6.lt) goto loc_836FFFB0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-31712
	ctx.r26.s64 = ctx.r11.s64 + -31712;
loc_836FFCF8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x836FFD2C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-24
	ctx.r6.s64 = ctx.r26.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FFD44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ffdd8
	if (!cr6.eq) goto loc_836FFDD8;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x836FFD7C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ffd90
	if (!cr6.lt) goto loc_836FFD90;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836FFD90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FFD94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ffd94
	if (!cr6.eq) goto loc_836FFD94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FFDB8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ffdcc
	if (cr6.lt) goto loc_836FFDCC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836FFDCC;
	sub_82416268(ctx, base);
loc_836FFDCC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836FFDD8:
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FFDF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ffe2c
	if (!cr6.eq) goto loc_836FFE2C;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ffe24
	if (!cr6.eq) goto loc_836FFE24;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ffe28
	goto loc_836FFE28;
loc_836FFE24:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836FFE28:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836FFE2C:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FFE44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ffed8
	if (!cr6.eq) goto loc_836FFED8;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836FFE7C;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ffe90
	if (!cr6.lt) goto loc_836FFE90;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836FFE90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FFE94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ffe94
	if (!cr6.eq) goto loc_836FFE94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FFEB8;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ffecc
	if (cr6.lt) goto loc_836FFECC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836FFECC;
	sub_82416268(ctx, base);
loc_836FFECC:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_836FFED8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836FFEF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836fff84
	if (!cr6.eq) goto loc_836FFF84;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x836FFF28;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836fff3c
	if (!cr6.lt) goto loc_836FFF3C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836FFF3C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836FFF40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836fff40
	if (!cr6.eq) goto loc_836FFF40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836FFF64;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836fff78
	if (cr6.lt) goto loc_836FFF78;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836FFF78;
	sub_82416268(ctx, base);
loc_836FFF78:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_836FFF84:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836fff98
	if (cr6.lt) goto loc_836FFF98;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836FFF98;
	sub_82416268(ctx, base);
loc_836FFF98:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x836ffcf8
	if (!cr0.eq) goto loc_836FFCF8;
loc_836FFFB0:
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836fffcc
	if (cr6.eq) goto loc_836FFFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836FFFC4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836FFFCC;
	sub_82416268(ctx, base);
loc_836FFFCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836FFFD8"))) PPC_WEAK_FUNC(sub_836FFFD8);
PPC_FUNC_IMPL(__imp__sub_836FFFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836FFFE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836FFFEC;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-31920
	ctx.r29.s64 = ctx.r11.s64 + -31920;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83700004;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-31600
	ctx.r7.s64 = ctx.r10.s64 + -31600;
	// addi r5,r8,-31616
	ctx.r5.s64 = ctx.r8.s64 + -31616;
	// addi r6,r9,-31612
	ctx.r6.s64 = ctx.r9.s64 + -31612;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370004C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83700068;
	sub_824208C8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// addi r3,r3,380
	ctx.r3.s64 = ctx.r3.s64 + 380;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x8370008C;
	sub_824208C8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x837000AC;
	sub_824208C8(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837000BC;
	sub_831CDCF0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r11,r4,376
	ctx.r11.u64 = ctx.r4.u64 | 376;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837000D8"))) PPC_WEAK_FUNC(sub_837000D8);
PPC_FUNC_IMPL(__imp__sub_837000D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837001d0
	sub_837001D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837000E0"))) PPC_WEAK_FUNC(sub_837000E0);
PPC_FUNC_IMPL(__imp__sub_837000E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837001d0
	sub_837001D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837000E8"))) PPC_WEAK_FUNC(sub_837000E8);
PPC_FUNC_IMPL(__imp__sub_837000E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837000F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r30,r30,408
	ctx.r30.s64 = ctx.r30.s64 + 408;
	// addi r8,r11,-31600
	ctx.r8.s64 = ctx.r11.s64 + -31600;
	// addi r7,r10,-31612
	ctx.r7.s64 = ctx.r10.s64 + -31612;
	// addi r6,r9,-31616
	ctx.r6.s64 = ctx.r9.s64 + -31616;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83700138
	if (cr6.lt) goto loc_83700138;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700138;
	sub_8386D088(ctx, base);
loc_83700138:
	// addis r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,380
	ctx.r29.s64 = ctx.r29.s64 + 380;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700168
	if (cr6.lt) goto loc_83700168;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700168;
	sub_8386D088(ctx, base);
loc_83700168:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370018c
	if (cr6.lt) goto loc_8370018C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370018C;
	sub_8386D088(ctx, base);
loc_8370018C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837001b0
	if (cr6.lt) goto loc_837001B0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837001B0;
	sub_8386D088(ctx, base);
loc_837001B0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x837001C4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837001CC"))) PPC_WEAK_FUNC(sub_837001CC);
PPC_FUNC_IMPL(__imp__sub_837001CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837001D0"))) PPC_WEAK_FUNC(sub_837001D0);
PPC_FUNC_IMPL(__imp__sub_837001D0) {
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
	// bl 0x837000e8
	ctx.lr = 0x837001F0;
	sub_837000E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83700210
	if (cr6.eq) goto loc_83700210;
	// bl 0x82595188
	ctx.lr = 0x83700200;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83700210;
	sub_825952B8(ctx, base);
loc_83700210:
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

__attribute__((alias("__imp__sub_8370022C"))) PPC_WEAK_FUNC(sub_8370022C);
PPC_FUNC_IMPL(__imp__sub_8370022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700230"))) PPC_WEAK_FUNC(sub_83700230);
PPC_FUNC_IMPL(__imp__sub_83700230) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8370024C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-31920
	ctx.r30.s64 = ctx.r11.s64 + -31920;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x83700264;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-31564
	ctx.r6.s64 = ctx.r10.s64 + -31564;
	// addi r5,r9,-31576
	ctx.r5.s64 = ctx.r9.s64 + -31576;
	// addi r4,r8,-31580
	ctx.r4.s64 = ctx.r8.s64 + -31580;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r7,-31584
	ctx.r3.s64 = ctx.r7.s64 + -31584;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// stb r11,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r11.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837002B8;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_837002D4"))) PPC_WEAK_FUNC(sub_837002D4);
PPC_FUNC_IMPL(__imp__sub_837002D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837002D8"))) PPC_WEAK_FUNC(sub_837002D8);
PPC_FUNC_IMPL(__imp__sub_837002D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83700388
	sub_83700388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837002E0"))) PPC_WEAK_FUNC(sub_837002E0);
PPC_FUNC_IMPL(__imp__sub_837002E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83700388
	sub_83700388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837002E8"))) PPC_WEAK_FUNC(sub_837002E8);
PPC_FUNC_IMPL(__imp__sub_837002E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83700388
	sub_83700388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837002F0"))) PPC_WEAK_FUNC(sub_837002F0);
PPC_FUNC_IMPL(__imp__sub_837002F0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r11,-31564
	ctx.r7.s64 = ctx.r11.s64 + -31564;
	// addi r6,r10,-31576
	ctx.r6.s64 = ctx.r10.s64 + -31576;
	// addi r5,r9,-31580
	ctx.r5.s64 = ctx.r9.s64 + -31580;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-31584
	ctx.r4.s64 = ctx.r8.s64 + -31584;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x83700350
	if (cr6.lt) goto loc_83700350;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700350;
	sub_8386D088(ctx, base);
loc_83700350:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82eaf978
	ctx.lr = 0x8370036C;
	sub_82EAF978(ctx, base);
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

__attribute__((alias("__imp__sub_83700384"))) PPC_WEAK_FUNC(sub_83700384);
PPC_FUNC_IMPL(__imp__sub_83700384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700388"))) PPC_WEAK_FUNC(sub_83700388);
PPC_FUNC_IMPL(__imp__sub_83700388) {
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
	// bl 0x837002f0
	ctx.lr = 0x837003A8;
	sub_837002F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837003c8
	if (cr6.eq) goto loc_837003C8;
	// bl 0x82595188
	ctx.lr = 0x837003B8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837003C8;
	sub_825952B8(ctx, base);
loc_837003C8:
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

__attribute__((alias("__imp__sub_837003E4"))) PPC_WEAK_FUNC(sub_837003E4);
PPC_FUNC_IMPL(__imp__sub_837003E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837003E8"))) PPC_WEAK_FUNC(sub_837003E8);
PPC_FUNC_IMPL(__imp__sub_837003E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837003F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83700430
	if (!cr6.lt) goto loc_83700430;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83700430;
	sub_82E745E0(ctx, base);
loc_83700430:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-31392
	ctx.r27.s64 = ctx.r11.s64 + -31392;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83700478;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700484;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83700498
	if (cr6.lt) goto loc_83700498;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83700498;
	sub_82416268(ctx, base);
loc_83700498:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x837004b8
	if (cr6.lt) goto loc_837004B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837004B8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_837004C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837004c8
	if (!cr6.eq) goto loc_837004C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837004EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837004F8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370050c
	if (cr6.lt) goto loc_8370050C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370050C;
	sub_82416268(ctx, base);
loc_8370050C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83700534;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700540;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700554
	if (cr6.lt) goto loc_83700554;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83700554;
	sub_82416268(ctx, base);
loc_83700554:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370056C;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x83700588;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700594;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837005a8
	if (cr6.lt) goto loc_837005A8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x837005A8;
	sub_82416268(ctx, base);
loc_837005A8:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x837005c8
	if (cr6.lt) goto loc_837005C8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837005C8:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_837005D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837005d8
	if (!cr6.eq) goto loc_837005D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837005FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700608;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370061c
	if (cr6.lt) goto loc_8370061C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370061C;
	sub_82416268(ctx, base);
loc_8370061C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83700644;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700650;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700664
	if (cr6.lt) goto loc_83700664;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83700664;
	sub_82416268(ctx, base);
loc_83700664:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83700684
	if (cr6.lt) goto loc_83700684;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83700684:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_83700694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83700694
	if (!cr6.eq) goto loc_83700694;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837006B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837006C4;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837006d8
	if (cr6.lt) goto loc_837006D8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x837006D8;
	sub_82416268(ctx, base);
loc_837006D8:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83700700;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370070C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700720
	if (cr6.lt) goto loc_83700720;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83700720;
	sub_82416268(ctx, base);
loc_83700720:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83700738;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x83700754;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83700760;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700774
	if (cr6.lt) goto loc_83700774;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83700774;
	sub_82416268(ctx, base);
loc_83700774:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83700794
	if (cr6.lt) goto loc_83700794;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83700794:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_837007A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837007a4
	if (!cr6.eq) goto loc_837007A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837007C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837007D4;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837007e8
	if (cr6.lt) goto loc_837007E8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x837007E8;
	sub_82416268(ctx, base);
loc_837007E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837007F4"))) PPC_WEAK_FUNC(sub_837007F4);
PPC_FUNC_IMPL(__imp__sub_837007F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837007F8"))) PPC_WEAK_FUNC(sub_837007F8);
PPC_FUNC_IMPL(__imp__sub_837007F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83700800;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x83700828;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83700a6c
	if (!cr6.lt) goto loc_83700A6C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-31360
	ctx.r26.s64 = ctx.r11.s64 + -31360;
loc_83700860:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x83700894;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x837008AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83700940
	if (!cr6.eq) goto loc_83700940;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x837008E4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837008f8
	if (!cr6.lt) goto loc_837008F8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837008F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837008FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837008fc
	if (!cr6.eq) goto loc_837008FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83700920;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83700934
	if (cr6.lt) goto loc_83700934;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83700934;
	sub_82416268(ctx, base);
loc_83700934:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83700940:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83700958;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83700994
	if (!cr6.eq) goto loc_83700994;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370098c
	if (!cr6.eq) goto loc_8370098C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83700990
	goto loc_83700990;
loc_8370098C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83700990:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83700994:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x837009AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83700a40
	if (!cr6.eq) goto loc_83700A40;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x837009E4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837009f8
	if (!cr6.lt) goto loc_837009F8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_837009F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837009FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837009fc
	if (!cr6.eq) goto loc_837009FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83700A20;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83700a34
	if (cr6.lt) goto loc_83700A34;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83700A34;
	sub_82416268(ctx, base);
loc_83700A34:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83700A40:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700a54
	if (cr6.lt) goto loc_83700A54;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83700A54;
	sub_82416268(ctx, base);
loc_83700A54:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x83700860
	if (!cr0.eq) goto loc_83700860;
loc_83700A6C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83700a88
	if (cr6.eq) goto loc_83700A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83700A80;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83700A88;
	sub_82416268(ctx, base);
loc_83700A88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700A94"))) PPC_WEAK_FUNC(sub_83700A94);
PPC_FUNC_IMPL(__imp__sub_83700A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700A98"))) PPC_WEAK_FUNC(sub_83700A98);
PPC_FUNC_IMPL(__imp__sub_83700A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83700AA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83700AAC;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-31496
	ctx.r29.s64 = ctx.r11.s64 + -31496;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83700AC4;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-31252
	ctx.r7.s64 = ctx.r10.s64 + -31252;
	// addi r5,r8,-31268
	ctx.r5.s64 = ctx.r8.s64 + -31268;
	// addi r6,r9,-31264
	ctx.r6.s64 = ctx.r9.s64 + -31264;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83700B0C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83700B28;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83700B48;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700B54"))) PPC_WEAK_FUNC(sub_83700B54);
PPC_FUNC_IMPL(__imp__sub_83700B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700B58"))) PPC_WEAK_FUNC(sub_83700B58);
PPC_FUNC_IMPL(__imp__sub_83700B58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83700c20
	sub_83700C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700B60"))) PPC_WEAK_FUNC(sub_83700B60);
PPC_FUNC_IMPL(__imp__sub_83700B60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83700c20
	sub_83700C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700B68"))) PPC_WEAK_FUNC(sub_83700B68);
PPC_FUNC_IMPL(__imp__sub_83700B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83700B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-31252
	ctx.r8.s64 = ctx.r11.s64 + -31252;
	// addi r7,r10,-31264
	ctx.r7.s64 = ctx.r10.s64 + -31264;
	// addi r6,r9,-31268
	ctx.r6.s64 = ctx.r9.s64 + -31268;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83700bb4
	if (cr6.lt) goto loc_83700BB4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700BB4;
	sub_8386D088(ctx, base);
loc_83700BB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700be0
	if (cr6.lt) goto loc_83700BE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700BE0;
	sub_8386D088(ctx, base);
loc_83700BE0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700c04
	if (cr6.lt) goto loc_83700C04;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83700C04;
	sub_8386D088(ctx, base);
loc_83700C04:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83700C18;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700C20"))) PPC_WEAK_FUNC(sub_83700C20);
PPC_FUNC_IMPL(__imp__sub_83700C20) {
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
	// bl 0x83700b68
	ctx.lr = 0x83700C40;
	sub_83700B68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83700c60
	if (cr6.eq) goto loc_83700C60;
	// bl 0x82595188
	ctx.lr = 0x83700C50;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83700C60;
	sub_825952B8(ctx, base);
loc_83700C60:
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

__attribute__((alias("__imp__sub_83700C7C"))) PPC_WEAK_FUNC(sub_83700C7C);
PPC_FUNC_IMPL(__imp__sub_83700C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700C80"))) PPC_WEAK_FUNC(sub_83700C80);
PPC_FUNC_IMPL(__imp__sub_83700C80) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83700C98;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-31496
	ctx.r4.s64 = ctx.r11.s64 + -31496;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x824208c8
	ctx.lr = 0x83700CAC;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-31204
	ctx.r3.s64 = ctx.r7.s64 + -31204;
	// addi r6,r10,-31220
	ctx.r6.s64 = ctx.r10.s64 + -31220;
	// addi r5,r9,-31232
	ctx.r5.s64 = ctx.r9.s64 + -31232;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-31236
	ctx.r4.s64 = ctx.r8.s64 + -31236;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_83700CF4"))) PPC_WEAK_FUNC(sub_83700CF4);
PPC_FUNC_IMPL(__imp__sub_83700CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700CF8"))) PPC_WEAK_FUNC(sub_83700CF8);
PPC_FUNC_IMPL(__imp__sub_83700CF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83700d10
	sub_83700D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700D00"))) PPC_WEAK_FUNC(sub_83700D00);
PPC_FUNC_IMPL(__imp__sub_83700D00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83700d10
	sub_83700D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700D08"))) PPC_WEAK_FUNC(sub_83700D08);
PPC_FUNC_IMPL(__imp__sub_83700D08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83700d10
	sub_83700D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700D10"))) PPC_WEAK_FUNC(sub_83700D10);
PPC_FUNC_IMPL(__imp__sub_83700D10) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-31220
	ctx.r7.s64 = ctx.r11.s64 + -31220;
	// addi r6,r10,-31232
	ctx.r6.s64 = ctx.r10.s64 + -31232;
	// addi r5,r9,-31236
	ctx.r5.s64 = ctx.r9.s64 + -31236;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-31204
	ctx.r4.s64 = ctx.r8.s64 + -31204;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83700D60;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83700d80
	if (cr6.eq) goto loc_83700D80;
	// bl 0x82595188
	ctx.lr = 0x83700D70;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83700D80;
	sub_825952B8(ctx, base);
loc_83700D80:
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

__attribute__((alias("__imp__sub_83700D9C"))) PPC_WEAK_FUNC(sub_83700D9C);
PPC_FUNC_IMPL(__imp__sub_83700D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700DA0"))) PPC_WEAK_FUNC(sub_83700DA0);
PPC_FUNC_IMPL(__imp__sub_83700DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83700DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-23688
	ctx.r29.s64 = ctx.r11.s64 + -23688;
	// lwz r11,-23640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23640);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83700dfc
	if (!cr6.eq) goto loc_83700DFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-23640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23640, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_83700DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x83700DE4;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83700ddc
	if (!cr0.lt) goto loc_83700DDC;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// bl 0x831cdcc8
	ctx.lr = 0x83700DFC;
	sub_831CDCC8(ctx, base);
loc_83700DFC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700E0C"))) PPC_WEAK_FUNC(sub_83700E0C);
PPC_FUNC_IMPL(__imp__sub_83700E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83700E10"))) PPC_WEAK_FUNC(sub_83700E10);
PPC_FUNC_IMPL(__imp__sub_83700E10) {
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
	// ble cr6,0x83700e7c
	if (!cr6.gt) goto loc_83700E7C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-30692
	ctx.r8.s64 = ctx.r10.s64 + -30692;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,116
	ctx.r6.s64 = 116;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x83700E6C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83700E7C:
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

__attribute__((alias("__imp__sub_83700E90"))) PPC_WEAK_FUNC(sub_83700E90);
PPC_FUNC_IMPL(__imp__sub_83700E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83700E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x83700EAC;
	sub_82535130(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83700ec0
	if (cr6.lt) goto loc_83700EC0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83700EC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x83700EC8;
	sub_825346C8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-31024
	ctx.r31.s64 = ctx.r11.s64 + -31024;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82536d88
	ctx.lr = 0x83700EDC;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700EE4;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700EEC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x83700EF8;
	sub_82534640(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83700F04;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700F0C;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700F14;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// addi r11,r29,316
	ctx.r11.s64 = ctx.r29.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83700f28
	if (cr6.lt) goto loc_83700F28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83700F28:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x83700F34;
	sub_825346C8(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83700F40;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700F48;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700F50;
	sub_82535AA0(ctx, base);
	// lwz r10,364(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r11,r29,344
	ctx.r11.s64 = ctx.r29.s64 + 344;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83700f64
	if (cr6.lt) goto loc_83700F64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83700F64:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x83700F70;
	sub_825346C8(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83700F7C;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700F84;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700F8C;
	sub_82535AA0(ctx, base);
	// lwz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// addi r11,r29,372
	ctx.r11.s64 = ctx.r29.s64 + 372;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83700fa0
	if (cr6.lt) goto loc_83700FA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83700FA0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x83700FAC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83700FB8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700FC0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700FC8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// bl 0x82534640
	ctx.lr = 0x83700FD4;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83700FE0;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x83700FE8;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83700FF0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83700FFC"))) PPC_WEAK_FUNC(sub_83700FFC);
PPC_FUNC_IMPL(__imp__sub_83700FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701000"))) PPC_WEAK_FUNC(sub_83701000);
PPC_FUNC_IMPL(__imp__sub_83701000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83701008;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-30692
	ctx.r10.s64 = ctx.r11.s64 + -30692;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x8370104C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x83701074
	if (cr6.eq) goto loc_83701074;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8370106C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83701074:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370107C"))) PPC_WEAK_FUNC(sub_8370107C);
PPC_FUNC_IMPL(__imp__sub_8370107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701080"))) PPC_WEAK_FUNC(sub_83701080);
PPC_FUNC_IMPL(__imp__sub_83701080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83701088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r3,88
	ctx.r28.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837010a8
	if (cr6.lt) goto loc_837010A8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837010A8;
	sub_8386D088(ctx, base);
loc_837010A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r30,r29,60
	ctx.r30.s64 = ctx.r29.s64 + 60;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837010d4
	if (cr6.lt) goto loc_837010D4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837010D4;
	sub_8386D088(ctx, base);
loc_837010D4:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r28,r29,32
	ctx.r28.s64 = ctx.r29.s64 + 32;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837010f8
	if (cr6.lt) goto loc_837010F8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837010F8;
	sub_8386D088(ctx, base);
loc_837010F8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701118
	if (cr6.lt) goto loc_83701118;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83701118;
	sub_8386D088(ctx, base);
loc_83701118:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370112C"))) PPC_WEAK_FUNC(sub_8370112C);
PPC_FUNC_IMPL(__imp__sub_8370112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701130"))) PPC_WEAK_FUNC(sub_83701130);
PPC_FUNC_IMPL(__imp__sub_83701130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83701138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x83701168;
	sub_82420558(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83701190;
	sub_82420558(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// bl 0x82420558
	ctx.lr = 0x837011B0;
	sub_82420558(ctx, base);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// bl 0x82420558
	ctx.lr = 0x837011D0;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837011DC"))) PPC_WEAK_FUNC(sub_837011DC);
PPC_FUNC_IMPL(__imp__sub_837011DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837011E0"))) PPC_WEAK_FUNC(sub_837011E0);
PPC_FUNC_IMPL(__imp__sub_837011E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837011f4
	if (cr6.eq) goto loc_837011F4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83701130
	sub_83701130(ctx, base);
	return;
loc_837011F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837011FC"))) PPC_WEAK_FUNC(sub_837011FC);
PPC_FUNC_IMPL(__imp__sub_837011FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701200"))) PPC_WEAK_FUNC(sub_83701200);
PPC_FUNC_IMPL(__imp__sub_83701200) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83701080
	sub_83701080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701208"))) PPC_WEAK_FUNC(sub_83701208);
PPC_FUNC_IMPL(__imp__sub_83701208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83701210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x8370122C;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x83701248;
	sub_82420558(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x82420558
	ctx.lr = 0x8370125C;
	sub_82420558(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// bl 0x82420558
	ctx.lr = 0x83701270;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370127C"))) PPC_WEAK_FUNC(sub_8370127C);
PPC_FUNC_IMPL(__imp__sub_8370127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701280"))) PPC_WEAK_FUNC(sub_83701280);
PPC_FUNC_IMPL(__imp__sub_83701280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83701288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x837012B8;
	sub_824208C8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837012D8;
	sub_824208C8(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837012F4;
	sub_824208C8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83701310;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370131C"))) PPC_WEAK_FUNC(sub_8370131C);
PPC_FUNC_IMPL(__imp__sub_8370131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701320"))) PPC_WEAK_FUNC(sub_83701320);
PPC_FUNC_IMPL(__imp__sub_83701320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83701328;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r31,r11,-30788
	ctx.r31.s64 = ctx.r11.s64 + -30788;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// bl 0x82536d88
	ctx.lr = 0x83701348;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8370134C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83701354:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83701354
	if (!cr6.eq) goto loc_83701354;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,220
	ctx.r3.s64 = ctx.r29.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83701378;
	sub_824208C8(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83701384;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x83701388;
	sub_825347E8(ctx, base);
	// stw r3,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r3.u32);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83701398;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x8370139C;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837013c4
	if (cr6.eq) goto loc_837013C4;
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x837013B4;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x837013B8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,316
	ctx.r3.s64 = ctx.r29.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x837013C4;
	sub_83601998(ctx, base);
loc_837013C4:
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x837013D0;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x837013D4;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837013f4
	if (cr6.eq) goto loc_837013F4;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x837013EC;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837013F0;
	sub_82534770(ctx, base);
	// stw r3,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r3.u32);
loc_837013F4:
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x83701400;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x8370140C;
	sub_82536838(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534a38
	ctx.lr = 0x83701414;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83701604
	if (cr6.eq) goto loc_83701604;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825356a0
	ctx.lr = 0x8370142C;
	sub_825356A0(ctx, base);
	// addi r29,r29,352
	ctx.r29.s64 = ctx.r29.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83701000
	ctx.lr = 0x83701438;
	sub_83701000(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825356f0
	ctx.lr = 0x83701444;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534ae0
	ctx.lr = 0x83701450;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83701604
	if (!cr6.eq) goto loc_83701604;
loc_8370145C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535118
	ctx.lr = 0x83701464;
	sub_82535118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83701280
	ctx.lr = 0x83701470;
	sub_83701280(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8370147C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x83701480;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837014a8
	if (cr6.eq) goto loc_837014A8;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83701498;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8370149C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83601998
	ctx.lr = 0x837014A8;
	sub_83601998(ctx, base);
loc_837014A8:
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x837014B4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x837014B8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837014d8
	if (cr6.eq) goto loc_837014D8;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x837014D0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x837014D4;
	sub_825347E8(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
loc_837014D8:
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x837014E4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x837014E8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83701510
	if (cr6.eq) goto loc_83701510;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83701500;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83701504;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83601998
	ctx.lr = 0x83701510;
	sub_83601998(ctx, base);
loc_83701510:
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8370151C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x83701520;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83701548
	if (cr6.eq) goto loc_83701548;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83701538;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8370153C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x83601998
	ctx.lr = 0x83701548;
	sub_83601998(ctx, base);
loc_83701548:
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83701554;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x83701558;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83701580
	if (cr6.eq) goto loc_83701580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83701570;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83701574;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x83601998
	ctx.lr = 0x83701580;
	sub_83601998(ctx, base);
loc_83701580:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837015a8
	if (cr6.lt) goto loc_837015A8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83700e10
	ctx.lr = 0x8370159C;
	sub_83700E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837015d0
	if (cr6.eq) goto loc_837015D0;
loc_837015A8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x837015c4
	if (cr0.eq) goto loc_837015C4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83701130
	ctx.lr = 0x837015C4;
	sub_83701130(ctx, base);
loc_837015C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_837015D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83701080
	ctx.lr = 0x837015D8;
	sub_83701080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535128
	ctx.lr = 0x837015E0;
	sub_82535128(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825356f0
	ctx.lr = 0x837015EC;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534ae0
	ctx.lr = 0x837015F8;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370145c
	if (cr6.eq) goto loc_8370145C;
loc_83701604:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x8370160C;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701618"))) PPC_WEAK_FUNC(sub_83701618);
PPC_FUNC_IMPL(__imp__sub_83701618) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83701208
	sub_83701208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701624"))) PPC_WEAK_FUNC(sub_83701624);
PPC_FUNC_IMPL(__imp__sub_83701624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701628"))) PPC_WEAK_FUNC(sub_83701628);
PPC_FUNC_IMPL(__imp__sub_83701628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83701630;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a8c428
	ctx.lr = 0x8370164C;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83701664
	if (cr6.lt) goto loc_83701664;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83701668
	goto loc_83701668;
loc_83701664:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83701668:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r31,r11,-30952
	ctx.r31.s64 = ctx.r11.s64 + -30952;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82473550
	ctx.lr = 0x8370167C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x83701684;
	sub_82473550(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82473550
	ctx.lr = 0x8370168C;
	sub_82473550(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r30,248(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x8370169C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x837016A4;
	sub_82474170(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82473550
	ctx.lr = 0x837016AC;
	sub_82473550(ctx, base);
	// addi r4,r29,316
	ctx.r4.s64 = ctx.r29.s64 + 316;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x837016B8;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837016cc
	if (cr6.lt) goto loc_837016CC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x837016d0
	goto loc_837016D0;
loc_837016CC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_837016D0:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x837016DC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x837016E4;
	sub_82473550(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82473550
	ctx.lr = 0x837016EC;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701700
	if (cr6.lt) goto loc_83701700;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x83701700;
	sub_8386D088(ctx, base);
loc_83701700:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r4,r29,344
	ctx.r4.s64 = ctx.r29.s64 + 344;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bl 0x83734458
	ctx.lr = 0x83701720;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701734
	if (cr6.lt) goto loc_83701734;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83701738
	goto loc_83701738;
loc_83701734:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83701738:
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x83701744;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x8370174C;
	sub_82473550(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82473550
	ctx.lr = 0x83701754;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701768
	if (cr6.lt) goto loc_83701768;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x83701768;
	sub_8386D088(ctx, base);
loc_83701768:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r4,r29,372
	ctx.r4.s64 = ctx.r29.s64 + 372;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// bl 0x83734458
	ctx.lr = 0x83701780;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701794
	if (cr6.lt) goto loc_83701794;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83701798
	goto loc_83701798;
loc_83701794:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83701798:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x837017A4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x837017AC;
	sub_82473550(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x837017B4;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837017c8
	if (cr6.lt) goto loc_837017C8;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x837017C8;
	sub_8386D088(ctx, base);
loc_837017C8:
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// lwz r31,400(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// bl 0x82473550
	ctx.lr = 0x837017E4;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x837017EC;
	sub_82474170(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x837017F8;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8370180c
	if (!cr6.lt) goto loc_8370180C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8370180C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83701810:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83701810
	if (!cr6.eq) goto loc_83701810;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83701834;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83701848
	if (cr6.lt) goto loc_83701848;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83701848;
	sub_82416268(ctx, base);
loc_83701848:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x82a79160
	ctx.lr = 0x8370185C;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x83701870;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370187C"))) PPC_WEAK_FUNC(sub_8370187C);
PPC_FUNC_IMPL(__imp__sub_8370187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701880"))) PPC_WEAK_FUNC(sub_83701880);
PPC_FUNC_IMPL(__imp__sub_83701880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83701888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83701894;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-31128
	ctx.r29.s64 = ctx.r11.s64 + -31128;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x837018AC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-30660
	ctx.r7.s64 = ctx.r10.s64 + -30660;
	// addi r5,r8,-30676
	ctx.r5.s64 = ctx.r8.s64 + -30676;
	// addi r6,r9,-30672
	ctx.r6.s64 = ctx.r9.s64 + -30672;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x824208c8
	ctx.lr = 0x837018F4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83701910;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x824208c8
	ctx.lr = 0x8370192C;
	sub_824208C8(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370193C"))) PPC_WEAK_FUNC(sub_8370193C);
PPC_FUNC_IMPL(__imp__sub_8370193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701940"))) PPC_WEAK_FUNC(sub_83701940);
PPC_FUNC_IMPL(__imp__sub_83701940) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83701a08
	sub_83701A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701948"))) PPC_WEAK_FUNC(sub_83701948);
PPC_FUNC_IMPL(__imp__sub_83701948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83701a08
	sub_83701A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701950"))) PPC_WEAK_FUNC(sub_83701950);
PPC_FUNC_IMPL(__imp__sub_83701950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83701958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-30660
	ctx.r8.s64 = ctx.r11.s64 + -30660;
	// addi r7,r10,-30672
	ctx.r7.s64 = ctx.r10.s64 + -30672;
	// addi r6,r9,-30676
	ctx.r6.s64 = ctx.r9.s64 + -30676;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,372
	ctx.r29.s64 = ctx.r3.s64 + 372;
	// lwz r5,392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370199c
	if (cr6.lt) goto loc_8370199C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370199C;
	sub_8386D088(ctx, base);
loc_8370199C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837019c8
	if (cr6.lt) goto loc_837019C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837019C8;
	sub_8386D088(ctx, base);
loc_837019C8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837019ec
	if (cr6.lt) goto loc_837019EC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837019EC;
	sub_8386D088(ctx, base);
loc_837019EC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83701A00;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701A08"))) PPC_WEAK_FUNC(sub_83701A08);
PPC_FUNC_IMPL(__imp__sub_83701A08) {
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
	// bl 0x83701950
	ctx.lr = 0x83701A28;
	sub_83701950(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83701a48
	if (cr6.eq) goto loc_83701A48;
	// bl 0x82595188
	ctx.lr = 0x83701A38;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83701A48;
	sub_825952B8(ctx, base);
loc_83701A48:
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

__attribute__((alias("__imp__sub_83701A64"))) PPC_WEAK_FUNC(sub_83701A64);
PPC_FUNC_IMPL(__imp__sub_83701A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701A68"))) PPC_WEAK_FUNC(sub_83701A68);
PPC_FUNC_IMPL(__imp__sub_83701A68) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83701A80;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x824208c8
	ctx.lr = 0x83701A94;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-30624
	ctx.r6.s64 = ctx.r10.s64 + -30624;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-30640
	ctx.r4.s64 = ctx.r8.s64 + -30640;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-30636
	ctx.r5.s64 = ctx.r9.s64 + -30636;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-30644
	ctx.r10.s64 = ctx.r7.s64 + -30644;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x83700e10
	ctx.lr = 0x83701AE4;
	sub_83700E10(ctx, base);
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

__attribute__((alias("__imp__sub_83701AFC"))) PPC_WEAK_FUNC(sub_83701AFC);
PPC_FUNC_IMPL(__imp__sub_83701AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701B00"))) PPC_WEAK_FUNC(sub_83701B00);
PPC_FUNC_IMPL(__imp__sub_83701B00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83701b18
	sub_83701B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701B08"))) PPC_WEAK_FUNC(sub_83701B08);
PPC_FUNC_IMPL(__imp__sub_83701B08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83701b18
	sub_83701B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701B10"))) PPC_WEAK_FUNC(sub_83701B10);
PPC_FUNC_IMPL(__imp__sub_83701B10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83701b18
	sub_83701B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701B18"))) PPC_WEAK_FUNC(sub_83701B18);
PPC_FUNC_IMPL(__imp__sub_83701B18) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-30624
	ctx.r7.s64 = ctx.r11.s64 + -30624;
	// addi r6,r10,-30636
	ctx.r6.s64 = ctx.r10.s64 + -30636;
	// addi r5,r9,-30640
	ctx.r5.s64 = ctx.r9.s64 + -30640;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-30644
	ctx.r4.s64 = ctx.r8.s64 + -30644;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83701000
	ctx.lr = 0x83701B6C;
	sub_83701000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83701B74;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83701b94
	if (cr6.eq) goto loc_83701B94;
	// bl 0x82595188
	ctx.lr = 0x83701B84;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83701B94;
	sub_825952B8(ctx, base);
loc_83701B94:
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

__attribute__((alias("__imp__sub_83701BB0"))) PPC_WEAK_FUNC(sub_83701BB0);
PPC_FUNC_IMPL(__imp__sub_83701BB0) {
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
	// bl 0x83356798
	ctx.lr = 0x83701BCC;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83701BF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83701c00
	if (cr6.eq) goto loc_83701C00;
	// bl 0x83701880
	ctx.lr = 0x83701BFC;
	sub_83701880(ctx, base);
	// b 0x83701c04
	goto loc_83701C04;
loc_83701C00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83701C04:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83701C1C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83701c30
	if (cr6.eq) goto loc_83701C30;
	// bl 0x83701a68
	ctx.lr = 0x83701C28;
	sub_83701A68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83701c34
	goto loc_83701C34;
loc_83701C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83701C34:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83701C54"))) PPC_WEAK_FUNC(sub_83701C54);
PPC_FUNC_IMPL(__imp__sub_83701C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701C58"))) PPC_WEAK_FUNC(sub_83701C58);
PPC_FUNC_IMPL(__imp__sub_83701C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83701C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83701ca0
	if (!cr6.lt) goto loc_83701CA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83701CA0;
	sub_82E745E0(ctx, base);
loc_83701CA0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-30488
	ctx.r27.s64 = ctx.r11.s64 + -30488;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83701CE8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701CF4;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83701d08
	if (cr6.lt) goto loc_83701D08;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83701D08;
	sub_82416268(ctx, base);
loc_83701D08:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x83701d28
	if (cr6.lt) goto loc_83701D28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83701D28:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83701D38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83701d38
	if (!cr6.eq) goto loc_83701D38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83701D5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701D68;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83701d7c
	if (cr6.lt) goto loc_83701D7C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83701D7C;
	sub_82416268(ctx, base);
loc_83701D7C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83701DA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701DB0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701dc4
	if (cr6.lt) goto loc_83701DC4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83701DC4;
	sub_82416268(ctx, base);
loc_83701DC4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83701DDC;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x83701DF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701E04;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701e18
	if (cr6.lt) goto loc_83701E18;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83701E18;
	sub_82416268(ctx, base);
loc_83701E18:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83701e38
	if (cr6.lt) goto loc_83701E38;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83701E38:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83701E48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83701e48
	if (!cr6.eq) goto loc_83701E48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83701E6C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701E78;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83701e8c
	if (cr6.lt) goto loc_83701E8C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83701E8C;
	sub_82416268(ctx, base);
loc_83701E8C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83701EB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701EC0;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83701ed4
	if (cr6.lt) goto loc_83701ED4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83701ED4;
	sub_82416268(ctx, base);
loc_83701ED4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83701ef4
	if (cr6.lt) goto loc_83701EF4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83701EF4:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83701F04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83701f04
	if (!cr6.eq) goto loc_83701F04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83701F28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83701F34;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83701f48
	if (cr6.lt) goto loc_83701F48;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83701F48;
	sub_82416268(ctx, base);
loc_83701F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83701F54"))) PPC_WEAK_FUNC(sub_83701F54);
PPC_FUNC_IMPL(__imp__sub_83701F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83701F58"))) PPC_WEAK_FUNC(sub_83701F58);
PPC_FUNC_IMPL(__imp__sub_83701F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83701F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x83701F88;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83702220
	if (!cr6.lt) goto loc_83702220;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-30456
	ctx.r26.s64 = ctx.r11.s64 + -30456;
loc_83701FC0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x83701FF4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-24
	ctx.r6.s64 = ctx.r26.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370200C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837020a0
	if (!cr6.eq) goto loc_837020A0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x83702044;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702058
	if (!cr6.lt) goto loc_83702058;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83702058:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370205C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370205c
	if (!cr6.eq) goto loc_8370205C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702080;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702094
	if (cr6.lt) goto loc_83702094;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83702094;
	sub_82416268(ctx, base);
loc_83702094:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_837020A0:
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x837020B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837020f4
	if (!cr6.eq) goto loc_837020F4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x837020ec
	if (!cr6.eq) goto loc_837020EC;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837020f0
	goto loc_837020F0;
loc_837020EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837020F0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_837020F4:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370210C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837021a0
	if (!cr6.eq) goto loc_837021A0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x83702144;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702158
	if (!cr6.lt) goto loc_83702158;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83702158:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370215C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370215c
	if (!cr6.eq) goto loc_8370215C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702180;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702194
	if (cr6.lt) goto loc_83702194;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83702194;
	sub_82416268(ctx, base);
loc_83702194:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_837021A0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x837021B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837021f4
	if (!cr6.eq) goto loc_837021F4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x837021ec
	if (!cr6.eq) goto loc_837021EC;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837021f0
	goto loc_837021F0;
loc_837021EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837021F0:
	// stw r11,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r11.u32);
loc_837021F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83702208
	if (cr6.lt) goto loc_83702208;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83702208;
	sub_82416268(ctx, base);
loc_83702208:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x83701fc0
	if (!cr0.eq) goto loc_83701FC0;
loc_83702220:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370223c
	if (cr6.eq) goto loc_8370223C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83702234;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370223C;
	sub_82416268(ctx, base);
loc_8370223C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83702248"))) PPC_WEAK_FUNC(sub_83702248);
PPC_FUNC_IMPL(__imp__sub_83702248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83702250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370225C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-30560
	ctx.r30.s64 = ctx.r11.s64 + -30560;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x83702274;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-30348
	ctx.r7.s64 = ctx.r10.s64 + -30348;
	// addi r5,r8,-30364
	ctx.r5.s64 = ctx.r8.s64 + -30364;
	// addi r6,r9,-30360
	ctx.r6.s64 = ctx.r9.s64 + -30360;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837022BC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837022D8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837022E4"))) PPC_WEAK_FUNC(sub_837022E4);
PPC_FUNC_IMPL(__imp__sub_837022E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837022E8"))) PPC_WEAK_FUNC(sub_837022E8);
PPC_FUNC_IMPL(__imp__sub_837022E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83702390
	sub_83702390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837022F0"))) PPC_WEAK_FUNC(sub_837022F0);
PPC_FUNC_IMPL(__imp__sub_837022F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83702390
	sub_83702390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837022F8"))) PPC_WEAK_FUNC(sub_837022F8);
PPC_FUNC_IMPL(__imp__sub_837022F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83702300;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-30348
	ctx.r8.s64 = ctx.r11.s64 + -30348;
	// addi r7,r10,-30360
	ctx.r7.s64 = ctx.r10.s64 + -30360;
	// addi r6,r9,-30364
	ctx.r6.s64 = ctx.r9.s64 + -30364;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83702344
	if (cr6.lt) goto loc_83702344;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83702344;
	sub_8386D088(ctx, base);
loc_83702344:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83702370
	if (cr6.lt) goto loc_83702370;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83702370;
	sub_8386D088(ctx, base);
loc_83702370:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83702384;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370238C"))) PPC_WEAK_FUNC(sub_8370238C);
PPC_FUNC_IMPL(__imp__sub_8370238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83702390"))) PPC_WEAK_FUNC(sub_83702390);
PPC_FUNC_IMPL(__imp__sub_83702390) {
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
	// bl 0x837022f8
	ctx.lr = 0x837023B0;
	sub_837022F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837023d0
	if (cr6.eq) goto loc_837023D0;
	// bl 0x82595188
	ctx.lr = 0x837023C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837023D0;
	sub_825952B8(ctx, base);
loc_837023D0:
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

__attribute__((alias("__imp__sub_837023EC"))) PPC_WEAK_FUNC(sub_837023EC);
PPC_FUNC_IMPL(__imp__sub_837023EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837023F0"))) PPC_WEAK_FUNC(sub_837023F0);
PPC_FUNC_IMPL(__imp__sub_837023F0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83702408;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-30560
	ctx.r4.s64 = ctx.r11.s64 + -30560;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x8370241C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-30300
	ctx.r3.s64 = ctx.r7.s64 + -30300;
	// addi r6,r10,-30316
	ctx.r6.s64 = ctx.r10.s64 + -30316;
	// addi r5,r9,-30328
	ctx.r5.s64 = ctx.r9.s64 + -30328;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-30332
	ctx.r4.s64 = ctx.r8.s64 + -30332;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8370246C"))) PPC_WEAK_FUNC(sub_8370246C);
PPC_FUNC_IMPL(__imp__sub_8370246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83702470"))) PPC_WEAK_FUNC(sub_83702470);
PPC_FUNC_IMPL(__imp__sub_83702470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83702488
	sub_83702488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83702478"))) PPC_WEAK_FUNC(sub_83702478);
PPC_FUNC_IMPL(__imp__sub_83702478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83702488
	sub_83702488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83702480"))) PPC_WEAK_FUNC(sub_83702480);
PPC_FUNC_IMPL(__imp__sub_83702480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83702488
	sub_83702488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83702488"))) PPC_WEAK_FUNC(sub_83702488);
PPC_FUNC_IMPL(__imp__sub_83702488) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-30316
	ctx.r7.s64 = ctx.r11.s64 + -30316;
	// addi r6,r10,-30328
	ctx.r6.s64 = ctx.r10.s64 + -30328;
	// addi r5,r9,-30332
	ctx.r5.s64 = ctx.r9.s64 + -30332;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-30300
	ctx.r4.s64 = ctx.r8.s64 + -30300;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x837024D8;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837024f8
	if (cr6.eq) goto loc_837024F8;
	// bl 0x82595188
	ctx.lr = 0x837024E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837024F8;
	sub_825952B8(ctx, base);
loc_837024F8:
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

__attribute__((alias("__imp__sub_83702514"))) PPC_WEAK_FUNC(sub_83702514);
PPC_FUNC_IMPL(__imp__sub_83702514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83702518"))) PPC_WEAK_FUNC(sub_83702518);
PPC_FUNC_IMPL(__imp__sub_83702518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83702520;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,135
	ctx.r11.s64 = 135;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83702560
	if (!cr6.lt) goto loc_83702560;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83702560;
	sub_82E745E0(ctx, base);
loc_83702560:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-30088
	ctx.r27.s64 = ctx.r11.s64 + -30088;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837025A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837025B4;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x837025c8
	if (cr6.lt) goto loc_837025C8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x837025C8;
	sub_82416268(ctx, base);
loc_837025C8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x837025e8
	if (cr6.lt) goto loc_837025E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837025E8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_837025F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837025f8
	if (!cr6.eq) goto loc_837025F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370261C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83702628;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370263c
	if (cr6.lt) goto loc_8370263C;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370263C;
	sub_82416268(ctx, base);
loc_8370263C:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83702664;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83702670;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83702684
	if (cr6.lt) goto loc_83702684;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83702684;
	sub_82416268(ctx, base);
loc_83702684:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370269C;
	sub_82E746C0(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x837026B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837026C4;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837026d8
	if (cr6.lt) goto loc_837026D8;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x837026D8;
	sub_82416268(ctx, base);
loc_837026D8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x837026f8
	if (cr6.lt) goto loc_837026F8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837026F8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83702708:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702708
	if (!cr6.eq) goto loc_83702708;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370272C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83702738;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370274c
	if (cr6.lt) goto loc_8370274C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370274C;
	sub_82416268(ctx, base);
loc_8370274C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83702774;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83702780;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83702794
	if (cr6.lt) goto loc_83702794;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83702794;
	sub_82416268(ctx, base);
loc_83702794:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x837027b4
	if (cr6.lt) goto loc_837027B4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837027B4:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_837027C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837027c4
	if (!cr6.eq) goto loc_837027C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837027E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837027F4;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702808
	if (cr6.lt) goto loc_83702808;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83702808;
	sub_82416268(ctx, base);
loc_83702808:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83702830;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370283C;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83702850
	if (cr6.lt) goto loc_83702850;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83702850;
	sub_82416268(ctx, base);
loc_83702850:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x83702870
	if (cr6.lt) goto loc_83702870;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83702870:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_83702880:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702880
	if (!cr6.eq) goto loc_83702880;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837028A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837028B0;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837028c4
	if (cr6.lt) goto loc_837028C4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x837028C4;
	sub_82416268(ctx, base);
loc_837028C4:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837028EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837028F8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370290c
	if (cr6.lt) goto loc_8370290C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370290C;
	sub_82416268(ctx, base);
loc_8370290C:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8370292c
	if (cr6.lt) goto loc_8370292C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370292C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8370293C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370293c
	if (!cr6.eq) goto loc_8370293C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83702960;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370296C;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702980
	if (cr6.lt) goto loc_83702980;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83702980;
	sub_82416268(ctx, base);
loc_83702980:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837029A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837029B4;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837029c8
	if (cr6.lt) goto loc_837029C8;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x837029C8;
	sub_82416268(ctx, base);
loc_837029C8:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r4,r28,228
	ctx.r4.s64 = ctx.r28.s64 + 228;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x837029e8
	if (cr6.lt) goto loc_837029E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837029E8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_837029F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837029f8
	if (!cr6.eq) goto loc_837029F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83702A1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83702A28;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702a3c
	if (cr6.lt) goto loc_83702A3C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83702A3C;
	sub_82416268(ctx, base);
loc_83702A3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83702A48"))) PPC_WEAK_FUNC(sub_83702A48);
PPC_FUNC_IMPL(__imp__sub_83702A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83702A50;
	__savegprlr_26(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83691bb8
	ctx.lr = 0x83702A78;
	sub_83691BB8(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837030c4
	if (!cr6.lt) goto loc_837030C4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r27,r11,-29876
	ctx.r27.s64 = ctx.r11.s64 + -29876;
loc_83702AB0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x83702AE4;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-96
	ctx.r6.s64 = ctx.r27.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702AFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702b90
	if (!cr6.eq) goto loc_83702B90;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x83702B34;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702b48
	if (!cr6.lt) goto loc_83702B48;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_83702B48:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702B4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702b4c
	if (!cr6.eq) goto loc_83702B4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702B70;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702b84
	if (cr6.lt) goto loc_83702B84;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x83702B84;
	sub_82416268(ctx, base);
loc_83702B84:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_83702B90:
	// addi r6,r27,-88
	ctx.r6.s64 = ctx.r27.s64 + -88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702BA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702be4
	if (!cr6.eq) goto loc_83702BE4;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,432(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83702bdc
	if (!cr6.eq) goto loc_83702BDC;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83702be0
	goto loc_83702BE0;
loc_83702BDC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83702BE0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83702BE4:
	// addi r6,r27,-80
	ctx.r6.s64 = ctx.r27.s64 + -80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702BFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702c90
	if (!cr6.eq) goto loc_83702C90;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x83702C34;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702c48
	if (!cr6.lt) goto loc_83702C48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83702C48:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702C4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702c4c
	if (!cr6.eq) goto loc_83702C4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702C70;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702c84
	if (cr6.lt) goto loc_83702C84;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83702C84;
	sub_82416268(ctx, base);
loc_83702C84:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_83702C90:
	// addi r6,r27,-72
	ctx.r6.s64 = ctx.r27.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702CA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702d3c
	if (!cr6.eq) goto loc_83702D3C;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// bl 0x82472fc0
	ctx.lr = 0x83702CE0;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702cf4
	if (!cr6.lt) goto loc_83702CF4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83702CF4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702CF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702cf8
	if (!cr6.eq) goto loc_83702CF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702D1C;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702d30
	if (cr6.lt) goto loc_83702D30;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83702D30;
	sub_82416268(ctx, base);
loc_83702D30:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_83702D3C:
	// addi r6,r27,-64
	ctx.r6.s64 = ctx.r27.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702D54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702de8
	if (!cr6.eq) goto loc_83702DE8;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x83702D8C;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702da0
	if (!cr6.lt) goto loc_83702DA0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_83702DA0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702DA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702da4
	if (!cr6.eq) goto loc_83702DA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702DC8;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702ddc
	if (cr6.lt) goto loc_83702DDC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x83702DDC;
	sub_82416268(ctx, base);
loc_83702DDC:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_83702DE8:
	// addi r6,r27,-48
	ctx.r6.s64 = ctx.r27.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702E00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702e94
	if (!cr6.eq) goto loc_83702E94;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r4,428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// bl 0x82472fc0
	ctx.lr = 0x83702E38;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702e4c
	if (!cr6.lt) goto loc_83702E4C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_83702E4C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702e50
	if (!cr6.eq) goto loc_83702E50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,204
	ctx.r3.s64 = ctx.r28.s64 + 204;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702E74;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702e88
	if (cr6.lt) goto loc_83702E88;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83702E88;
	sub_82416268(ctx, base);
loc_83702E88:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_83702E94:
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702EAC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702f40
	if (!cr6.eq) goto loc_83702F40;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82472fc0
	ctx.lr = 0x83702EE4;
	sub_82472FC0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702ef8
	if (!cr6.lt) goto loc_83702EF8;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_83702EF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702EFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702efc
	if (!cr6.eq) goto loc_83702EFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,232
	ctx.r3.s64 = ctx.r28.s64 + 232;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702F20;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702f34
	if (cr6.lt) goto loc_83702F34;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x83702F34;
	sub_82416268(ctx, base);
loc_83702F34:
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
loc_83702F40:
	// addi r6,r27,-20
	ctx.r6.s64 = ctx.r27.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83702F58;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83702fec
	if (!cr6.eq) goto loc_83702FEC;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r4,492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x82472fc0
	ctx.lr = 0x83702F90;
	sub_82472FC0(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83702fa4
	if (!cr6.lt) goto loc_83702FA4;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_83702FA4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83702FA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83702fa8
	if (!cr6.eq) goto loc_83702FA8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,260
	ctx.r3.s64 = ctx.r28.s64 + 260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83702FCC;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83702fe0
	if (cr6.lt) goto loc_83702FE0;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x83702FE0;
	sub_82416268(ctx, base);
loc_83702FE0:
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_83702FEC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83703004;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83703098
	if (!cr6.eq) goto loc_83703098;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r4,412(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x82472fc0
	ctx.lr = 0x8370303C;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83703050
	if (!cr6.lt) goto loc_83703050;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_83703050:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83703054:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703054
	if (!cr6.eq) goto loc_83703054;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,288
	ctx.r3.s64 = ctx.r28.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83703078;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370308c
	if (cr6.lt) goto loc_8370308C;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8370308C;
	sub_82416268(ctx, base);
loc_8370308C:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_83703098:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837030ac
	if (cr6.lt) goto loc_837030AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x837030AC;
	sub_82416268(ctx, base);
loc_837030AC:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x83702ab0
	if (!cr0.eq) goto loc_83702AB0;
loc_837030C4:
	// lwz r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837030e0
	if (cr6.eq) goto loc_837030E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x837030D8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x837030E0;
	sub_82416268(ctx, base);
loc_837030E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837030EC"))) PPC_WEAK_FUNC(sub_837030EC);
PPC_FUNC_IMPL(__imp__sub_837030EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837030F0"))) PPC_WEAK_FUNC(sub_837030F0);
PPC_FUNC_IMPL(__imp__sub_837030F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837030F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83703104;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-30248
	ctx.r29.s64 = ctx.r11.s64 + -30248;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370311C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-29756
	ctx.r7.s64 = ctx.r10.s64 + -29756;
	// addi r5,r8,-29772
	ctx.r5.s64 = ctx.r8.s64 + -29772;
	// addi r6,r9,-29768
	ctx.r6.s64 = ctx.r9.s64 + -29768;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83703164;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83703180;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370319C;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837031B8;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837031D4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837031E0"))) PPC_WEAK_FUNC(sub_837031E0);
PPC_FUNC_IMPL(__imp__sub_837031E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837032f0
	sub_837032F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837031E8"))) PPC_WEAK_FUNC(sub_837031E8);
PPC_FUNC_IMPL(__imp__sub_837031E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837032f0
	sub_837032F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837031F0"))) PPC_WEAK_FUNC(sub_837031F0);
PPC_FUNC_IMPL(__imp__sub_837031F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837031F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-29756
	ctx.r8.s64 = ctx.r11.s64 + -29756;
	// addi r7,r10,-29768
	ctx.r7.s64 = ctx.r10.s64 + -29768;
	// addi r6,r9,-29772
	ctx.r6.s64 = ctx.r9.s64 + -29772;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,428
	ctx.r28.s64 = ctx.r3.s64 + 428;
	// lwz r5,448(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370323c
	if (cr6.lt) goto loc_8370323C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370323C;
	sub_8386D088(ctx, base);
loc_8370323C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703268
	if (cr6.lt) goto loc_83703268;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703268;
	sub_8386D088(ctx, base);
loc_83703268:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370328c
	if (cr6.lt) goto loc_8370328C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370328C;
	sub_8386D088(ctx, base);
loc_8370328C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837032b0
	if (cr6.lt) goto loc_837032B0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837032B0;
	sub_8386D088(ctx, base);
loc_837032B0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837032d4
	if (cr6.lt) goto loc_837032D4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837032D4;
	sub_8386D088(ctx, base);
loc_837032D4:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x837032E8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837032F0"))) PPC_WEAK_FUNC(sub_837032F0);
PPC_FUNC_IMPL(__imp__sub_837032F0) {
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
	// bl 0x837031f0
	ctx.lr = 0x83703310;
	sub_837031F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83703330
	if (cr6.eq) goto loc_83703330;
	// bl 0x82595188
	ctx.lr = 0x83703320;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83703330;
	sub_825952B8(ctx, base);
loc_83703330:
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

__attribute__((alias("__imp__sub_8370334C"))) PPC_WEAK_FUNC(sub_8370334C);
PPC_FUNC_IMPL(__imp__sub_8370334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703350"))) PPC_WEAK_FUNC(sub_83703350);
PPC_FUNC_IMPL(__imp__sub_83703350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83703358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x83703364;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-30248
	ctx.r29.s64 = ctx.r11.s64 + -30248;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370337C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r5,r9,-29732
	ctx.r5.s64 = ctx.r9.s64 + -29732;
	// addi r4,r8,-29736
	ctx.r4.s64 = ctx.r8.s64 + -29736;
	// addi r3,r7,-29740
	ctx.r3.s64 = ctx.r7.s64 + -29740;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,-29720
	ctx.r6.s64 = ctx.r10.s64 + -29720;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837033D0;
	sub_824208C8(ctx, base);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837033EC;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,212
	ctx.r4.s64 = ctx.r29.s64 + 212;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83703408;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,228
	ctx.r4.s64 = ctx.r29.s64 + 228;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83703424;
	sub_824208C8(ctx, base);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// addi r4,r29,244
	ctx.r4.s64 = ctx.r29.s64 + 244;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83703440;
	sub_824208C8(ctx, base);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// stb r30,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r30.u8);
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370345C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703468"))) PPC_WEAK_FUNC(sub_83703468);
PPC_FUNC_IMPL(__imp__sub_83703468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837035b0
	sub_837035B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703470"))) PPC_WEAK_FUNC(sub_83703470);
PPC_FUNC_IMPL(__imp__sub_83703470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x837035b0
	sub_837035B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703478"))) PPC_WEAK_FUNC(sub_83703478);
PPC_FUNC_IMPL(__imp__sub_83703478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837035b0
	sub_837035B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703480"))) PPC_WEAK_FUNC(sub_83703480);
PPC_FUNC_IMPL(__imp__sub_83703480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83703488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r11,-29720
	ctx.r7.s64 = ctx.r11.s64 + -29720;
	// addi r6,r10,-29732
	ctx.r6.s64 = ctx.r10.s64 + -29732;
	// addi r5,r9,-29736
	ctx.r5.s64 = ctx.r9.s64 + -29736;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29740
	ctx.r4.s64 = ctx.r8.s64 + -29740;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r29,r3,488
	ctx.r29.s64 = ctx.r3.s64 + 488;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x837034d8
	if (cr6.lt) goto loc_837034D8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837034D8;
	sub_8386D088(ctx, base);
loc_837034D8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,460
	ctx.r28.s64 = ctx.r30.s64 + 460;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703504
	if (cr6.lt) goto loc_83703504;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703504;
	sub_8386D088(ctx, base);
loc_83703504:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,432
	ctx.r29.s64 = ctx.r30.s64 + 432;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703528
	if (cr6.lt) goto loc_83703528;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703528;
	sub_8386D088(ctx, base);
loc_83703528:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,404
	ctx.r28.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370354c
	if (cr6.lt) goto loc_8370354C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370354C;
	sub_8386D088(ctx, base);
loc_8370354C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,376
	ctx.r29.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703570
	if (cr6.lt) goto loc_83703570;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703570;
	sub_8386D088(ctx, base);
loc_83703570:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,348
	ctx.r28.s64 = ctx.r30.s64 + 348;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703594
	if (cr6.lt) goto loc_83703594;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703594;
	sub_8386D088(ctx, base);
loc_83703594:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82eaf978
	ctx.lr = 0x837035A8;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837035B0"))) PPC_WEAK_FUNC(sub_837035B0);
PPC_FUNC_IMPL(__imp__sub_837035B0) {
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
	// bl 0x83703480
	ctx.lr = 0x837035D0;
	sub_83703480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837035f0
	if (cr6.eq) goto loc_837035F0;
	// bl 0x82595188
	ctx.lr = 0x837035E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837035F0;
	sub_825952B8(ctx, base);
loc_837035F0:
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

__attribute__((alias("__imp__sub_8370360C"))) PPC_WEAK_FUNC(sub_8370360C);
PPC_FUNC_IMPL(__imp__sub_8370360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703610"))) PPC_WEAK_FUNC(sub_83703610);
PPC_FUNC_IMPL(__imp__sub_83703610) {
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
	// ble cr6,0x8370367c
	if (!cr6.gt) goto loc_8370367C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-29296
	ctx.r8.s64 = ctx.r10.s64 + -29296;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x8370366C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8370367C:
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

__attribute__((alias("__imp__sub_83703690"))) PPC_WEAK_FUNC(sub_83703690);
PPC_FUNC_IMPL(__imp__sub_83703690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83703698;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-29296
	ctx.r10.s64 = ctx.r11.s64 + -29296;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x837036DC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x83703704
	if (cr6.eq) goto loc_83703704;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x837036FC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83703704:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370370C"))) PPC_WEAK_FUNC(sub_8370370C);
PPC_FUNC_IMPL(__imp__sub_8370370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703710"))) PPC_WEAK_FUNC(sub_83703710);
PPC_FUNC_IMPL(__imp__sub_83703710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83703718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x83703748;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x83703770;
	sub_82420558(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703794"))) PPC_WEAK_FUNC(sub_83703794);
PPC_FUNC_IMPL(__imp__sub_83703794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703798"))) PPC_WEAK_FUNC(sub_83703798);
PPC_FUNC_IMPL(__imp__sub_83703798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837037ac
	if (cr6.eq) goto loc_837037AC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83703710
	sub_83703710(ctx, base);
	return;
loc_837037AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837037B4"))) PPC_WEAK_FUNC(sub_837037B4);
PPC_FUNC_IMPL(__imp__sub_837037B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837037B8"))) PPC_WEAK_FUNC(sub_837037B8);
PPC_FUNC_IMPL(__imp__sub_837037B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837037C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,32
	ctx.r30.s64 = ctx.r4.s64 + 32;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837037e0
	if (cr6.lt) goto loc_837037E0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837037E0;
	sub_8386D088(ctx, base);
loc_837037E0:
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
	// blt cr6,0x83703808
	if (cr6.lt) goto loc_83703808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83703808;
	sub_8386D088(ctx, base);
loc_83703808:
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

__attribute__((alias("__imp__sub_8370381C"))) PPC_WEAK_FUNC(sub_8370381C);
PPC_FUNC_IMPL(__imp__sub_8370381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703820"))) PPC_WEAK_FUNC(sub_83703820);
PPC_FUNC_IMPL(__imp__sub_83703820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83703828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x8370384C;
	sub_82420558(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x83703868;
	sub_82420558(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703888"))) PPC_WEAK_FUNC(sub_83703888);
PPC_FUNC_IMPL(__imp__sub_83703888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83703890;
	__savegprlr_27(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,136
	ctx.r10.s64 = 136;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x837038d0
	if (!cr6.lt) goto loc_837038D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x837038D0;
	sub_82E745E0(ctx, base);
loc_837038D0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-29496
	ctx.r27.s64 = ctx.r11.s64 + -29496;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83703918;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703924;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83703938
	if (cr6.lt) goto loc_83703938;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83703938;
	sub_82416268(ctx, base);
loc_83703938:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83703958
	if (cr6.lt) goto loc_83703958;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703958:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83703968:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703968
	if (!cr6.eq) goto loc_83703968;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370398C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703998;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837039ac
	if (cr6.lt) goto loc_837039AC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x837039AC;
	sub_82416268(ctx, base);
loc_837039AC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837039D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837039E0;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837039f4
	if (cr6.lt) goto loc_837039F4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x837039F4;
	sub_82416268(ctx, base);
loc_837039F4:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83703A0C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83703A28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703A34;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703a48
	if (cr6.lt) goto loc_83703A48;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83703A48;
	sub_82416268(ctx, base);
loc_83703A48:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83703a68
	if (cr6.lt) goto loc_83703A68;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703A68:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_83703A78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703a78
	if (!cr6.eq) goto loc_83703A78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83703A9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703AA8;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703abc
	if (cr6.lt) goto loc_83703ABC;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83703ABC;
	sub_82416268(ctx, base);
loc_83703ABC:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83703AE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703AF0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703b04
	if (cr6.lt) goto loc_83703B04;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83703B04;
	sub_82416268(ctx, base);
loc_83703B04:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83703b24
	if (cr6.lt) goto loc_83703B24;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703B24:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_83703B34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703b34
	if (!cr6.eq) goto loc_83703B34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83703B58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703B64;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703b78
	if (cr6.lt) goto loc_83703B78;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83703B78;
	sub_82416268(ctx, base);
loc_83703B78:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83703BA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703BAC;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703bc0
	if (cr6.lt) goto loc_83703BC0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83703BC0;
	sub_82416268(ctx, base);
loc_83703BC0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e97d90
	ctx.lr = 0x83703BD8;
	sub_82E97D90(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x83703BF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703C00;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703c14
	if (cr6.lt) goto loc_83703C14;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83703C14;
	sub_82416268(ctx, base);
loc_83703C14:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x83703c34
	if (cr6.lt) goto loc_83703C34;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703C34:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83703C44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703c44
	if (!cr6.eq) goto loc_83703C44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83703C68;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703C74;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703c88
	if (cr6.lt) goto loc_83703C88;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83703C88;
	sub_82416268(ctx, base);
loc_83703C88:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83703CB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703CBC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703cd0
	if (cr6.lt) goto loc_83703CD0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83703CD0;
	sub_82416268(ctx, base);
loc_83703CD0:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83703cf0
	if (cr6.lt) goto loc_83703CF0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703CF0:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_83703D00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703d00
	if (!cr6.eq) goto loc_83703D00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83703D24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703D30;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703d44
	if (cr6.lt) goto loc_83703D44;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83703D44;
	sub_82416268(ctx, base);
loc_83703D44:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83703D6C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703D78;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83703d8c
	if (cr6.lt) goto loc_83703D8C;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83703D8C;
	sub_82416268(ctx, base);
loc_83703D8C:
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// addi r4,r28,232
	ctx.r4.s64 = ctx.r28.s64 + 232;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x83703dac
	if (cr6.lt) goto loc_83703DAC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83703DAC:
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
loc_83703DBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703dbc
	if (!cr6.eq) goto loc_83703DBC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83703DE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83703DEC;
	sub_82E74C08(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703e00
	if (cr6.lt) goto loc_83703E00;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x83703E00;
	sub_82416268(ctx, base);
loc_83703E00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83703E0C"))) PPC_WEAK_FUNC(sub_83703E0C);
PPC_FUNC_IMPL(__imp__sub_83703E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83703E10"))) PPC_WEAK_FUNC(sub_83703E10);
PPC_FUNC_IMPL(__imp__sub_83703E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83703E18;
	__savegprlr_14(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r30.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x83691bb8
	ctx.lr = 0x83703E40;
	sub_83691BB8(ctx, base);
	// lwz r10,504(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x837046e0
	if (!cr6.lt) goto loc_837046E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,72
	ctx.r19.s64 = 72;
	// ori r15,r7,1
	ctx.r15.u64 = ctx.r7.u64 | 1;
	// addi r22,r11,-29388
	ctx.r22.s64 = ctx.r11.s64 + -29388;
	// addi r16,r10,27936
	ctx.r16.s64 = ctx.r10.s64 + 27936;
	// addi r17,r9,8980
	ctx.r17.s64 = ctx.r9.s64 + 8980;
	// addi r20,r8,-29296
	ctx.r20.s64 = ctx.r8.s64 + -29296;
loc_83703E94:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// ld r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82472fc0
	ctx.lr = 0x83703EC4;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-96
	ctx.r6.s64 = ctx.r22.s64 + -96;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83703EDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83703f74
	if (!cr6.eq) goto loc_83703F74;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// ld r8,16(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// bl 0x82472fc0
	ctx.lr = 0x83703F18;
	sub_82472FC0(ctx, base);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83703f2c
	if (!cr6.lt) goto loc_83703F2C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_83703F2C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83703F30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83703f30
	if (!cr6.eq) goto loc_83703F30;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,20
	ctx.r3.s64 = ctx.r14.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83703F54;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83703f68
	if (cr6.lt) goto loc_83703F68;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83703F68;
	sub_82416268(ctx, base);
loc_83703F68:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_83703F74:
	// addi r6,r22,-88
	ctx.r6.s64 = ctx.r22.s64 + -88;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83703F8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83703fcc
	if (!cr6.eq) goto loc_83703FCC;
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// ld r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// addi r8,r21,16
	ctx.r8.s64 = ctx.r21.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,608(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83703fc4
	if (!cr6.eq) goto loc_83703FC4;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83703fc8
	goto loc_83703FC8;
loc_83703FC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83703FC8:
	// stw r11,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r11.u32);
loc_83703FCC:
	// addi r6,r22,-80
	ctx.r6.s64 = ctx.r22.s64 + -80;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83703FE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370407c
	if (!cr6.eq) goto loc_8370407C;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// ld r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// ld r9,16(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r5,648(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// bl 0x82472fc0
	ctx.lr = 0x83704020;
	sub_82472FC0(ctx, base);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83704034
	if (!cr6.lt) goto loc_83704034;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_83704034:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83704038:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83704038
	if (!cr6.eq) goto loc_83704038;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,116
	ctx.r3.s64 = ctx.r14.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370405C;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83704070
	if (cr6.lt) goto loc_83704070;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x83704070;
	sub_82416268(ctx, base);
loc_83704070:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
loc_8370407C:
	// addi r6,r22,-72
	ctx.r6.s64 = ctx.r22.s64 + -72;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83704094;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837040e8
	if (!cr6.eq) goto loc_837040E8;
	// ld r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// addi r8,r21,16
	ctx.r8.s64 = ctx.r21.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837040cc
	if (!cr6.eq) goto loc_837040CC;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837040e4
	goto loc_837040E4;
loc_837040CC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837040e0
	if (!cr6.eq) goto loc_837040E0;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x837040e4
	goto loc_837040E4;
loc_837040E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837040E4:
	// stw r11,148(r14)
	PPC_STORE_U32(ctx.r14.u32 + 148, ctx.r11.u32);
loc_837040E8:
	// addi r6,r22,-60
	ctx.r6.s64 = ctx.r22.s64 + -60;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83704100;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837046b4
	if (!cr6.eq) goto loc_837046B4;
	// addi r27,r14,152
	ctx.r27.s64 = ctx.r14.s64 + 152;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r18,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r18.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r24,r27,4
	ctx.r24.s64 = ctx.r27.s64 + 4;
	// stw r19,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r19.u32);
	// stw r26,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r26.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r24,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83704138;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 160);
	// stw r30,152(r14)
	PPC_STORE_U32(ctx.r14.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83704158
	if (cr6.eq) goto loc_83704158;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x8247b268
	ctx.lr = 0x83704150;
	sub_8247B268(ctx, base);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_83704158:
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837046b0
	if (!cr6.lt) goto loc_837046B0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_83704188:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824208c8
	ctx.lr = 0x837041A4;
	sub_824208C8(ctx, base);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824208c8
	ctx.lr = 0x837041C4;
	sub_824208C8(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x837041F0;
	sub_83691BB8(ctx, base);
	// lwz r10,536(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r11,540(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83704560
	if (!cr6.lt) goto loc_83704560;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8370421C:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,680(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r4,684(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// bl 0x82472fc0
	ctx.lr = 0x83704250;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-52
	ctx.r6.s64 = ctx.r22.s64 + -52;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83704268;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837042fc
	if (!cr6.eq) goto loc_837042FC;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r30,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// bl 0x82472fc0
	ctx.lr = 0x837042A0;
	sub_82472FC0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837042b4
	if (!cr6.lt) goto loc_837042B4;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_837042B4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837042B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837042b8
	if (!cr6.eq) goto loc_837042B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837042DC;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837042f0
	if (cr6.lt) goto loc_837042F0;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x837042F0;
	sub_82416268(ctx, base);
loc_837042F0:
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// stb r30,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r30.u8);
loc_837042FC:
	// addi r6,r22,-44
	ctx.r6.s64 = ctx.r22.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83704314;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83704364
	if (!cr6.eq) goto loc_83704364;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83704348
	if (!cr6.eq) goto loc_83704348;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83704360
	goto loc_83704360;
loc_83704348:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370435c
	if (!cr6.eq) goto loc_8370435C;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83704360
	goto loc_83704360;
loc_8370435C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83704360:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_83704364:
	// addi r6,r22,-36
	ctx.r6.s64 = ctx.r22.s64 + -36;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8370437C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83704410
	if (!cr6.eq) goto loc_83704410;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,664(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r4,668(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// bl 0x82472fc0
	ctx.lr = 0x837043B4;
	sub_82472FC0(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837043c8
	if (!cr6.lt) goto loc_837043C8;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_837043C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837043CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837043cc
	if (!cr6.eq) goto loc_837043CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837043F0;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83704404
	if (cr6.lt) goto loc_83704404;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x83704404;
	sub_82416268(ctx, base);
loc_83704404:
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
loc_83704410:
	// addi r6,r22,-28
	ctx.r6.s64 = ctx.r22.s64 + -28;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83704428;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83704478
	if (!cr6.eq) goto loc_83704478;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370445c
	if (!cr6.eq) goto loc_8370445C;
	// ld r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83704474
	goto loc_83704474;
loc_8370445C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83704470
	if (!cr6.eq) goto loc_83704470;
	// ld r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83704474
	goto loc_83704474;
loc_83704470:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83704474:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_83704478:
	// addi r6,r22,-12
	ctx.r6.s64 = ctx.r22.s64 + -12;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83704490;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837044e0
	if (!cr6.eq) goto loc_837044E0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837044c4
	if (!cr6.eq) goto loc_837044C4;
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837044dc
	goto loc_837044DC;
loc_837044C4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837044d8
	if (!cr6.eq) goto loc_837044D8;
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x837044dc
	goto loc_837044DC;
loc_837044D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837044DC:
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
loc_837044E0:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x837044F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83704534
	if (!cr6.eq) goto loc_83704534;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,624(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370452c
	if (!cr6.eq) goto loc_8370452C;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83704530
	goto loc_83704530;
loc_8370452C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83704530:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_83704534:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704548
	if (cr6.lt) goto loc_83704548;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83704548;
	sub_82416268(ctx, base);
loc_83704548:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bne 0x8370421c
	if (!cr0.eq) goto loc_8370421C;
loc_83704560:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837045bc
	if (cr6.lt) goto loc_837045BC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x837045ac
	if (!cr6.gt) goto loc_837045AC;
	// stw r26,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r24,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r24.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r18,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r18.u32);
	// stw r19,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r19.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x837045A4;
	sub_8247B270(ctx, base);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// b 0x837045b0
	goto loc_837045B0;
loc_837045AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837045B0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83704648
	if (cr6.eq) goto loc_83704648;
loc_837045BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8370463c
	if (cr0.eq) goto loc_8370463C;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x837045FC;
	sub_82420558(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83704624;
	sub_82420558(ctx, base);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_8370463C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83704648:
	// lwz r31,544(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83704664
	if (cr6.eq) goto loc_83704664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370465C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83704664;
	sub_82416268(ctx, base);
loc_83704664:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704678
	if (cr6.lt) goto loc_83704678;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x83704678;
	sub_8386D088(ctx, base);
loc_83704678:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// blt cr6,0x83704698
	if (cr6.lt) goto loc_83704698;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8386d088
	ctx.lr = 0x83704698;
	sub_8386D088(ctx, base);
loc_83704698:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bne 0x83704188
	if (!cr0.eq) goto loc_83704188;
loc_837046B0:
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_837046B4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837046c8
	if (cr6.lt) goto loc_837046C8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x837046C8;
	sub_82416268(ctx, base);
loc_837046C8:
	// addi r21,r21,32
	ctx.r21.s64 = ctx.r21.s64 + 32;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplw cr6,r21,r31
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x83703e94
	if (cr6.lt) goto loc_83703E94;
loc_837046E0:
	// lwz r31,512(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837046fc
	if (cr6.eq) goto loc_837046FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x837046F4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x837046FC;
	sub_82416268(ctx, base);
loc_837046FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704708"))) PPC_WEAK_FUNC(sub_83704708);
PPC_FUNC_IMPL(__imp__sub_83704708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83704710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370471C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-29656
	ctx.r29.s64 = ctx.r11.s64 + -29656;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83704734;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-29264
	ctx.r7.s64 = ctx.r10.s64 + -29264;
	// addi r5,r8,-29280
	ctx.r5.s64 = ctx.r8.s64 + -29280;
	// addi r6,r9,-29276
	ctx.r6.s64 = ctx.r9.s64 + -29276;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370477C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83704798;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837047B8;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837047D4;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837047F0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837047FC"))) PPC_WEAK_FUNC(sub_837047FC);
PPC_FUNC_IMPL(__imp__sub_837047FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704800"))) PPC_WEAK_FUNC(sub_83704800);
PPC_FUNC_IMPL(__imp__sub_83704800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83704910
	sub_83704910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704808"))) PPC_WEAK_FUNC(sub_83704808);
PPC_FUNC_IMPL(__imp__sub_83704808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83704910
	sub_83704910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704810"))) PPC_WEAK_FUNC(sub_83704810);
PPC_FUNC_IMPL(__imp__sub_83704810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83704818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-29264
	ctx.r8.s64 = ctx.r11.s64 + -29264;
	// addi r7,r10,-29276
	ctx.r7.s64 = ctx.r10.s64 + -29276;
	// addi r6,r9,-29280
	ctx.r6.s64 = ctx.r9.s64 + -29280;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,432
	ctx.r28.s64 = ctx.r3.s64 + 432;
	// lwz r5,452(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370485c
	if (cr6.lt) goto loc_8370485C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370485C;
	sub_8386D088(ctx, base);
loc_8370485C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,404
	ctx.r29.s64 = ctx.r30.s64 + 404;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704888
	if (cr6.lt) goto loc_83704888;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83704888;
	sub_8386D088(ctx, base);
loc_83704888:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,376
	ctx.r28.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837048ac
	if (cr6.lt) goto loc_837048AC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837048AC;
	sub_8386D088(ctx, base);
loc_837048AC:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837048d0
	if (cr6.lt) goto loc_837048D0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837048D0;
	sub_8386D088(ctx, base);
loc_837048D0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837048f4
	if (cr6.lt) goto loc_837048F4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837048F4;
	sub_8386D088(ctx, base);
loc_837048F4:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83704908;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704910"))) PPC_WEAK_FUNC(sub_83704910);
PPC_FUNC_IMPL(__imp__sub_83704910) {
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
	// bl 0x83704810
	ctx.lr = 0x83704930;
	sub_83704810(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83704950
	if (cr6.eq) goto loc_83704950;
	// bl 0x82595188
	ctx.lr = 0x83704940;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83704950;
	sub_825952B8(ctx, base);
loc_83704950:
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

__attribute__((alias("__imp__sub_8370496C"))) PPC_WEAK_FUNC(sub_8370496C);
PPC_FUNC_IMPL(__imp__sub_8370496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704970"))) PPC_WEAK_FUNC(sub_83704970);
PPC_FUNC_IMPL(__imp__sub_83704970) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83704988;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-29656
	ctx.r4.s64 = ctx.r11.s64 + -29656;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x8370499C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-29228
	ctx.r6.s64 = ctx.r10.s64 + -29228;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-29244
	ctx.r4.s64 = ctx.r8.s64 + -29244;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-29240
	ctx.r5.s64 = ctx.r9.s64 + -29240;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-29248
	ctx.r10.s64 = ctx.r7.s64 + -29248;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,200
	ctx.r4.s64 = 200;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x83703610
	ctx.lr = 0x837049EC;
	sub_83703610(ctx, base);
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

__attribute__((alias("__imp__sub_83704A04"))) PPC_WEAK_FUNC(sub_83704A04);
PPC_FUNC_IMPL(__imp__sub_83704A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704A08"))) PPC_WEAK_FUNC(sub_83704A08);
PPC_FUNC_IMPL(__imp__sub_83704A08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83704a20
	sub_83704A20(ctx, base);
	return;
}

