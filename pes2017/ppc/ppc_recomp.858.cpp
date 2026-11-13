#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C86A98"))) PPC_WEAK_FUNC(sub_83C86A98);
PPC_FUNC_IMPL(__imp__sub_83C86A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,936
	ctx.r3.s64 = ctx.r11.s64 + 936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86AA4"))) PPC_WEAK_FUNC(sub_83C86AA4);
PPC_FUNC_IMPL(__imp__sub_83C86AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86AA8"))) PPC_WEAK_FUNC(sub_83C86AA8);
PPC_FUNC_IMPL(__imp__sub_83C86AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24756
	ctx.r7.s64 = ctx.r8.s64 + 24756;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24756(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24756);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24756, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86AD0"))) PPC_WEAK_FUNC(sub_83C86AD0);
PPC_FUNC_IMPL(__imp__sub_83C86AD0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// bl 0x83523120
	ctx.lr = 0x83C86AE8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C86AF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86B04"))) PPC_WEAK_FUNC(sub_83C86B04);
PPC_FUNC_IMPL(__imp__sub_83C86B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B08"))) PPC_WEAK_FUNC(sub_83C86B08);
PPC_FUNC_IMPL(__imp__sub_83C86B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B14"))) PPC_WEAK_FUNC(sub_83C86B14);
PPC_FUNC_IMPL(__imp__sub_83C86B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B18"))) PPC_WEAK_FUNC(sub_83C86B18);
PPC_FUNC_IMPL(__imp__sub_83C86B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,968
	ctx.r3.s64 = ctx.r11.s64 + 968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B24"))) PPC_WEAK_FUNC(sub_83C86B24);
PPC_FUNC_IMPL(__imp__sub_83C86B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B28"))) PPC_WEAK_FUNC(sub_83C86B28);
PPC_FUNC_IMPL(__imp__sub_83C86B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,976
	ctx.r3.s64 = ctx.r11.s64 + 976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B34"))) PPC_WEAK_FUNC(sub_83C86B34);
PPC_FUNC_IMPL(__imp__sub_83C86B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B38"))) PPC_WEAK_FUNC(sub_83C86B38);
PPC_FUNC_IMPL(__imp__sub_83C86B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B44"))) PPC_WEAK_FUNC(sub_83C86B44);
PPC_FUNC_IMPL(__imp__sub_83C86B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B48"))) PPC_WEAK_FUNC(sub_83C86B48);
PPC_FUNC_IMPL(__imp__sub_83C86B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B54"))) PPC_WEAK_FUNC(sub_83C86B54);
PPC_FUNC_IMPL(__imp__sub_83C86B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B58"))) PPC_WEAK_FUNC(sub_83C86B58);
PPC_FUNC_IMPL(__imp__sub_83C86B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 + 1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B64"))) PPC_WEAK_FUNC(sub_83C86B64);
PPC_FUNC_IMPL(__imp__sub_83C86B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B68"))) PPC_WEAK_FUNC(sub_83C86B68);
PPC_FUNC_IMPL(__imp__sub_83C86B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B74"))) PPC_WEAK_FUNC(sub_83C86B74);
PPC_FUNC_IMPL(__imp__sub_83C86B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B78"))) PPC_WEAK_FUNC(sub_83C86B78);
PPC_FUNC_IMPL(__imp__sub_83C86B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1016
	ctx.r3.s64 = ctx.r11.s64 + 1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B84"))) PPC_WEAK_FUNC(sub_83C86B84);
PPC_FUNC_IMPL(__imp__sub_83C86B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B88"))) PPC_WEAK_FUNC(sub_83C86B88);
PPC_FUNC_IMPL(__imp__sub_83C86B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86B94"))) PPC_WEAK_FUNC(sub_83C86B94);
PPC_FUNC_IMPL(__imp__sub_83C86B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86B98"))) PPC_WEAK_FUNC(sub_83C86B98);
PPC_FUNC_IMPL(__imp__sub_83C86B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86BA4"))) PPC_WEAK_FUNC(sub_83C86BA4);
PPC_FUNC_IMPL(__imp__sub_83C86BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86BA8"))) PPC_WEAK_FUNC(sub_83C86BA8);
PPC_FUNC_IMPL(__imp__sub_83C86BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1040
	ctx.r3.s64 = ctx.r11.s64 + 1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86BB4"))) PPC_WEAK_FUNC(sub_83C86BB4);
PPC_FUNC_IMPL(__imp__sub_83C86BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86BB8"))) PPC_WEAK_FUNC(sub_83C86BB8);
PPC_FUNC_IMPL(__imp__sub_83C86BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1048
	ctx.r3.s64 = ctx.r11.s64 + 1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86BC4"))) PPC_WEAK_FUNC(sub_83C86BC4);
PPC_FUNC_IMPL(__imp__sub_83C86BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86BC8"))) PPC_WEAK_FUNC(sub_83C86BC8);
PPC_FUNC_IMPL(__imp__sub_83C86BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24768
	ctx.r7.s64 = ctx.r8.s64 + 24768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86BF0"))) PPC_WEAK_FUNC(sub_83C86BF0);
PPC_FUNC_IMPL(__imp__sub_83C86BF0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24764
	ctx.r3.s64 = ctx.r11.s64 + 24764;
	// bl 0x83523120
	ctx.lr = 0x83C86C08;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1056
	ctx.r3.s64 = ctx.r10.s64 + 1056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C86C14;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86C24"))) PPC_WEAK_FUNC(sub_83C86C24);
PPC_FUNC_IMPL(__imp__sub_83C86C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C28"))) PPC_WEAK_FUNC(sub_83C86C28);
PPC_FUNC_IMPL(__imp__sub_83C86C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C34"))) PPC_WEAK_FUNC(sub_83C86C34);
PPC_FUNC_IMPL(__imp__sub_83C86C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C38"))) PPC_WEAK_FUNC(sub_83C86C38);
PPC_FUNC_IMPL(__imp__sub_83C86C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1080
	ctx.r3.s64 = ctx.r11.s64 + 1080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C44"))) PPC_WEAK_FUNC(sub_83C86C44);
PPC_FUNC_IMPL(__imp__sub_83C86C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C48"))) PPC_WEAK_FUNC(sub_83C86C48);
PPC_FUNC_IMPL(__imp__sub_83C86C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C54"))) PPC_WEAK_FUNC(sub_83C86C54);
PPC_FUNC_IMPL(__imp__sub_83C86C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C58"))) PPC_WEAK_FUNC(sub_83C86C58);
PPC_FUNC_IMPL(__imp__sub_83C86C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C64"))) PPC_WEAK_FUNC(sub_83C86C64);
PPC_FUNC_IMPL(__imp__sub_83C86C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C68"))) PPC_WEAK_FUNC(sub_83C86C68);
PPC_FUNC_IMPL(__imp__sub_83C86C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1104
	ctx.r3.s64 = ctx.r11.s64 + 1104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C74"))) PPC_WEAK_FUNC(sub_83C86C74);
PPC_FUNC_IMPL(__imp__sub_83C86C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C78"))) PPC_WEAK_FUNC(sub_83C86C78);
PPC_FUNC_IMPL(__imp__sub_83C86C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1112
	ctx.r3.s64 = ctx.r11.s64 + 1112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C84"))) PPC_WEAK_FUNC(sub_83C86C84);
PPC_FUNC_IMPL(__imp__sub_83C86C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C88"))) PPC_WEAK_FUNC(sub_83C86C88);
PPC_FUNC_IMPL(__imp__sub_83C86C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86C94"))) PPC_WEAK_FUNC(sub_83C86C94);
PPC_FUNC_IMPL(__imp__sub_83C86C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86C98"))) PPC_WEAK_FUNC(sub_83C86C98);
PPC_FUNC_IMPL(__imp__sub_83C86C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CA4"))) PPC_WEAK_FUNC(sub_83C86CA4);
PPC_FUNC_IMPL(__imp__sub_83C86CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CA8"))) PPC_WEAK_FUNC(sub_83C86CA8);
PPC_FUNC_IMPL(__imp__sub_83C86CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CB4"))) PPC_WEAK_FUNC(sub_83C86CB4);
PPC_FUNC_IMPL(__imp__sub_83C86CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CB8"))) PPC_WEAK_FUNC(sub_83C86CB8);
PPC_FUNC_IMPL(__imp__sub_83C86CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1144
	ctx.r3.s64 = ctx.r11.s64 + 1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CC4"))) PPC_WEAK_FUNC(sub_83C86CC4);
PPC_FUNC_IMPL(__imp__sub_83C86CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CC8"))) PPC_WEAK_FUNC(sub_83C86CC8);
PPC_FUNC_IMPL(__imp__sub_83C86CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CD4"))) PPC_WEAK_FUNC(sub_83C86CD4);
PPC_FUNC_IMPL(__imp__sub_83C86CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CD8"))) PPC_WEAK_FUNC(sub_83C86CD8);
PPC_FUNC_IMPL(__imp__sub_83C86CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CE4"))) PPC_WEAK_FUNC(sub_83C86CE4);
PPC_FUNC_IMPL(__imp__sub_83C86CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CE8"))) PPC_WEAK_FUNC(sub_83C86CE8);
PPC_FUNC_IMPL(__imp__sub_83C86CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1168
	ctx.r3.s64 = ctx.r11.s64 + 1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86CF4"))) PPC_WEAK_FUNC(sub_83C86CF4);
PPC_FUNC_IMPL(__imp__sub_83C86CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86CF8"))) PPC_WEAK_FUNC(sub_83C86CF8);
PPC_FUNC_IMPL(__imp__sub_83C86CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1176
	ctx.r3.s64 = ctx.r11.s64 + 1176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D04"))) PPC_WEAK_FUNC(sub_83C86D04);
PPC_FUNC_IMPL(__imp__sub_83C86D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D08"))) PPC_WEAK_FUNC(sub_83C86D08);
PPC_FUNC_IMPL(__imp__sub_83C86D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1184
	ctx.r3.s64 = ctx.r11.s64 + 1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D14"))) PPC_WEAK_FUNC(sub_83C86D14);
PPC_FUNC_IMPL(__imp__sub_83C86D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D18"))) PPC_WEAK_FUNC(sub_83C86D18);
PPC_FUNC_IMPL(__imp__sub_83C86D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1192
	ctx.r3.s64 = ctx.r11.s64 + 1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D24"))) PPC_WEAK_FUNC(sub_83C86D24);
PPC_FUNC_IMPL(__imp__sub_83C86D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D28"))) PPC_WEAK_FUNC(sub_83C86D28);
PPC_FUNC_IMPL(__imp__sub_83C86D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1200
	ctx.r3.s64 = ctx.r11.s64 + 1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D34"))) PPC_WEAK_FUNC(sub_83C86D34);
PPC_FUNC_IMPL(__imp__sub_83C86D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D38"))) PPC_WEAK_FUNC(sub_83C86D38);
PPC_FUNC_IMPL(__imp__sub_83C86D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D44"))) PPC_WEAK_FUNC(sub_83C86D44);
PPC_FUNC_IMPL(__imp__sub_83C86D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D48"))) PPC_WEAK_FUNC(sub_83C86D48);
PPC_FUNC_IMPL(__imp__sub_83C86D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1216
	ctx.r3.s64 = ctx.r11.s64 + 1216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D54"))) PPC_WEAK_FUNC(sub_83C86D54);
PPC_FUNC_IMPL(__imp__sub_83C86D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D58"))) PPC_WEAK_FUNC(sub_83C86D58);
PPC_FUNC_IMPL(__imp__sub_83C86D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D64"))) PPC_WEAK_FUNC(sub_83C86D64);
PPC_FUNC_IMPL(__imp__sub_83C86D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D68"))) PPC_WEAK_FUNC(sub_83C86D68);
PPC_FUNC_IMPL(__imp__sub_83C86D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1232
	ctx.r3.s64 = ctx.r11.s64 + 1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D74"))) PPC_WEAK_FUNC(sub_83C86D74);
PPC_FUNC_IMPL(__imp__sub_83C86D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D78"))) PPC_WEAK_FUNC(sub_83C86D78);
PPC_FUNC_IMPL(__imp__sub_83C86D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1240
	ctx.r3.s64 = ctx.r11.s64 + 1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D84"))) PPC_WEAK_FUNC(sub_83C86D84);
PPC_FUNC_IMPL(__imp__sub_83C86D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D88"))) PPC_WEAK_FUNC(sub_83C86D88);
PPC_FUNC_IMPL(__imp__sub_83C86D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86D94"))) PPC_WEAK_FUNC(sub_83C86D94);
PPC_FUNC_IMPL(__imp__sub_83C86D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86D98"))) PPC_WEAK_FUNC(sub_83C86D98);
PPC_FUNC_IMPL(__imp__sub_83C86D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86DA4"))) PPC_WEAK_FUNC(sub_83C86DA4);
PPC_FUNC_IMPL(__imp__sub_83C86DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86DA8"))) PPC_WEAK_FUNC(sub_83C86DA8);
PPC_FUNC_IMPL(__imp__sub_83C86DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24784
	ctx.r7.s64 = ctx.r8.s64 + 24784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86DD0"))) PPC_WEAK_FUNC(sub_83C86DD0);
PPC_FUNC_IMPL(__imp__sub_83C86DD0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x83523120
	ctx.lr = 0x83C86DE8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1264
	ctx.r3.s64 = ctx.r10.s64 + 1264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C86DF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86E04"))) PPC_WEAK_FUNC(sub_83C86E04);
PPC_FUNC_IMPL(__imp__sub_83C86E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E08"))) PPC_WEAK_FUNC(sub_83C86E08);
PPC_FUNC_IMPL(__imp__sub_83C86E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E14"))) PPC_WEAK_FUNC(sub_83C86E14);
PPC_FUNC_IMPL(__imp__sub_83C86E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E18"))) PPC_WEAK_FUNC(sub_83C86E18);
PPC_FUNC_IMPL(__imp__sub_83C86E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1288
	ctx.r3.s64 = ctx.r11.s64 + 1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E24"))) PPC_WEAK_FUNC(sub_83C86E24);
PPC_FUNC_IMPL(__imp__sub_83C86E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E28"))) PPC_WEAK_FUNC(sub_83C86E28);
PPC_FUNC_IMPL(__imp__sub_83C86E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1296
	ctx.r3.s64 = ctx.r11.s64 + 1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E34"))) PPC_WEAK_FUNC(sub_83C86E34);
PPC_FUNC_IMPL(__imp__sub_83C86E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E38"))) PPC_WEAK_FUNC(sub_83C86E38);
PPC_FUNC_IMPL(__imp__sub_83C86E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E44"))) PPC_WEAK_FUNC(sub_83C86E44);
PPC_FUNC_IMPL(__imp__sub_83C86E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E48"))) PPC_WEAK_FUNC(sub_83C86E48);
PPC_FUNC_IMPL(__imp__sub_83C86E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E54"))) PPC_WEAK_FUNC(sub_83C86E54);
PPC_FUNC_IMPL(__imp__sub_83C86E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E58"))) PPC_WEAK_FUNC(sub_83C86E58);
PPC_FUNC_IMPL(__imp__sub_83C86E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1320
	ctx.r3.s64 = ctx.r11.s64 + 1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E64"))) PPC_WEAK_FUNC(sub_83C86E64);
PPC_FUNC_IMPL(__imp__sub_83C86E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E68"))) PPC_WEAK_FUNC(sub_83C86E68);
PPC_FUNC_IMPL(__imp__sub_83C86E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1328
	ctx.r3.s64 = ctx.r11.s64 + 1328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E74"))) PPC_WEAK_FUNC(sub_83C86E74);
PPC_FUNC_IMPL(__imp__sub_83C86E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E78"))) PPC_WEAK_FUNC(sub_83C86E78);
PPC_FUNC_IMPL(__imp__sub_83C86E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E84"))) PPC_WEAK_FUNC(sub_83C86E84);
PPC_FUNC_IMPL(__imp__sub_83C86E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E88"))) PPC_WEAK_FUNC(sub_83C86E88);
PPC_FUNC_IMPL(__imp__sub_83C86E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86E94"))) PPC_WEAK_FUNC(sub_83C86E94);
PPC_FUNC_IMPL(__imp__sub_83C86E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86E98"))) PPC_WEAK_FUNC(sub_83C86E98);
PPC_FUNC_IMPL(__imp__sub_83C86E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1352
	ctx.r3.s64 = ctx.r11.s64 + 1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86EA4"))) PPC_WEAK_FUNC(sub_83C86EA4);
PPC_FUNC_IMPL(__imp__sub_83C86EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86EA8"))) PPC_WEAK_FUNC(sub_83C86EA8);
PPC_FUNC_IMPL(__imp__sub_83C86EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86EB4"))) PPC_WEAK_FUNC(sub_83C86EB4);
PPC_FUNC_IMPL(__imp__sub_83C86EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86EB8"))) PPC_WEAK_FUNC(sub_83C86EB8);
PPC_FUNC_IMPL(__imp__sub_83C86EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1368
	ctx.r3.s64 = ctx.r11.s64 + 1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86EC4"))) PPC_WEAK_FUNC(sub_83C86EC4);
PPC_FUNC_IMPL(__imp__sub_83C86EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86EC8"))) PPC_WEAK_FUNC(sub_83C86EC8);
PPC_FUNC_IMPL(__imp__sub_83C86EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24796
	ctx.r7.s64 = ctx.r8.s64 + 24796;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24796(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24796);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24796, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86EF0"))) PPC_WEAK_FUNC(sub_83C86EF0);
PPC_FUNC_IMPL(__imp__sub_83C86EF0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// bl 0x83523120
	ctx.lr = 0x83C86F08;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1376
	ctx.r3.s64 = ctx.r10.s64 + 1376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C86F14;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C86F24"))) PPC_WEAK_FUNC(sub_83C86F24);
PPC_FUNC_IMPL(__imp__sub_83C86F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F28"))) PPC_WEAK_FUNC(sub_83C86F28);
PPC_FUNC_IMPL(__imp__sub_83C86F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F34"))) PPC_WEAK_FUNC(sub_83C86F34);
PPC_FUNC_IMPL(__imp__sub_83C86F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F38"))) PPC_WEAK_FUNC(sub_83C86F38);
PPC_FUNC_IMPL(__imp__sub_83C86F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F44"))) PPC_WEAK_FUNC(sub_83C86F44);
PPC_FUNC_IMPL(__imp__sub_83C86F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F48"))) PPC_WEAK_FUNC(sub_83C86F48);
PPC_FUNC_IMPL(__imp__sub_83C86F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1408
	ctx.r3.s64 = ctx.r11.s64 + 1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F54"))) PPC_WEAK_FUNC(sub_83C86F54);
PPC_FUNC_IMPL(__imp__sub_83C86F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F58"))) PPC_WEAK_FUNC(sub_83C86F58);
PPC_FUNC_IMPL(__imp__sub_83C86F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1416
	ctx.r3.s64 = ctx.r11.s64 + 1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F64"))) PPC_WEAK_FUNC(sub_83C86F64);
PPC_FUNC_IMPL(__imp__sub_83C86F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F68"))) PPC_WEAK_FUNC(sub_83C86F68);
PPC_FUNC_IMPL(__imp__sub_83C86F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F74"))) PPC_WEAK_FUNC(sub_83C86F74);
PPC_FUNC_IMPL(__imp__sub_83C86F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F78"))) PPC_WEAK_FUNC(sub_83C86F78);
PPC_FUNC_IMPL(__imp__sub_83C86F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1432
	ctx.r3.s64 = ctx.r11.s64 + 1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F84"))) PPC_WEAK_FUNC(sub_83C86F84);
PPC_FUNC_IMPL(__imp__sub_83C86F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F88"))) PPC_WEAK_FUNC(sub_83C86F88);
PPC_FUNC_IMPL(__imp__sub_83C86F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86F94"))) PPC_WEAK_FUNC(sub_83C86F94);
PPC_FUNC_IMPL(__imp__sub_83C86F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86F98"))) PPC_WEAK_FUNC(sub_83C86F98);
PPC_FUNC_IMPL(__imp__sub_83C86F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1448
	ctx.r3.s64 = ctx.r11.s64 + 1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86FA4"))) PPC_WEAK_FUNC(sub_83C86FA4);
PPC_FUNC_IMPL(__imp__sub_83C86FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86FA8"))) PPC_WEAK_FUNC(sub_83C86FA8);
PPC_FUNC_IMPL(__imp__sub_83C86FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86FB4"))) PPC_WEAK_FUNC(sub_83C86FB4);
PPC_FUNC_IMPL(__imp__sub_83C86FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86FB8"))) PPC_WEAK_FUNC(sub_83C86FB8);
PPC_FUNC_IMPL(__imp__sub_83C86FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1464
	ctx.r3.s64 = ctx.r11.s64 + 1464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86FC4"))) PPC_WEAK_FUNC(sub_83C86FC4);
PPC_FUNC_IMPL(__imp__sub_83C86FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86FC8"))) PPC_WEAK_FUNC(sub_83C86FC8);
PPC_FUNC_IMPL(__imp__sub_83C86FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86FD4"))) PPC_WEAK_FUNC(sub_83C86FD4);
PPC_FUNC_IMPL(__imp__sub_83C86FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86FD8"))) PPC_WEAK_FUNC(sub_83C86FD8);
PPC_FUNC_IMPL(__imp__sub_83C86FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1480
	ctx.r3.s64 = ctx.r11.s64 + 1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C86FE4"))) PPC_WEAK_FUNC(sub_83C86FE4);
PPC_FUNC_IMPL(__imp__sub_83C86FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C86FE8"))) PPC_WEAK_FUNC(sub_83C86FE8);
PPC_FUNC_IMPL(__imp__sub_83C86FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24808
	ctx.r7.s64 = ctx.r8.s64 + 24808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87010"))) PPC_WEAK_FUNC(sub_83C87010);
PPC_FUNC_IMPL(__imp__sub_83C87010) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24804
	ctx.r3.s64 = ctx.r11.s64 + 24804;
	// bl 0x83523120
	ctx.lr = 0x83C87028;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1488
	ctx.r3.s64 = ctx.r10.s64 + 1488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87034;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87044"))) PPC_WEAK_FUNC(sub_83C87044);
PPC_FUNC_IMPL(__imp__sub_83C87044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87048"))) PPC_WEAK_FUNC(sub_83C87048);
PPC_FUNC_IMPL(__imp__sub_83C87048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87054"))) PPC_WEAK_FUNC(sub_83C87054);
PPC_FUNC_IMPL(__imp__sub_83C87054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87058"))) PPC_WEAK_FUNC(sub_83C87058);
PPC_FUNC_IMPL(__imp__sub_83C87058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87064"))) PPC_WEAK_FUNC(sub_83C87064);
PPC_FUNC_IMPL(__imp__sub_83C87064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87068"))) PPC_WEAK_FUNC(sub_83C87068);
PPC_FUNC_IMPL(__imp__sub_83C87068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87074"))) PPC_WEAK_FUNC(sub_83C87074);
PPC_FUNC_IMPL(__imp__sub_83C87074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87078"))) PPC_WEAK_FUNC(sub_83C87078);
PPC_FUNC_IMPL(__imp__sub_83C87078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87084"))) PPC_WEAK_FUNC(sub_83C87084);
PPC_FUNC_IMPL(__imp__sub_83C87084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87088"))) PPC_WEAK_FUNC(sub_83C87088);
PPC_FUNC_IMPL(__imp__sub_83C87088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1536
	ctx.r3.s64 = ctx.r11.s64 + 1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87094"))) PPC_WEAK_FUNC(sub_83C87094);
PPC_FUNC_IMPL(__imp__sub_83C87094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87098"))) PPC_WEAK_FUNC(sub_83C87098);
PPC_FUNC_IMPL(__imp__sub_83C87098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870A4"))) PPC_WEAK_FUNC(sub_83C870A4);
PPC_FUNC_IMPL(__imp__sub_83C870A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870A8"))) PPC_WEAK_FUNC(sub_83C870A8);
PPC_FUNC_IMPL(__imp__sub_83C870A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870B4"))) PPC_WEAK_FUNC(sub_83C870B4);
PPC_FUNC_IMPL(__imp__sub_83C870B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870B8"))) PPC_WEAK_FUNC(sub_83C870B8);
PPC_FUNC_IMPL(__imp__sub_83C870B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870C4"))) PPC_WEAK_FUNC(sub_83C870C4);
PPC_FUNC_IMPL(__imp__sub_83C870C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870C8"))) PPC_WEAK_FUNC(sub_83C870C8);
PPC_FUNC_IMPL(__imp__sub_83C870C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1568
	ctx.r3.s64 = ctx.r11.s64 + 1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870D4"))) PPC_WEAK_FUNC(sub_83C870D4);
PPC_FUNC_IMPL(__imp__sub_83C870D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870D8"))) PPC_WEAK_FUNC(sub_83C870D8);
PPC_FUNC_IMPL(__imp__sub_83C870D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1576
	ctx.r3.s64 = ctx.r11.s64 + 1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870E4"))) PPC_WEAK_FUNC(sub_83C870E4);
PPC_FUNC_IMPL(__imp__sub_83C870E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870E8"))) PPC_WEAK_FUNC(sub_83C870E8);
PPC_FUNC_IMPL(__imp__sub_83C870E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1584
	ctx.r3.s64 = ctx.r11.s64 + 1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C870F4"))) PPC_WEAK_FUNC(sub_83C870F4);
PPC_FUNC_IMPL(__imp__sub_83C870F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C870F8"))) PPC_WEAK_FUNC(sub_83C870F8);
PPC_FUNC_IMPL(__imp__sub_83C870F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87104"))) PPC_WEAK_FUNC(sub_83C87104);
PPC_FUNC_IMPL(__imp__sub_83C87104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87108"))) PPC_WEAK_FUNC(sub_83C87108);
PPC_FUNC_IMPL(__imp__sub_83C87108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24820
	ctx.r7.s64 = ctx.r8.s64 + 24820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24820);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24820, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87130"))) PPC_WEAK_FUNC(sub_83C87130);
PPC_FUNC_IMPL(__imp__sub_83C87130) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// bl 0x83523120
	ctx.lr = 0x83C87148;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1600
	ctx.r3.s64 = ctx.r10.s64 + 1600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87154;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87164"))) PPC_WEAK_FUNC(sub_83C87164);
PPC_FUNC_IMPL(__imp__sub_83C87164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87168"))) PPC_WEAK_FUNC(sub_83C87168);
PPC_FUNC_IMPL(__imp__sub_83C87168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1616
	ctx.r3.s64 = ctx.r11.s64 + 1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87174"))) PPC_WEAK_FUNC(sub_83C87174);
PPC_FUNC_IMPL(__imp__sub_83C87174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87178"))) PPC_WEAK_FUNC(sub_83C87178);
PPC_FUNC_IMPL(__imp__sub_83C87178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87184"))) PPC_WEAK_FUNC(sub_83C87184);
PPC_FUNC_IMPL(__imp__sub_83C87184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87188"))) PPC_WEAK_FUNC(sub_83C87188);
PPC_FUNC_IMPL(__imp__sub_83C87188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87194"))) PPC_WEAK_FUNC(sub_83C87194);
PPC_FUNC_IMPL(__imp__sub_83C87194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87198"))) PPC_WEAK_FUNC(sub_83C87198);
PPC_FUNC_IMPL(__imp__sub_83C87198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871A4"))) PPC_WEAK_FUNC(sub_83C871A4);
PPC_FUNC_IMPL(__imp__sub_83C871A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871A8"))) PPC_WEAK_FUNC(sub_83C871A8);
PPC_FUNC_IMPL(__imp__sub_83C871A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1648
	ctx.r3.s64 = ctx.r11.s64 + 1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871B4"))) PPC_WEAK_FUNC(sub_83C871B4);
PPC_FUNC_IMPL(__imp__sub_83C871B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871B8"))) PPC_WEAK_FUNC(sub_83C871B8);
PPC_FUNC_IMPL(__imp__sub_83C871B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1656
	ctx.r3.s64 = ctx.r11.s64 + 1656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871C4"))) PPC_WEAK_FUNC(sub_83C871C4);
PPC_FUNC_IMPL(__imp__sub_83C871C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871C8"))) PPC_WEAK_FUNC(sub_83C871C8);
PPC_FUNC_IMPL(__imp__sub_83C871C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1664
	ctx.r3.s64 = ctx.r11.s64 + 1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871D4"))) PPC_WEAK_FUNC(sub_83C871D4);
PPC_FUNC_IMPL(__imp__sub_83C871D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871D8"))) PPC_WEAK_FUNC(sub_83C871D8);
PPC_FUNC_IMPL(__imp__sub_83C871D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871E4"))) PPC_WEAK_FUNC(sub_83C871E4);
PPC_FUNC_IMPL(__imp__sub_83C871E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871E8"))) PPC_WEAK_FUNC(sub_83C871E8);
PPC_FUNC_IMPL(__imp__sub_83C871E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1680
	ctx.r3.s64 = ctx.r11.s64 + 1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C871F4"))) PPC_WEAK_FUNC(sub_83C871F4);
PPC_FUNC_IMPL(__imp__sub_83C871F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C871F8"))) PPC_WEAK_FUNC(sub_83C871F8);
PPC_FUNC_IMPL(__imp__sub_83C871F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1688
	ctx.r3.s64 = ctx.r11.s64 + 1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87204"))) PPC_WEAK_FUNC(sub_83C87204);
PPC_FUNC_IMPL(__imp__sub_83C87204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87208"))) PPC_WEAK_FUNC(sub_83C87208);
PPC_FUNC_IMPL(__imp__sub_83C87208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87214"))) PPC_WEAK_FUNC(sub_83C87214);
PPC_FUNC_IMPL(__imp__sub_83C87214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87218"))) PPC_WEAK_FUNC(sub_83C87218);
PPC_FUNC_IMPL(__imp__sub_83C87218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87224"))) PPC_WEAK_FUNC(sub_83C87224);
PPC_FUNC_IMPL(__imp__sub_83C87224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87228"))) PPC_WEAK_FUNC(sub_83C87228);
PPC_FUNC_IMPL(__imp__sub_83C87228) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24832
	ctx.r7.s64 = ctx.r8.s64 + 24832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87250"))) PPC_WEAK_FUNC(sub_83C87250);
PPC_FUNC_IMPL(__imp__sub_83C87250) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24828
	ctx.r3.s64 = ctx.r11.s64 + 24828;
	// bl 0x83523120
	ctx.lr = 0x83C87268;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1712
	ctx.r3.s64 = ctx.r10.s64 + 1712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87274;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87284"))) PPC_WEAK_FUNC(sub_83C87284);
PPC_FUNC_IMPL(__imp__sub_83C87284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87288"))) PPC_WEAK_FUNC(sub_83C87288);
PPC_FUNC_IMPL(__imp__sub_83C87288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87294"))) PPC_WEAK_FUNC(sub_83C87294);
PPC_FUNC_IMPL(__imp__sub_83C87294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87298"))) PPC_WEAK_FUNC(sub_83C87298);
PPC_FUNC_IMPL(__imp__sub_83C87298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1736
	ctx.r3.s64 = ctx.r11.s64 + 1736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872A4"))) PPC_WEAK_FUNC(sub_83C872A4);
PPC_FUNC_IMPL(__imp__sub_83C872A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872A8"))) PPC_WEAK_FUNC(sub_83C872A8);
PPC_FUNC_IMPL(__imp__sub_83C872A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872B4"))) PPC_WEAK_FUNC(sub_83C872B4);
PPC_FUNC_IMPL(__imp__sub_83C872B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872B8"))) PPC_WEAK_FUNC(sub_83C872B8);
PPC_FUNC_IMPL(__imp__sub_83C872B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872C4"))) PPC_WEAK_FUNC(sub_83C872C4);
PPC_FUNC_IMPL(__imp__sub_83C872C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872C8"))) PPC_WEAK_FUNC(sub_83C872C8);
PPC_FUNC_IMPL(__imp__sub_83C872C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1760
	ctx.r3.s64 = ctx.r11.s64 + 1760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872D4"))) PPC_WEAK_FUNC(sub_83C872D4);
PPC_FUNC_IMPL(__imp__sub_83C872D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872D8"))) PPC_WEAK_FUNC(sub_83C872D8);
PPC_FUNC_IMPL(__imp__sub_83C872D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1768
	ctx.r3.s64 = ctx.r11.s64 + 1768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872E4"))) PPC_WEAK_FUNC(sub_83C872E4);
PPC_FUNC_IMPL(__imp__sub_83C872E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872E8"))) PPC_WEAK_FUNC(sub_83C872E8);
PPC_FUNC_IMPL(__imp__sub_83C872E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C872F4"))) PPC_WEAK_FUNC(sub_83C872F4);
PPC_FUNC_IMPL(__imp__sub_83C872F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C872F8"))) PPC_WEAK_FUNC(sub_83C872F8);
PPC_FUNC_IMPL(__imp__sub_83C872F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1784
	ctx.r3.s64 = ctx.r11.s64 + 1784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87304"))) PPC_WEAK_FUNC(sub_83C87304);
PPC_FUNC_IMPL(__imp__sub_83C87304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87308"))) PPC_WEAK_FUNC(sub_83C87308);
PPC_FUNC_IMPL(__imp__sub_83C87308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87314"))) PPC_WEAK_FUNC(sub_83C87314);
PPC_FUNC_IMPL(__imp__sub_83C87314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87318"))) PPC_WEAK_FUNC(sub_83C87318);
PPC_FUNC_IMPL(__imp__sub_83C87318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87324"))) PPC_WEAK_FUNC(sub_83C87324);
PPC_FUNC_IMPL(__imp__sub_83C87324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87328"))) PPC_WEAK_FUNC(sub_83C87328);
PPC_FUNC_IMPL(__imp__sub_83C87328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87334"))) PPC_WEAK_FUNC(sub_83C87334);
PPC_FUNC_IMPL(__imp__sub_83C87334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87338"))) PPC_WEAK_FUNC(sub_83C87338);
PPC_FUNC_IMPL(__imp__sub_83C87338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87344"))) PPC_WEAK_FUNC(sub_83C87344);
PPC_FUNC_IMPL(__imp__sub_83C87344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87348"))) PPC_WEAK_FUNC(sub_83C87348);
PPC_FUNC_IMPL(__imp__sub_83C87348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24844
	ctx.r7.s64 = ctx.r8.s64 + 24844;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24844(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24844);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24844, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87370"))) PPC_WEAK_FUNC(sub_83C87370);
PPC_FUNC_IMPL(__imp__sub_83C87370) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// bl 0x83523120
	ctx.lr = 0x83C87388;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,1824
	ctx.r3.s64 = ctx.r10.s64 + 1824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87394;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C873A4"))) PPC_WEAK_FUNC(sub_83C873A4);
PPC_FUNC_IMPL(__imp__sub_83C873A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873A8"))) PPC_WEAK_FUNC(sub_83C873A8);
PPC_FUNC_IMPL(__imp__sub_83C873A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C873B4"))) PPC_WEAK_FUNC(sub_83C873B4);
PPC_FUNC_IMPL(__imp__sub_83C873B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873B8"))) PPC_WEAK_FUNC(sub_83C873B8);
PPC_FUNC_IMPL(__imp__sub_83C873B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C873C4"))) PPC_WEAK_FUNC(sub_83C873C4);
PPC_FUNC_IMPL(__imp__sub_83C873C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873C8"))) PPC_WEAK_FUNC(sub_83C873C8);
PPC_FUNC_IMPL(__imp__sub_83C873C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C873D4"))) PPC_WEAK_FUNC(sub_83C873D4);
PPC_FUNC_IMPL(__imp__sub_83C873D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873D8"))) PPC_WEAK_FUNC(sub_83C873D8);
PPC_FUNC_IMPL(__imp__sub_83C873D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1864
	ctx.r3.s64 = ctx.r11.s64 + 1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C873E4"))) PPC_WEAK_FUNC(sub_83C873E4);
PPC_FUNC_IMPL(__imp__sub_83C873E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873E8"))) PPC_WEAK_FUNC(sub_83C873E8);
PPC_FUNC_IMPL(__imp__sub_83C873E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1872
	ctx.r3.s64 = ctx.r11.s64 + 1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C873F4"))) PPC_WEAK_FUNC(sub_83C873F4);
PPC_FUNC_IMPL(__imp__sub_83C873F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C873F8"))) PPC_WEAK_FUNC(sub_83C873F8);
PPC_FUNC_IMPL(__imp__sub_83C873F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87404"))) PPC_WEAK_FUNC(sub_83C87404);
PPC_FUNC_IMPL(__imp__sub_83C87404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87408"))) PPC_WEAK_FUNC(sub_83C87408);
PPC_FUNC_IMPL(__imp__sub_83C87408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1888
	ctx.r3.s64 = ctx.r11.s64 + 1888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87414"))) PPC_WEAK_FUNC(sub_83C87414);
PPC_FUNC_IMPL(__imp__sub_83C87414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87418"))) PPC_WEAK_FUNC(sub_83C87418);
PPC_FUNC_IMPL(__imp__sub_83C87418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1896
	ctx.r3.s64 = ctx.r11.s64 + 1896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87424"))) PPC_WEAK_FUNC(sub_83C87424);
PPC_FUNC_IMPL(__imp__sub_83C87424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87428"))) PPC_WEAK_FUNC(sub_83C87428);
PPC_FUNC_IMPL(__imp__sub_83C87428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1904
	ctx.r3.s64 = ctx.r11.s64 + 1904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87434"))) PPC_WEAK_FUNC(sub_83C87434);
PPC_FUNC_IMPL(__imp__sub_83C87434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87438"))) PPC_WEAK_FUNC(sub_83C87438);
PPC_FUNC_IMPL(__imp__sub_83C87438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87444"))) PPC_WEAK_FUNC(sub_83C87444);
PPC_FUNC_IMPL(__imp__sub_83C87444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87448"))) PPC_WEAK_FUNC(sub_83C87448);
PPC_FUNC_IMPL(__imp__sub_83C87448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1920
	ctx.r3.s64 = ctx.r11.s64 + 1920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87454"))) PPC_WEAK_FUNC(sub_83C87454);
PPC_FUNC_IMPL(__imp__sub_83C87454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87458"))) PPC_WEAK_FUNC(sub_83C87458);
PPC_FUNC_IMPL(__imp__sub_83C87458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87464"))) PPC_WEAK_FUNC(sub_83C87464);
PPC_FUNC_IMPL(__imp__sub_83C87464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87468"))) PPC_WEAK_FUNC(sub_83C87468);
PPC_FUNC_IMPL(__imp__sub_83C87468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1936
	ctx.r3.s64 = ctx.r11.s64 + 1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87474"))) PPC_WEAK_FUNC(sub_83C87474);
PPC_FUNC_IMPL(__imp__sub_83C87474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87478"))) PPC_WEAK_FUNC(sub_83C87478);
PPC_FUNC_IMPL(__imp__sub_83C87478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1944
	ctx.r3.s64 = ctx.r11.s64 + 1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87484"))) PPC_WEAK_FUNC(sub_83C87484);
PPC_FUNC_IMPL(__imp__sub_83C87484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87488"))) PPC_WEAK_FUNC(sub_83C87488);
PPC_FUNC_IMPL(__imp__sub_83C87488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87494"))) PPC_WEAK_FUNC(sub_83C87494);
PPC_FUNC_IMPL(__imp__sub_83C87494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87498"))) PPC_WEAK_FUNC(sub_83C87498);
PPC_FUNC_IMPL(__imp__sub_83C87498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874A4"))) PPC_WEAK_FUNC(sub_83C874A4);
PPC_FUNC_IMPL(__imp__sub_83C874A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C874A8"))) PPC_WEAK_FUNC(sub_83C874A8);
PPC_FUNC_IMPL(__imp__sub_83C874A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1968
	ctx.r3.s64 = ctx.r11.s64 + 1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874B4"))) PPC_WEAK_FUNC(sub_83C874B4);
PPC_FUNC_IMPL(__imp__sub_83C874B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C874B8"))) PPC_WEAK_FUNC(sub_83C874B8);
PPC_FUNC_IMPL(__imp__sub_83C874B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1976
	ctx.r3.s64 = ctx.r11.s64 + 1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874C4"))) PPC_WEAK_FUNC(sub_83C874C4);
PPC_FUNC_IMPL(__imp__sub_83C874C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C874C8"))) PPC_WEAK_FUNC(sub_83C874C8);
PPC_FUNC_IMPL(__imp__sub_83C874C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1984
	ctx.r3.s64 = ctx.r11.s64 + 1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874D4"))) PPC_WEAK_FUNC(sub_83C874D4);
PPC_FUNC_IMPL(__imp__sub_83C874D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

