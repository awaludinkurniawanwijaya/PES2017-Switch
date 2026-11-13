#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8386EC30"))) PPC_WEAK_FUNC(sub_8386EC30);
PPC_FUNC_IMPL(__imp__sub_8386EC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14904);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ec6c
	if (!cr6.eq) goto loc_8386EC6C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14904, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14900, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EC6C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EC78"))) PPC_WEAK_FUNC(sub_8386EC78);
PPC_FUNC_IMPL(__imp__sub_8386EC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14912);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ecb4
	if (!cr6.eq) goto loc_8386ECB4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14912, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14908(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14908, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386ECB4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386ECC0"))) PPC_WEAK_FUNC(sub_8386ECC0);
PPC_FUNC_IMPL(__imp__sub_8386ECC0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8386ecf4
	if (cr6.eq) goto loc_8386ECF4;
	// bl 0x82416268
	ctx.lr = 0x8386ECF0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8386ECF4:
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

__attribute__((alias("__imp__sub_8386ED08"))) PPC_WEAK_FUNC(sub_8386ED08);
PPC_FUNC_IMPL(__imp__sub_8386ED08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14920);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ed44
	if (!cr6.eq) goto loc_8386ED44;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14920, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14916, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386ED44:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14916);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386ED50"))) PPC_WEAK_FUNC(sub_8386ED50);
PPC_FUNC_IMPL(__imp__sub_8386ED50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14928);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ed8c
	if (!cr6.eq) goto loc_8386ED8C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14928, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14924, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386ED8C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14924);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386ED98"))) PPC_WEAK_FUNC(sub_8386ED98);
PPC_FUNC_IMPL(__imp__sub_8386ED98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14936);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386edd4
	if (!cr6.eq) goto loc_8386EDD4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14936, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14932, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EDD4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14932);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EDE0"))) PPC_WEAK_FUNC(sub_8386EDE0);
PPC_FUNC_IMPL(__imp__sub_8386EDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14944);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ee1c
	if (!cr6.eq) goto loc_8386EE1C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14944, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14940, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EE1C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14940);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EE28"))) PPC_WEAK_FUNC(sub_8386EE28);
PPC_FUNC_IMPL(__imp__sub_8386EE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14952);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ee64
	if (!cr6.eq) goto loc_8386EE64;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14952, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14948, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EE64:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14948);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EE70"))) PPC_WEAK_FUNC(sub_8386EE70);
PPC_FUNC_IMPL(__imp__sub_8386EE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14960);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eeac
	if (!cr6.eq) goto loc_8386EEAC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14960, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14956(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14956, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EEAC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14956);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EEB8"))) PPC_WEAK_FUNC(sub_8386EEB8);
PPC_FUNC_IMPL(__imp__sub_8386EEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14968);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eef4
	if (!cr6.eq) goto loc_8386EEF4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14968, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14964, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EEF4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14964);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EF00"))) PPC_WEAK_FUNC(sub_8386EF00);
PPC_FUNC_IMPL(__imp__sub_8386EF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14976);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ef3c
	if (!cr6.eq) goto loc_8386EF3C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14976, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14972, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EF3C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14972);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EF48"))) PPC_WEAK_FUNC(sub_8386EF48);
PPC_FUNC_IMPL(__imp__sub_8386EF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14984);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ef84
	if (!cr6.eq) goto loc_8386EF84;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14984, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14980, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EF84:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14980);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EF90"))) PPC_WEAK_FUNC(sub_8386EF90);
PPC_FUNC_IMPL(__imp__sub_8386EF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14992);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386efcc
	if (!cr6.eq) goto loc_8386EFCC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14992, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14988, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EFCC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14988);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EFD8"))) PPC_WEAK_FUNC(sub_8386EFD8);
PPC_FUNC_IMPL(__imp__sub_8386EFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15000);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f014
	if (!cr6.eq) goto loc_8386F014;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15000, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14996, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F014:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14996(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14996);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F020"))) PPC_WEAK_FUNC(sub_8386F020);
PPC_FUNC_IMPL(__imp__sub_8386F020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15008);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f05c
	if (!cr6.eq) goto loc_8386F05C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15008, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15004, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F05C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15004);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F068"))) PPC_WEAK_FUNC(sub_8386F068);
PPC_FUNC_IMPL(__imp__sub_8386F068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15016);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f0a4
	if (!cr6.eq) goto loc_8386F0A4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15016, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15012, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F0A4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15012);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F0B0"))) PPC_WEAK_FUNC(sub_8386F0B0);
PPC_FUNC_IMPL(__imp__sub_8386F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15024);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f0ec
	if (!cr6.eq) goto loc_8386F0EC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15024, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15020, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F0EC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F0F8"))) PPC_WEAK_FUNC(sub_8386F0F8);
PPC_FUNC_IMPL(__imp__sub_8386F0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15032);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f134
	if (!cr6.eq) goto loc_8386F134;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15032, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15028, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F134:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15028);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F140"))) PPC_WEAK_FUNC(sub_8386F140);
PPC_FUNC_IMPL(__imp__sub_8386F140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15040);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f17c
	if (!cr6.eq) goto loc_8386F17C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15040, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15036, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F17C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15036(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15036);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F188"))) PPC_WEAK_FUNC(sub_8386F188);
PPC_FUNC_IMPL(__imp__sub_8386F188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15048);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f1c4
	if (!cr6.eq) goto loc_8386F1C4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15048, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15044, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F1C4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15044);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F1D0"))) PPC_WEAK_FUNC(sub_8386F1D0);
PPC_FUNC_IMPL(__imp__sub_8386F1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15056);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f20c
	if (!cr6.eq) goto loc_8386F20C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15056, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15052, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F20C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15052(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15052);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F218"))) PPC_WEAK_FUNC(sub_8386F218);
PPC_FUNC_IMPL(__imp__sub_8386F218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15064);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f254
	if (!cr6.eq) goto loc_8386F254;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15064, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15060, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F254:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15060);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F260"))) PPC_WEAK_FUNC(sub_8386F260);
PPC_FUNC_IMPL(__imp__sub_8386F260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15072);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f29c
	if (!cr6.eq) goto loc_8386F29C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15072, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15068, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F29C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15068);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F2A8"))) PPC_WEAK_FUNC(sub_8386F2A8);
PPC_FUNC_IMPL(__imp__sub_8386F2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15080);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f2e4
	if (!cr6.eq) goto loc_8386F2E4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15080, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15076, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F2E4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F2F0"))) PPC_WEAK_FUNC(sub_8386F2F0);
PPC_FUNC_IMPL(__imp__sub_8386F2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15088);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f32c
	if (!cr6.eq) goto loc_8386F32C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15088, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15084, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F32C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F338"))) PPC_WEAK_FUNC(sub_8386F338);
PPC_FUNC_IMPL(__imp__sub_8386F338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15096);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f374
	if (!cr6.eq) goto loc_8386F374;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15096, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15092, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F374:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15092);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F380"))) PPC_WEAK_FUNC(sub_8386F380);
PPC_FUNC_IMPL(__imp__sub_8386F380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15104);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f3bc
	if (!cr6.eq) goto loc_8386F3BC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15104, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15100, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F3BC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F3C8"))) PPC_WEAK_FUNC(sub_8386F3C8);
PPC_FUNC_IMPL(__imp__sub_8386F3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15112);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f404
	if (!cr6.eq) goto loc_8386F404;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15112, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15108, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F404:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F410"))) PPC_WEAK_FUNC(sub_8386F410);
PPC_FUNC_IMPL(__imp__sub_8386F410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15120);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f44c
	if (!cr6.eq) goto loc_8386F44C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15120, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15116, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F44C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F458"))) PPC_WEAK_FUNC(sub_8386F458);
PPC_FUNC_IMPL(__imp__sub_8386F458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15128);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f494
	if (!cr6.eq) goto loc_8386F494;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15128, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15124, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F494:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F4A0"))) PPC_WEAK_FUNC(sub_8386F4A0);
PPC_FUNC_IMPL(__imp__sub_8386F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15136);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f4dc
	if (!cr6.eq) goto loc_8386F4DC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15136, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15132, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F4DC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F4E8"))) PPC_WEAK_FUNC(sub_8386F4E8);
PPC_FUNC_IMPL(__imp__sub_8386F4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15144);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f524
	if (!cr6.eq) goto loc_8386F524;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15144, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15140, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F524:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F530"))) PPC_WEAK_FUNC(sub_8386F530);
PPC_FUNC_IMPL(__imp__sub_8386F530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15152);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f56c
	if (!cr6.eq) goto loc_8386F56C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15152, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15148, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F56C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F578"))) PPC_WEAK_FUNC(sub_8386F578);
PPC_FUNC_IMPL(__imp__sub_8386F578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15160);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f5b4
	if (!cr6.eq) goto loc_8386F5B4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15160, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15156, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F5B4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F5C0"))) PPC_WEAK_FUNC(sub_8386F5C0);
PPC_FUNC_IMPL(__imp__sub_8386F5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f5fc
	if (!cr6.eq) goto loc_8386F5FC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15168, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15164, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F5FC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F608"))) PPC_WEAK_FUNC(sub_8386F608);
PPC_FUNC_IMPL(__imp__sub_8386F608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f644
	if (!cr6.eq) goto loc_8386F644;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15176, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15172, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F644:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F650"))) PPC_WEAK_FUNC(sub_8386F650);
PPC_FUNC_IMPL(__imp__sub_8386F650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f68c
	if (!cr6.eq) goto loc_8386F68C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15184, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15180, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F68C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F698"))) PPC_WEAK_FUNC(sub_8386F698);
PPC_FUNC_IMPL(__imp__sub_8386F698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15192);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f6d4
	if (!cr6.eq) goto loc_8386F6D4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15192, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15188, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F6D4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F6E0"))) PPC_WEAK_FUNC(sub_8386F6E0);
PPC_FUNC_IMPL(__imp__sub_8386F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f71c
	if (!cr6.eq) goto loc_8386F71C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15200, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15196, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F71C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F728"))) PPC_WEAK_FUNC(sub_8386F728);
PPC_FUNC_IMPL(__imp__sub_8386F728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15208);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f764
	if (!cr6.eq) goto loc_8386F764;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15208, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15204, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F764:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F770"))) PPC_WEAK_FUNC(sub_8386F770);
PPC_FUNC_IMPL(__imp__sub_8386F770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15216);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f7ac
	if (!cr6.eq) goto loc_8386F7AC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15216, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15212, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F7AC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F7B8"))) PPC_WEAK_FUNC(sub_8386F7B8);
PPC_FUNC_IMPL(__imp__sub_8386F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15224);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f7f4
	if (!cr6.eq) goto loc_8386F7F4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15224, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15220, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F7F4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F800"))) PPC_WEAK_FUNC(sub_8386F800);
PPC_FUNC_IMPL(__imp__sub_8386F800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f83c
	if (!cr6.eq) goto loc_8386F83C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15232, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15228, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F83C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F848"))) PPC_WEAK_FUNC(sub_8386F848);
PPC_FUNC_IMPL(__imp__sub_8386F848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f884
	if (!cr6.eq) goto loc_8386F884;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15240, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15236, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F884:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F890"))) PPC_WEAK_FUNC(sub_8386F890);
PPC_FUNC_IMPL(__imp__sub_8386F890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15248);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f8cc
	if (!cr6.eq) goto loc_8386F8CC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15248, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15244, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F8CC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15244(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F8D8"))) PPC_WEAK_FUNC(sub_8386F8D8);
PPC_FUNC_IMPL(__imp__sub_8386F8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f914
	if (!cr6.eq) goto loc_8386F914;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15256, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15252, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F914:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F920"))) PPC_WEAK_FUNC(sub_8386F920);
PPC_FUNC_IMPL(__imp__sub_8386F920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15264);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f95c
	if (!cr6.eq) goto loc_8386F95C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15264, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15260, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F95C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F968"))) PPC_WEAK_FUNC(sub_8386F968);
PPC_FUNC_IMPL(__imp__sub_8386F968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15272);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f9a4
	if (!cr6.eq) goto loc_8386F9A4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15272, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15268, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F9A4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F9B0"))) PPC_WEAK_FUNC(sub_8386F9B0);
PPC_FUNC_IMPL(__imp__sub_8386F9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15280);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386f9ec
	if (!cr6.eq) goto loc_8386F9EC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15280, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15276, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386F9EC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386F9F8"))) PPC_WEAK_FUNC(sub_8386F9F8);
PPC_FUNC_IMPL(__imp__sub_8386F9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15288);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386fa34
	if (!cr6.eq) goto loc_8386FA34;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15288, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15284, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386FA34:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386FA40"))) PPC_WEAK_FUNC(sub_8386FA40);
PPC_FUNC_IMPL(__imp__sub_8386FA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15296);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386fa7c
	if (!cr6.eq) goto loc_8386FA7C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15296, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15292, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386FA7C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386FA88"))) PPC_WEAK_FUNC(sub_8386FA88);
PPC_FUNC_IMPL(__imp__sub_8386FA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15304);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386fac4
	if (!cr6.eq) goto loc_8386FAC4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15304, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15300, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386FAC4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15300);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386FAD0"))) PPC_WEAK_FUNC(sub_8386FAD0);
PPC_FUNC_IMPL(__imp__sub_8386FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r7,r10,-292
	ctx.r7.s64 = ctx.r10.s64 + -292;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r5,r8,-284
	ctx.r5.s64 = ctx.r8.s64 + -284;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addi r10,r6,-276
	ctx.r10.s64 = ctx.r6.s64 + -276;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// addi r8,r4,-268
	ctx.r8.s64 = ctx.r4.s64 + -268;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// addi r6,r9,-260
	ctx.r6.s64 = ctx.r9.s64 + -260;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// addi r4,r7,-252
	ctx.r4.s64 = ctx.r7.s64 + -252;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r8,r5,-244
	ctx.r8.s64 = ctx.r5.s64 + -244;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// addi r6,r9,-236
	ctx.r6.s64 = ctx.r9.s64 + -236;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// std r11,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// addi r4,r7,-228
	ctx.r4.s64 = ctx.r7.s64 + -228;
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// addi r8,r5,-220
	ctx.r8.s64 = ctx.r5.s64 + -220;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r7,r9,-212
	ctx.r7.s64 = ctx.r9.s64 + -212;
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// stw r8,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r8.u32);
	// addi r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 + 152;
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r7,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r7.u32);
	// addi r10,r6,-204
	ctx.r10.s64 = ctx.r6.s64 + -204;
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r5,-196
	ctx.r8.s64 = ctx.r5.s64 + -196;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lfd f0,9000(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 9000);
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// addi r6,r9,-188
	ctx.r6.s64 = ctx.r9.s64 + -188;
	// stfd f0,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.f0.u64);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// addi r4,r7,-180
	ctx.r4.s64 = ctx.r7.s64 + -180;
	// stfd f0,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.f0.u64);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r4,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// addi r9,r5,-172
	ctx.r9.s64 = ctx.r5.s64 + -172;
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// std r11,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r11.u64);
	// addi r7,r10,-164
	ctx.r7.s64 = ctx.r10.s64 + -164;
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// addi r5,r8,-156
	ctx.r5.s64 = ctx.r8.s64 + -156;
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r7,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r7.u32);
	// addi r9,r6,-148
	ctx.r9.s64 = ctx.r6.s64 + -148;
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// std r11,312(r3)
	PPC_STORE_U64(ctx.r3.u32 + 312, ctx.r11.u64);
	// addi r7,r4,-140
	ctx.r7.s64 = ctx.r4.s64 + -140;
	// stw r5,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r5.u32);
	// stfd f0,336(r3)
	PPC_STORE_U64(ctx.r3.u32 + 336, ctx.f0.u64);
	// stb r11,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r11.u8);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r9,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r9.u32);
	// addi r5,r8,-132
	ctx.r5.s64 = ctx.r8.s64 + -132;
	// stb r11,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// std r11,360(r3)
	PPC_STORE_U64(ctx.r3.u32 + 360, ctx.r11.u64);
	// addi r10,r3,164
	ctx.r10.s64 = ctx.r3.s64 + 164;
	// stw r7,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r7.u32);
	// stfd f0,384(r3)
	PPC_STORE_U64(ctx.r3.u32 + 384, ctx.f0.u64);
	// stb r11,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r11.u8);
	// addi r9,r6,-124
	ctx.r9.s64 = ctx.r6.s64 + -124;
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// stw r5,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r5.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stb r11,400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 400, ctx.r11.u8);
	// addi r10,r3,188
	ctx.r10.s64 = ctx.r3.s64 + 188;
	// std r11,408(r3)
	PPC_STORE_U64(ctx.r3.u32 + 408, ctx.r11.u64);
	// addi r7,r4,-116
	ctx.r7.s64 = ctx.r4.s64 + -116;
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// addi r10,r3,200
	ctx.r10.s64 = ctx.r3.s64 + 200;
	// stfd f0,432(r3)
	PPC_STORE_U64(ctx.r3.u32 + 432, ctx.f0.u64);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// stw r7,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r7.u32);
	// addi r6,r8,-108
	ctx.r6.s64 = ctx.r8.s64 + -108;
	// stb r11,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r11.u8);
	// addi r10,r3,248
	ctx.r10.s64 = ctx.r3.s64 + 248;
	// std r11,456(r3)
	PPC_STORE_U64(ctx.r3.u32 + 456, ctx.r11.u64);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
	// stfd f0,480(r3)
	PPC_STORE_U64(ctx.r3.u32 + 480, ctx.f0.u64);
	// addi r10,r5,-100
	ctx.r10.s64 = ctx.r5.s64 + -100;
	// stb r11,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r11.u8);
	// addi r9,r3,296
	ctx.r9.s64 = ctx.r3.s64 + 296;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r10,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r10.u32);
	// addi r8,r3,320
	ctx.r8.s64 = ctx.r3.s64 + 320;
	// stb r11,496(r3)
	PPC_STORE_U8(ctx.r3.u32 + 496, ctx.r11.u8);
	// addi r8,r4,-92
	ctx.r8.s64 = ctx.r4.s64 + -92;
	// std r11,504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 504, ctx.r11.u64);
	// addi r6,r9,-84
	ctx.r6.s64 = ctx.r9.s64 + -84;
	// stw r8,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r8.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stfd f0,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.f0.u64);
	// stb r11,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, ctx.r11.u8);
	// stw r6,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r6.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// addi r4,r7,-76
	ctx.r4.s64 = ctx.r7.s64 + -76;
	// stb r11,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r11.u8);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// std r11,552(r3)
	PPC_STORE_U64(ctx.r3.u32 + 552, ctx.r11.u64);
	// addi r8,r5,-68
	ctx.r8.s64 = ctx.r5.s64 + -68;
	// stw r4,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r4.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 568, ctx.r11.u8);
	// stfd f0,576(r3)
	PPC_STORE_U64(ctx.r3.u32 + 576, ctx.f0.u64);
	// addi r6,r9,-60
	ctx.r6.s64 = ctx.r9.s64 + -60;
	// stw r8,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r8.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stb r11,592(r3)
	PPC_STORE_U8(ctx.r3.u32 + 592, ctx.r11.u8);
	// std r11,600(r3)
	PPC_STORE_U64(ctx.r3.u32 + 600, ctx.r11.u64);
	// addi r4,r7,-52
	ctx.r4.s64 = ctx.r7.s64 + -52;
	// stw r6,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r6.u32);
	// stfd f0,624(r3)
	PPC_STORE_U64(ctx.r3.u32 + 624, ctx.f0.u64);
	// stb r11,616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 616, ctx.r11.u8);
	// addi r9,r5,-44
	ctx.r9.s64 = ctx.r5.s64 + -44;
	// addi r10,r3,344
	ctx.r10.s64 = ctx.r3.s64 + 344;
	// stw r4,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r4.u32);
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// stb r11,640(r3)
	PPC_STORE_U8(ctx.r3.u32 + 640, ctx.r11.u8);
	// std r11,648(r3)
	PPC_STORE_U64(ctx.r3.u32 + 648, ctx.r11.u64);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// stw r9,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r9.u32);
	// addi r10,r3,416
	ctx.r10.s64 = ctx.r3.s64 + 416;
	// stb r11,664(r3)
	PPC_STORE_U8(ctx.r3.u32 + 664, ctx.r11.u8);
	// addi r10,r3,440
	ctx.r10.s64 = ctx.r3.s64 + 440;
	// addi r10,r3,464
	ctx.r10.s64 = ctx.r3.s64 + 464;
	// stfd f0,672(r3)
	PPC_STORE_U64(ctx.r3.u32 + 672, ctx.f0.u64);
	// addi r11,r3,584
	ctx.r11.s64 = ctx.r3.s64 + 584;
	// addi r10,r3,488
	ctx.r10.s64 = ctx.r3.s64 + 488;
	// addi r11,r3,608
	ctx.r11.s64 = ctx.r3.s64 + 608;
	// addi r10,r3,512
	ctx.r10.s64 = ctx.r3.s64 + 512;
	// addi r11,r3,632
	ctx.r11.s64 = ctx.r3.s64 + 632;
	// addi r9,r3,536
	ctx.r9.s64 = ctx.r3.s64 + 536;
	// addi r10,r3,560
	ctx.r10.s64 = ctx.r3.s64 + 560;
	// addi r11,r3,656
	ctx.r11.s64 = ctx.r3.s64 + 656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386FDEC"))) PPC_WEAK_FUNC(sub_8386FDEC);
PPC_FUNC_IMPL(__imp__sub_8386FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386FDF0"))) PPC_WEAK_FUNC(sub_8386FDF0);
PPC_FUNC_IMPL(__imp__sub_8386FDF0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r9.u32);
	// stw r9,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r9.u32);
	// stw r9,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r9.u32);
	// stw r9,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r9.u32);
	// stw r9,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r9.u32);
	// stw r9,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r9.u32);
	// stw r9,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r9.u32);
	// stw r9,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r9.u32);
	// stw r9,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r9.u32);
	// stw r9,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r9.u32);
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// stw r9,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r9.u32);
	// stw r9,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r9.u32);
	// stw r9,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r9.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
	// stw r9,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r9.u32);
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// stw r9,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r9.u32);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8386fea4
	if (cr6.eq) goto loc_8386FEA4;
	// bl 0x82416268
	ctx.lr = 0x8386FEA0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8386FEA4:
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

__attribute__((alias("__imp__sub_8386FEB8"))) PPC_WEAK_FUNC(sub_8386FEB8);
PPC_FUNC_IMPL(__imp__sub_8386FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15312);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386fef4
	if (!cr6.eq) goto loc_8386FEF4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15312, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15308, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386FEF4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386FF00"))) PPC_WEAK_FUNC(sub_8386FF00);
PPC_FUNC_IMPL(__imp__sub_8386FF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r7,r10,-580
	ctx.r7.s64 = ctx.r10.s64 + -580;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r5,r8,-572
	ctx.r5.s64 = ctx.r8.s64 + -572;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r6,-564
	ctx.r10.s64 = ctx.r6.s64 + -564;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r8,r4,-556
	ctx.r8.s64 = ctx.r4.s64 + -556;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// addi r6,r9,-548
	ctx.r6.s64 = ctx.r9.s64 + -548;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// addi r9,r7,-540
	ctx.r9.s64 = ctx.r7.s64 + -540;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// addi r7,r5,-532
	ctx.r7.s64 = ctx.r5.s64 + -532;
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lfd f0,9000(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 9000);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// addi r5,r8,-524
	ctx.r5.s64 = ctx.r8.s64 + -524;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stfd f0,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.f0.u64);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// addi r9,r6,-516
	ctx.r9.s64 = ctx.r6.s64 + -516;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stfd f0,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.f0.u64);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// addi r7,r4,-508
	ctx.r7.s64 = ctx.r4.s64 + -508;
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stfd f0,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.f0.u64);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// addi r6,r8,-500
	ctx.r6.s64 = ctx.r8.s64 + -500;
	// stfd f0,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.f0.u64);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// addi r10,r5,-492
	ctx.r10.s64 = ctx.r5.s64 + -492;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// addi r8,r3,136
	ctx.r8.s64 = ctx.r3.s64 + 136;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// addi r8,r4,-484
	ctx.r8.s64 = ctx.r4.s64 + -484;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// addi r6,r9,-476
	ctx.r6.s64 = ctx.r9.s64 + -476;
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// stb r11,212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 212, ctx.r11.u8);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// addi r4,r7,-468
	ctx.r4.s64 = ctx.r7.s64 + -468;
	// stw r6,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r6.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// addi r9,r5,-460
	ctx.r9.s64 = ctx.r5.s64 + -460;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r4,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r4.u32);
	// addi r7,r10,-452
	ctx.r7.s64 = ctx.r10.s64 + -452;
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r11.u8);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// addi r5,r8,-444
	ctx.r5.s64 = ctx.r8.s64 + -444;
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// addi r9,r6,-436
	ctx.r9.s64 = ctx.r6.s64 + -436;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r7,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r7.u32);
	// addi r7,r4,-428
	ctx.r7.s64 = ctx.r4.s64 + -428;
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// addi r5,r8,-420
	ctx.r5.s64 = ctx.r8.s64 + -420;
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
	// stw r9,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r9.u32);
	// addi r9,r6,-412
	ctx.r9.s64 = ctx.r6.s64 + -412;
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// addi r10,r3,196
	ctx.r10.s64 = ctx.r3.s64 + 196;
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r7,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r7.u32);
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// stb r11,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// addi r7,r4,-404
	ctx.r7.s64 = ctx.r4.s64 + -404;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// addi r10,r3,220
	ctx.r10.s64 = ctx.r3.s64 + 220;
	// stw r5,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r5.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// addi r6,r8,-396
	ctx.r6.s64 = ctx.r8.s64 + -396;
	// stw r9,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r9.u32);
	// addi r10,r3,244
	ctx.r10.s64 = ctx.r3.s64 + 244;
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// stw r7,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// addi r10,r5,-388
	ctx.r10.s64 = ctx.r5.s64 + -388;
	// stb r11,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r11.u8);
	// addi r9,r3,268
	ctx.r9.s64 = ctx.r3.s64 + 268;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r6,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r6.u32);
	// stfd f0,360(r3)
	PPC_STORE_U64(ctx.r3.u32 + 360, ctx.f0.u64);
	// stb r11,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r11.u8);
	// addi r8,r4,-380
	ctx.r8.s64 = ctx.r4.s64 + -380;
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// stfd f0,384(r3)
	PPC_STORE_U64(ctx.r3.u32 + 384, ctx.f0.u64);
	// stb r11,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r11.u8);
	// addi r6,r9,-372
	ctx.r6.s64 = ctx.r9.s64 + -372;
	// stw r8,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r8.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stfd f0,408(r3)
	PPC_STORE_U64(ctx.r3.u32 + 408, ctx.f0.u64);
	// stb r11,400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 400, ctx.r11.u8);
	// stw r6,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r6.u32);
	// stfd f0,432(r3)
	PPC_STORE_U64(ctx.r3.u32 + 432, ctx.f0.u64);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// addi r4,r7,-364
	ctx.r4.s64 = ctx.r7.s64 + -364;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// addi r8,r5,-356
	ctx.r8.s64 = ctx.r5.s64 + -356;
	// stw r4,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r4.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// addi r6,r9,-348
	ctx.r6.s64 = ctx.r9.s64 + -348;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r8,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r8.u32);
	// addi r4,r7,-340
	ctx.r4.s64 = ctx.r7.s64 + -340;
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// addi r8,r5,-332
	ctx.r8.s64 = ctx.r5.s64 + -332;
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stb r11,468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 468, ctx.r11.u8);
	// addi r6,r9,-324
	ctx.r6.s64 = ctx.r9.s64 + -324;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r4,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r4.u32);
	// stfd f0,496(r3)
	PPC_STORE_U64(ctx.r3.u32 + 496, ctx.f0.u64);
	// stb r11,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r11.u8);
	// addi r4,r7,-316
	ctx.r4.s64 = ctx.r7.s64 + -316;
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
	// stfd f0,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.f0.u64);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r6,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r6.u32);
	// addi r8,r5,-308
	ctx.r8.s64 = ctx.r5.s64 + -308;
	// stb r11,532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 532, ctx.r11.u8);
	// addi r7,r9,-300
	ctx.r7.s64 = ctx.r9.s64 + -300;
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// addi r10,r3,280
	ctx.r10.s64 = ctx.r3.s64 + 280;
	// stw r4,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r4.u32);
	// addi r10,r3,292
	ctx.r10.s64 = ctx.r3.s64 + 292;
	// stb r11,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r11.u8);
	// addi r10,r3,304
	ctx.r10.s64 = ctx.r3.s64 + 304;
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// addi r10,r3,316
	ctx.r10.s64 = ctx.r3.s64 + 316;
	// stw r8,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r8.u32);
	// addi r10,r3,328
	ctx.r10.s64 = ctx.r3.s64 + 328;
	// stb r11,556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 556, ctx.r11.u8);
	// addi r10,r3,344
	ctx.r10.s64 = ctx.r3.s64 + 344;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// stw r7,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r7.u32);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// stb r11,568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 568, ctx.r11.u8);
	// addi r10,r3,452
	ctx.r10.s64 = ctx.r3.s64 + 452;
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// addi r11,r3,480
	ctx.r11.s64 = ctx.r3.s64 + 480;
	// addi r11,r3,504
	ctx.r11.s64 = ctx.r3.s64 + 504;
	// addi r11,r3,528
	ctx.r11.s64 = ctx.r3.s64 + 528;
	// addi r11,r3,540
	ctx.r11.s64 = ctx.r3.s64 + 540;
	// addi r11,r3,552
	ctx.r11.s64 = ctx.r3.s64 + 552;
	// addi r9,r3,416
	ctx.r9.s64 = ctx.r3.s64 + 416;
	// addi r8,r3,440
	ctx.r8.s64 = ctx.r3.s64 + 440;
	// addi r10,r3,464
	ctx.r10.s64 = ctx.r3.s64 + 464;
	// addi r11,r3,564
	ctx.r11.s64 = ctx.r3.s64 + 564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8387027C"))) PPC_WEAK_FUNC(sub_8387027C);
PPC_FUNC_IMPL(__imp__sub_8387027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83870280"))) PPC_WEAK_FUNC(sub_83870280);
PPC_FUNC_IMPL(__imp__sub_83870280) {
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
	// bl 0x8386e6c8
	ctx.lr = 0x838702A0;
	sub_8386E6C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838702b8
	if (cr6.eq) goto loc_838702B8;
	// bl 0x82416268
	ctx.lr = 0x838702B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838702B8:
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

__attribute__((alias("__imp__sub_838702D0"))) PPC_WEAK_FUNC(sub_838702D0);
PPC_FUNC_IMPL(__imp__sub_838702D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,15320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15320);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8387030c
	if (!cr6.eq) goto loc_8387030C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,15320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15320, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,15316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15316, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8387030C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,15316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83870318"))) PPC_WEAK_FUNC(sub_83870318);
PPC_FUNC_IMPL(__imp__sub_83870318) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83870360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870378
	if (cr6.eq) goto loc_83870378;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x83870378;
	sub_8259B510(ctx, base);
loc_83870378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83870390"))) PPC_WEAK_FUNC(sub_83870390);
PPC_FUNC_IMPL(__imp__sub_83870390) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8386fad0
	ctx.lr = 0x838703B4;
	sub_8386FAD0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838703c8
	if (cr6.eq) goto loc_838703C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x838703C8;
	sub_83870318(ctx, base);
loc_838703C8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838703dc
	if (!cr6.eq) goto loc_838703DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838708c4
	goto loc_838708C4;
loc_838703DC:
	// lbz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838703f4
	if (!cr6.eq) goto loc_838703F4;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838703F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8387040c
	if (cr6.eq) goto loc_8387040C;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_8387040C:
	// lbz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870424
	if (!cr6.eq) goto loc_83870424;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x83870430
	if (cr6.eq) goto loc_83870430;
loc_83870424:
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_83870430:
	// lbz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870448
	if (!cr6.eq) goto loc_83870448;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870454
	if (cr6.eq) goto loc_83870454;
loc_83870448:
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
loc_83870454:
	// lbz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387046c
	if (!cr6.eq) goto loc_8387046C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870478
	if (cr6.eq) goto loc_83870478;
loc_8387046C:
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
loc_83870478:
	// lbz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// ld r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870490
	if (!cr6.eq) goto loc_83870490;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387049c
	if (cr6.eq) goto loc_8387049C;
loc_83870490:
	// std r9,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
loc_8387049C:
	// lbz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838704b4
	if (!cr6.eq) goto loc_838704B4;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x838704c0
	if (cr6.eq) goto loc_838704C0;
loc_838704B4:
	// std r9,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
loc_838704C0:
	// lbz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838704d8
	if (!cr6.eq) goto loc_838704D8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x838704e4
	if (cr6.eq) goto loc_838704E4;
loc_838704D8:
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
loc_838704E4:
	// lbz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838704fc
	if (!cr6.eq) goto loc_838704FC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870508
	if (cr6.eq) goto loc_83870508;
loc_838704FC:
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
loc_83870508:
	// lbz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870520
	if (!cr6.eq) goto loc_83870520;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8387052c
	if (cr6.eq) goto loc_8387052C;
loc_83870520:
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
loc_8387052C:
	// lbz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 264);
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870544
	if (!cr6.eq) goto loc_83870544;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870550
	if (cr6.eq) goto loc_83870550;
loc_83870544:
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
loc_83870550:
	// lbz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 276);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870568
	if (!cr6.eq) goto loc_83870568;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870574
	if (cr6.eq) goto loc_83870574;
loc_83870568:
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r10.u8);
loc_83870574:
	// lbz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387058c
	if (!cr6.eq) goto loc_8387058C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870598
	if (cr6.eq) goto loc_83870598;
loc_8387058C:
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
loc_83870598:
	// lbz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838705ac
	if (cr6.eq) goto loc_838705AC;
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// b 0x838705b0
	goto loc_838705B0;
loc_838705AC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838705B0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838705c4
	if (cr6.eq) goto loc_838705C4;
	// stfd f0,136(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
loc_838705C4:
	// lbz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 328);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838705d8
	if (cr6.eq) goto loc_838705D8;
	// lfd f0,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// b 0x838705dc
	goto loc_838705DC;
loc_838705D8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838705DC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838705f0
	if (cr6.eq) goto loc_838705F0;
	// stfd f0,152(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
loc_838705F0:
	// lbz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// ld r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870608
	if (!cr6.eq) goto loc_83870608;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x83870614
	if (cr6.eq) goto loc_83870614;
loc_83870608:
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
loc_83870614:
	// lbz r8,376(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 376);
	// ld r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387062c
	if (!cr6.eq) goto loc_8387062C;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x83870638
	if (cr6.eq) goto loc_83870638;
loc_8387062C:
	// std r9,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
loc_83870638:
	// lbz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 400);
	// ld r9,408(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870650
	if (!cr6.eq) goto loc_83870650;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387065c
	if (cr6.eq) goto loc_8387065C;
loc_83870650:
	// std r9,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r10.u8);
loc_8387065C:
	// lbz r9,424(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 424);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870670
	if (cr6.eq) goto loc_83870670;
	// lfd f0,432(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// b 0x83870674
	goto loc_83870674;
loc_83870670:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870674:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870688
	if (cr6.eq) goto loc_83870688;
	// stfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
loc_83870688:
	// lbz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 448);
	// ld r9,456(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838706a0
	if (!cr6.eq) goto loc_838706A0;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x838706ac
	if (cr6.eq) goto loc_838706AC;
loc_838706A0:
	// std r9,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_838706AC:
	// lbz r9,472(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 472);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838706c0
	if (cr6.eq) goto loc_838706C0;
	// lfd f0,480(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// b 0x838706c4
	goto loc_838706C4;
loc_838706C0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838706C4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838706d8
	if (cr6.eq) goto loc_838706D8;
	// stfd f0,248(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r10.u8);
loc_838706D8:
	// lbz r8,496(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 496);
	// ld r9,504(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838706f0
	if (!cr6.eq) goto loc_838706F0;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x838706fc
	if (cr6.eq) goto loc_838706FC;
loc_838706F0:
	// std r9,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r10.u8);
loc_838706FC:
	// lbz r9,520(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 520);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870710
	if (cr6.eq) goto loc_83870710;
	// lfd f0,528(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// b 0x83870714
	goto loc_83870714;
loc_83870710:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870714:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870728
	if (cr6.eq) goto loc_83870728;
	// stfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
loc_83870728:
	// lbz r8,544(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 544);
	// ld r9,552(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870740
	if (!cr6.eq) goto loc_83870740;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387074c
	if (cr6.eq) goto loc_8387074C;
loc_83870740:
	// std r9,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r10.u8);
loc_8387074C:
	// lbz r9,568(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 568);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870760
	if (cr6.eq) goto loc_83870760;
	// lfd f0,576(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 576);
	// b 0x83870764
	goto loc_83870764;
loc_83870760:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870764:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870778
	if (cr6.eq) goto loc_83870778;
	// stfd f0,312(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
loc_83870778:
	// lbz r8,592(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 592);
	// ld r9,600(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870790
	if (!cr6.eq) goto loc_83870790;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387079c
	if (cr6.eq) goto loc_8387079C;
loc_83870790:
	// std r9,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r10.u8);
loc_8387079C:
	// lbz r9,616(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 616);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838707b0
	if (cr6.eq) goto loc_838707B0;
	// lfd f0,624(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// b 0x838707b4
	goto loc_838707B4;
loc_838707B0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838707B4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838707c8
	if (cr6.eq) goto loc_838707C8;
	// stfd f0,344(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r10.u8);
loc_838707C8:
	// lbz r8,640(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 640);
	// ld r9,648(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838707e0
	if (!cr6.eq) goto loc_838707E0;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x838707ec
	if (cr6.eq) goto loc_838707EC;
loc_838707E0:
	// std r9,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r10.u8);
loc_838707EC:
	// lbz r9,664(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 664);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870800
	if (cr6.eq) goto loc_83870800;
	// lfd f0,672(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// b 0x83870804
	goto loc_83870804;
loc_83870800:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870804:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870818
	if (cr6.eq) goto loc_83870818;
	// stfd f0,376(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r10.u8);
loc_83870818:
	// lbz r8,688(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 688);
	// ld r9,696(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870830
	if (!cr6.eq) goto loc_83870830;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387083c
	if (cr6.eq) goto loc_8387083C;
loc_83870830:
	// std r9,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r10.u8);
loc_8387083C:
	// lbz r9,712(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 712);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870850
	if (cr6.eq) goto loc_83870850;
	// lfd f0,720(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 720);
	// b 0x83870854
	goto loc_83870854;
loc_83870850:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870854:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870868
	if (cr6.eq) goto loc_83870868;
	// stfd f0,408(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
loc_83870868:
	// lbz r8,736(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 736);
	// ld r9,744(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870880
	if (!cr6.eq) goto loc_83870880;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x8387088c
	if (cr6.eq) goto loc_8387088C;
loc_83870880:
	// std r9,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 416, ctx.r10.u8);
loc_8387088C:
	// lbz r9,760(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 760);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838708a0
	if (cr6.eq) goto loc_838708A0;
	// lfd f0,768(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 768);
	// b 0x838708a4
	goto loc_838708A4;
loc_838708A0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838708A4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838708b8
	if (cr6.eq) goto loc_838708B8;
	// stfd f0,440(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r10.u8);
loc_838708B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_838708C4:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
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

__attribute__((alias("__imp__sub_838708DC"))) PPC_WEAK_FUNC(sub_838708DC);
PPC_FUNC_IMPL(__imp__sub_838708DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838708E0"))) PPC_WEAK_FUNC(sub_838708E0);
PPC_FUNC_IMPL(__imp__sub_838708E0) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-276
	ctx.r9.s64 = ctx.r10.s64 + -276;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83870920
	if (!cr6.eq) goto loc_83870920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83870928
	goto loc_83870928;
loc_83870920:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83870928;
	sub_83870318(ctx, base);
loc_83870928:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387094c
	if (!cr6.eq) goto loc_8387094C;
loc_83870934:
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
loc_8387094C:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83870964
	if (!cr6.eq) goto loc_83870964;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83870934
	goto loc_83870934;
loc_83870964:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83870988"))) PPC_WEAK_FUNC(sub_83870988);
PPC_FUNC_IMPL(__imp__sub_83870988) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-244
	ctx.r9.s64 = ctx.r10.s64 + -244;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x838709c8
	if (!cr6.eq) goto loc_838709C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x838709d0
	goto loc_838709D0;
loc_838709C8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x838709D0;
	sub_83870318(ctx, base);
loc_838709D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838709f4
	if (!cr6.eq) goto loc_838709F4;
loc_838709DC:
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
loc_838709F4:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83870a0c
	if (!cr6.eq) goto loc_83870A0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x838709dc
	goto loc_838709DC;
loc_83870A0C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83870A30"))) PPC_WEAK_FUNC(sub_83870A30);
PPC_FUNC_IMPL(__imp__sub_83870A30) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-212
	ctx.r9.s64 = ctx.r10.s64 + -212;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83870a70
	if (!cr6.eq) goto loc_83870A70;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83870a78
	goto loc_83870A78;
loc_83870A70:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83870A78;
	sub_83870318(ctx, base);
loc_83870A78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870a9c
	if (!cr6.eq) goto loc_83870A9C;
loc_83870A84:
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
loc_83870A9C:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83870ab4
	if (!cr6.eq) goto loc_83870AB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83870a84
	goto loc_83870A84;
loc_83870AB4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83870AD8"))) PPC_WEAK_FUNC(sub_83870AD8);
PPC_FUNC_IMPL(__imp__sub_83870AD8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-204
	ctx.r9.s64 = ctx.r10.s64 + -204;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83870b18
	if (!cr6.eq) goto loc_83870B18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83870b20
	goto loc_83870B20;
loc_83870B18:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83870B20;
	sub_83870318(ctx, base);
loc_83870B20:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870b44
	if (!cr6.eq) goto loc_83870B44;
loc_83870B2C:
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
loc_83870B44:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83870b5c
	if (!cr6.eq) goto loc_83870B5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83870b2c
	goto loc_83870B2C;
loc_83870B5C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83870B80"))) PPC_WEAK_FUNC(sub_83870B80);
PPC_FUNC_IMPL(__imp__sub_83870B80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-196
	ctx.r8.s64 = ctx.r10.s64 + -196;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83870bc8
	if (!cr6.eq) goto loc_83870BC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83870bd0
	goto loc_83870BD0;
loc_83870BC8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83870BD0;
	sub_83870318(ctx, base);
loc_83870BD0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870bf4
	if (!cr6.eq) goto loc_83870BF4;
loc_83870BDC:
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
loc_83870BF4:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870c08
	if (cr6.eq) goto loc_83870C08;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83870c0c
	goto loc_83870C0C;
loc_83870C08:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870C0C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870bdc
	if (cr6.eq) goto loc_83870BDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83870C38"))) PPC_WEAK_FUNC(sub_83870C38);
PPC_FUNC_IMPL(__imp__sub_83870C38) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-188
	ctx.r8.s64 = ctx.r10.s64 + -188;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83870c80
	if (!cr6.eq) goto loc_83870C80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83870c88
	goto loc_83870C88;
loc_83870C80:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83870C88;
	sub_83870318(ctx, base);
loc_83870C88:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870cac
	if (!cr6.eq) goto loc_83870CAC;
loc_83870C94:
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
loc_83870CAC:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870cc0
	if (cr6.eq) goto loc_83870CC0;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83870cc4
	goto loc_83870CC4;
loc_83870CC0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870CC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870c94
	if (cr6.eq) goto loc_83870C94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83870CF0"))) PPC_WEAK_FUNC(sub_83870CF0);
PPC_FUNC_IMPL(__imp__sub_83870CF0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-60
	ctx.r8.s64 = ctx.r10.s64 + -60;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83870d38
	if (!cr6.eq) goto loc_83870D38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83870d40
	goto loc_83870D40;
loc_83870D38:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83870D40;
	sub_83870318(ctx, base);
loc_83870D40:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870d64
	if (!cr6.eq) goto loc_83870D64;
loc_83870D4C:
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
loc_83870D64:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870d78
	if (cr6.eq) goto loc_83870D78;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83870d7c
	goto loc_83870D7C;
loc_83870D78:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870D7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83870d4c
	if (cr6.eq) goto loc_83870D4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83870DA8"))) PPC_WEAK_FUNC(sub_83870DA8);
PPC_FUNC_IMPL(__imp__sub_83870DA8) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8386ff00
	ctx.lr = 0x83870DCC;
	sub_8386FF00(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83870de0
	if (cr6.eq) goto loc_83870DE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83870DE0;
	sub_83870318(ctx, base);
loc_83870DE0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83870df4
	if (!cr6.eq) goto loc_83870DF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8387136c
	goto loc_8387136C;
loc_83870DF4:
	// lbz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83870e0c
	if (!cr6.eq) goto loc_83870E0C;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83870E0C:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870e24
	if (cr6.eq) goto loc_83870E24;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_83870E24:
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870e3c
	if (!cr6.eq) goto loc_83870E3C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870e48
	if (cr6.eq) goto loc_83870E48;
loc_83870E3C:
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
loc_83870E48:
	// lbz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870e60
	if (!cr6.eq) goto loc_83870E60;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870e6c
	if (cr6.eq) goto loc_83870E6C;
loc_83870E60:
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_83870E6C:
	// lbz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870e84
	if (!cr6.eq) goto loc_83870E84;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870e90
	if (cr6.eq) goto loc_83870E90;
loc_83870E84:
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
loc_83870E90:
	// lbz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870ea8
	if (!cr6.eq) goto loc_83870EA8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870eb4
	if (cr6.eq) goto loc_83870EB4;
loc_83870EA8:
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
loc_83870EB4:
	// lbz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870ecc
	if (!cr6.eq) goto loc_83870ECC;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x83870ed8
	if (cr6.eq) goto loc_83870ED8;
loc_83870ECC:
	// std r9,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
loc_83870ED8:
	// lbz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870eec
	if (cr6.eq) goto loc_83870EEC;
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// b 0x83870ef0
	goto loc_83870EF0;
loc_83870EEC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870EF0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f04
	if (cr6.eq) goto loc_83870F04;
	// stfd f0,64(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
loc_83870F04:
	// lbz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f18
	if (cr6.eq) goto loc_83870F18;
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// b 0x83870f1c
	goto loc_83870F1C;
loc_83870F18:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870F1C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f30
	if (cr6.eq) goto loc_83870F30;
	// stfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
loc_83870F30:
	// lbz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f44
	if (cr6.eq) goto loc_83870F44;
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// b 0x83870f48
	goto loc_83870F48;
loc_83870F44:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870F48:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f5c
	if (cr6.eq) goto loc_83870F5C;
	// stfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
loc_83870F5C:
	// lbz r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 264);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f70
	if (cr6.eq) goto loc_83870F70;
	// lfd f0,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// b 0x83870f74
	goto loc_83870F74;
loc_83870F70:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83870F74:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83870f88
	if (cr6.eq) goto loc_83870F88;
	// stfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
loc_83870F88:
	// lbz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 284);
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870fa0
	if (!cr6.eq) goto loc_83870FA0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870fac
	if (cr6.eq) goto loc_83870FAC;
loc_83870FA0:
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
loc_83870FAC:
	// lbz r8,296(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870fc4
	if (!cr6.eq) goto loc_83870FC4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870fd0
	if (cr6.eq) goto loc_83870FD0;
loc_83870FC4:
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
loc_83870FD0:
	// lbz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 308);
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83870fe8
	if (!cr6.eq) goto loc_83870FE8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83870ff4
	if (cr6.eq) goto loc_83870FF4;
loc_83870FE8:
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r10.u8);
loc_83870FF4:
	// lbz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387100c
	if (!cr6.eq) goto loc_8387100C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871018
	if (cr6.eq) goto loc_83871018;
loc_8387100C:
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
loc_83871018:
	// lbz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 332);
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871030
	if (!cr6.eq) goto loc_83871030;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8387103c
	if (cr6.eq) goto loc_8387103C;
loc_83871030:
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
loc_8387103C:
	// lbz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 344);
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871054
	if (!cr6.eq) goto loc_83871054;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871060
	if (cr6.eq) goto loc_83871060;
loc_83871054:
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
loc_83871060:
	// lbz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 356);
	// lwz r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871078
	if (!cr6.eq) goto loc_83871078;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871084
	if (cr6.eq) goto loc_83871084;
loc_83871078:
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
loc_83871084:
	// lbz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387109c
	if (!cr6.eq) goto loc_8387109C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x838710a8
	if (cr6.eq) goto loc_838710A8;
loc_8387109C:
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
loc_838710A8:
	// lbz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 380);
	// lwz r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838710c0
	if (!cr6.eq) goto loc_838710C0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x838710cc
	if (cr6.eq) goto loc_838710CC;
loc_838710C0:
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
loc_838710CC:
	// lbz r8,392(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 392);
	// lwz r9,396(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838710e4
	if (!cr6.eq) goto loc_838710E4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x838710f0
	if (cr6.eq) goto loc_838710F0;
loc_838710E4:
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r10.u8);
loc_838710F0:
	// lbz r8,404(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 404);
	// lwz r9,408(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871108
	if (!cr6.eq) goto loc_83871108;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871114
	if (cr6.eq) goto loc_83871114;
loc_83871108:
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r10.u8);
loc_83871114:
	// lbz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 416);
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387112c
	if (!cr6.eq) goto loc_8387112C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871138
	if (cr6.eq) goto loc_83871138;
loc_8387112C:
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
loc_83871138:
	// lbz r8,428(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 428);
	// lwz r9,432(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871150
	if (!cr6.eq) goto loc_83871150;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8387115c
	if (cr6.eq) goto loc_8387115C;
loc_83871150:
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_8387115C:
	// lbz r9,448(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 448);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871170
	if (cr6.eq) goto loc_83871170;
	// lfd f0,456(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// b 0x83871174
	goto loc_83871174;
loc_83871170:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83871174:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871188
	if (cr6.eq) goto loc_83871188;
	// stfd f0,232(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_83871188:
	// lbz r9,472(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 472);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8387119c
	if (cr6.eq) goto loc_8387119C;
	// lfd f0,480(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// b 0x838711a0
	goto loc_838711A0;
loc_8387119C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838711A0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838711b4
	if (cr6.eq) goto loc_838711B4;
	// stfd f0,248(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r10.u8);
loc_838711B4:
	// lbz r9,496(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 496);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838711c8
	if (cr6.eq) goto loc_838711C8;
	// lfd f0,504(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// b 0x838711cc
	goto loc_838711CC;
loc_838711C8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838711CC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838711e0
	if (cr6.eq) goto loc_838711E0;
	// stfd f0,264(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r10.u8);
loc_838711E0:
	// lbz r9,520(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 520);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838711f4
	if (cr6.eq) goto loc_838711F4;
	// lfd f0,528(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// b 0x838711f8
	goto loc_838711F8;
loc_838711F4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838711F8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8387120c
	if (cr6.eq) goto loc_8387120C;
	// stfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
loc_8387120C:
	// lbz r8,540(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 540);
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871224
	if (!cr6.eq) goto loc_83871224;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871230
	if (cr6.eq) goto loc_83871230;
loc_83871224:
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r10.u8);
loc_83871230:
	// lbz r8,552(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 552);
	// lwz r9,556(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871248
	if (!cr6.eq) goto loc_83871248;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871254
	if (cr6.eq) goto loc_83871254;
loc_83871248:
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r10.u8);
loc_83871254:
	// lbz r8,564(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 564);
	// lwz r9,568(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387126c
	if (!cr6.eq) goto loc_8387126C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871278
	if (cr6.eq) goto loc_83871278;
loc_8387126C:
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
loc_83871278:
	// lbz r9,584(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8387128c
	if (cr6.eq) goto loc_8387128C;
	// lfd f0,592(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 592);
	// b 0x83871290
	goto loc_83871290;
loc_8387128C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83871290:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838712a4
	if (cr6.eq) goto loc_838712A4;
	// stfd f0,320(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r10.u8);
loc_838712A4:
	// lbz r9,608(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 608);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838712b8
	if (cr6.eq) goto loc_838712B8;
	// lfd f0,616(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// b 0x838712bc
	goto loc_838712BC;
loc_838712B8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838712BC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838712d0
	if (cr6.eq) goto loc_838712D0;
	// stfd f0,336(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.f0.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r10.u8);
loc_838712D0:
	// lbz r8,628(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 628);
	// lwz r9,632(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838712e8
	if (!cr6.eq) goto loc_838712E8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x838712f4
	if (cr6.eq) goto loc_838712F4;
loc_838712E8:
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r10.u8);
loc_838712F4:
	// lbz r8,640(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 640);
	// lwz r9,644(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387130c
	if (!cr6.eq) goto loc_8387130C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871318
	if (cr6.eq) goto loc_83871318;
loc_8387130C:
	// stw r9,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r10.u8);
loc_83871318:
	// lbz r8,652(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 652);
	// lwz r9,656(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871330
	if (!cr6.eq) goto loc_83871330;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8387133c
	if (cr6.eq) goto loc_8387133C;
loc_83871330:
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r10.u8);
loc_8387133C:
	// lbz r8,664(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 664);
	// lwz r9,668(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83871354
	if (!cr6.eq) goto loc_83871354;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83871360
	if (cr6.eq) goto loc_83871360;
loc_83871354:
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r10.u8);
loc_83871360:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8387136C:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
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

__attribute__((alias("__imp__sub_83871384"))) PPC_WEAK_FUNC(sub_83871384);
PPC_FUNC_IMPL(__imp__sub_83871384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871388"))) PPC_WEAK_FUNC(sub_83871388);
PPC_FUNC_IMPL(__imp__sub_83871388) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-540
	ctx.r9.s64 = ctx.r10.s64 + -540;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x838713c8
	if (!cr6.eq) goto loc_838713C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x838713d0
	goto loc_838713D0;
loc_838713C8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x838713D0;
	sub_83870318(ctx, base);
loc_838713D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838713f4
	if (!cr6.eq) goto loc_838713F4;
loc_838713DC:
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
loc_838713F4:
	// lbz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8387140c
	if (!cr6.eq) goto loc_8387140C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x838713dc
	goto loc_838713DC;
loc_8387140C:
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83871430"))) PPC_WEAK_FUNC(sub_83871430);
PPC_FUNC_IMPL(__imp__sub_83871430) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-532
	ctx.r8.s64 = ctx.r10.s64 + -532;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83871478
	if (!cr6.eq) goto loc_83871478;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83871480
	goto loc_83871480;
loc_83871478:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83871480;
	sub_83870318(ctx, base);
loc_83871480:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838714a4
	if (!cr6.eq) goto loc_838714A4;
loc_8387148C:
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
loc_838714A4:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838714b8
	if (cr6.eq) goto loc_838714B8;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x838714bc
	goto loc_838714BC;
loc_838714B8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838714BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387148c
	if (cr6.eq) goto loc_8387148C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_838714E8"))) PPC_WEAK_FUNC(sub_838714E8);
PPC_FUNC_IMPL(__imp__sub_838714E8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-484
	ctx.r9.s64 = ctx.r10.s64 + -484;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83871528
	if (!cr6.eq) goto loc_83871528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83871530
	goto loc_83871530;
loc_83871528:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83871530;
	sub_83870318(ctx, base);
loc_83871530:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83871554
	if (!cr6.eq) goto loc_83871554;
loc_8387153C:
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
loc_83871554:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8387156c
	if (!cr6.eq) goto loc_8387156C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8387153c
	goto loc_8387153C;
loc_8387156C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83871590"))) PPC_WEAK_FUNC(sub_83871590);
PPC_FUNC_IMPL(__imp__sub_83871590) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-476
	ctx.r9.s64 = ctx.r10.s64 + -476;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x838715d0
	if (!cr6.eq) goto loc_838715D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x838715d8
	goto loc_838715D8;
loc_838715D0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x838715D8;
	sub_83870318(ctx, base);
loc_838715D8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838715fc
	if (!cr6.eq) goto loc_838715FC;
loc_838715E4:
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
loc_838715FC:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871614
	if (!cr6.eq) goto loc_83871614;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x838715e4
	goto loc_838715E4;
loc_83871614:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83871638"))) PPC_WEAK_FUNC(sub_83871638);
PPC_FUNC_IMPL(__imp__sub_83871638) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-444
	ctx.r9.s64 = ctx.r10.s64 + -444;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83871678
	if (!cr6.eq) goto loc_83871678;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83871680
	goto loc_83871680;
loc_83871678:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83871680;
	sub_83870318(ctx, base);
loc_83871680:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838716a4
	if (!cr6.eq) goto loc_838716A4;
loc_8387168C:
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
loc_838716A4:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838716bc
	if (!cr6.eq) goto loc_838716BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8387168c
	goto loc_8387168C;
loc_838716BC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_838716E0"))) PPC_WEAK_FUNC(sub_838716E0);
PPC_FUNC_IMPL(__imp__sub_838716E0) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-412
	ctx.r9.s64 = ctx.r10.s64 + -412;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83871720
	if (!cr6.eq) goto loc_83871720;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83871728
	goto loc_83871728;
loc_83871720:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x83871728;
	sub_83870318(ctx, base);
loc_83871728:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387174c
	if (!cr6.eq) goto loc_8387174C;
loc_83871734:
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
loc_8387174C:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871764
	if (!cr6.eq) goto loc_83871764;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83871734
	goto loc_83871734;
loc_83871764:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83871788"))) PPC_WEAK_FUNC(sub_83871788);
PPC_FUNC_IMPL(__imp__sub_83871788) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-404
	ctx.r9.s64 = ctx.r10.s64 + -404;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x838717c8
	if (!cr6.eq) goto loc_838717C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x838717d0
	goto loc_838717D0;
loc_838717C8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83870318
	ctx.lr = 0x838717D0;
	sub_83870318(ctx, base);
loc_838717D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838717f4
	if (!cr6.eq) goto loc_838717F4;
loc_838717DC:
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
loc_838717F4:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8387180c
	if (!cr6.eq) goto loc_8387180C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x838717dc
	goto loc_838717DC;
loc_8387180C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83871830"))) PPC_WEAK_FUNC(sub_83871830);
PPC_FUNC_IMPL(__imp__sub_83871830) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-396
	ctx.r8.s64 = ctx.r10.s64 + -396;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83871878
	if (!cr6.eq) goto loc_83871878;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83871880
	goto loc_83871880;
loc_83871878:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83871880;
	sub_83870318(ctx, base);
loc_83871880:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838718a4
	if (!cr6.eq) goto loc_838718A4;
loc_8387188C:
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
loc_838718A4:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838718b8
	if (cr6.eq) goto loc_838718B8;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x838718bc
	goto loc_838718BC;
loc_838718B8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_838718BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387188c
	if (cr6.eq) goto loc_8387188C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_838718E8"))) PPC_WEAK_FUNC(sub_838718E8);
PPC_FUNC_IMPL(__imp__sub_838718E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-388
	ctx.r8.s64 = ctx.r10.s64 + -388;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83871930
	if (!cr6.eq) goto loc_83871930;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83871938
	goto loc_83871938;
loc_83871930:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83871938;
	sub_83870318(ctx, base);
loc_83871938:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387195c
	if (!cr6.eq) goto loc_8387195C;
loc_83871944:
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
loc_8387195C:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871970
	if (cr6.eq) goto loc_83871970;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83871974
	goto loc_83871974;
loc_83871970:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83871974:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871944
	if (cr6.eq) goto loc_83871944;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_838719A0"))) PPC_WEAK_FUNC(sub_838719A0);
PPC_FUNC_IMPL(__imp__sub_838719A0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-380
	ctx.r8.s64 = ctx.r10.s64 + -380;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x838719e8
	if (!cr6.eq) goto loc_838719E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838719f0
	goto loc_838719F0;
loc_838719E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x838719F0;
	sub_83870318(ctx, base);
loc_838719F0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83871a14
	if (!cr6.eq) goto loc_83871A14;
loc_838719FC:
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
loc_83871A14:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871a28
	if (cr6.eq) goto loc_83871A28;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83871a2c
	goto loc_83871A2C;
loc_83871A28:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83871A2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838719fc
	if (cr6.eq) goto loc_838719FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83871A58"))) PPC_WEAK_FUNC(sub_83871A58);
PPC_FUNC_IMPL(__imp__sub_83871A58) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-372
	ctx.r8.s64 = ctx.r10.s64 + -372;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x83871aa0
	if (!cr6.eq) goto loc_83871AA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83871aa8
	goto loc_83871AA8;
loc_83871AA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83870318
	ctx.lr = 0x83871AA8;
	sub_83870318(ctx, base);
loc_83871AA8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83871acc
	if (!cr6.eq) goto loc_83871ACC;
loc_83871AB4:
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
loc_83871ACC:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871ae0
	if (cr6.eq) goto loc_83871AE0;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x83871ae4
	goto loc_83871AE4;
loc_83871AE0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83871AE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871ab4
	if (cr6.eq) goto loc_83871AB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83871B10"))) PPC_WEAK_FUNC(sub_83871B10);
PPC_FUNC_IMPL(__imp__sub_83871B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83871b24
	if (!cr6.eq) goto loc_83871B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83871B24:
	// lbz r11,145(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871B34"))) PPC_WEAK_FUNC(sub_83871B34);
PPC_FUNC_IMPL(__imp__sub_83871B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871B38"))) PPC_WEAK_FUNC(sub_83871B38);
PPC_FUNC_IMPL(__imp__sub_83871B38) {
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
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// addi r3,r1,135
	ctx.r3.s64 = ctx.r1.s64 + 135;
	// bl 0x83875e50
	ctx.lr = 0x83871B50;
	sub_83875E50(ctx, base);
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

__attribute__((alias("__imp__sub_83871B64"))) PPC_WEAK_FUNC(sub_83871B64);
PPC_FUNC_IMPL(__imp__sub_83871B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871B68"))) PPC_WEAK_FUNC(sub_83871B68);
PPC_FUNC_IMPL(__imp__sub_83871B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871bb4
	if (!cr6.eq) goto loc_83871BB4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871bac
	if (!cr6.eq) goto loc_83871BAC;
loc_83871B98:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871b98
	if (cr6.eq) goto loc_83871B98;
loc_83871BAC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83871BB4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871bec
	if (!cr6.eq) goto loc_83871BEC;
loc_83871BC4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83871bec
	if (!cr6.eq) goto loc_83871BEC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83871bc4
	if (cr6.eq) goto loc_83871BC4;
loc_83871BEC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871BF4"))) PPC_WEAK_FUNC(sub_83871BF4);
PPC_FUNC_IMPL(__imp__sub_83871BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871BF8"))) PPC_WEAK_FUNC(sub_83871BF8);
PPC_FUNC_IMPL(__imp__sub_83871BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871c44
	if (!cr6.eq) goto loc_83871C44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871c3c
	if (!cr6.eq) goto loc_83871C3C;
loc_83871C28:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871c28
	if (cr6.eq) goto loc_83871C28;
loc_83871C3C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83871C44:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871c7c
	if (!cr6.eq) goto loc_83871C7C;
loc_83871C54:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83871c7c
	if (!cr6.eq) goto loc_83871C7C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83871c54
	if (cr6.eq) goto loc_83871C54;
loc_83871C7C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871C84"))) PPC_WEAK_FUNC(sub_83871C84);
PPC_FUNC_IMPL(__imp__sub_83871C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871C88"))) PPC_WEAK_FUNC(sub_83871C88);
PPC_FUNC_IMPL(__imp__sub_83871C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83871ca4
	if (cr6.eq) goto loc_83871CA4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83871CA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871ce0
	if (!cr6.eq) goto loc_83871CE0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871cd8
	if (!cr6.eq) goto loc_83871CD8;
loc_83871CC4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871cc4
	if (cr6.eq) goto loc_83871CC4;
loc_83871CD8:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83871CE0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871d18
	if (!cr6.eq) goto loc_83871D18;
loc_83871CF0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83871d18
	if (!cr6.eq) goto loc_83871D18;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83871cf0
	if (cr6.eq) goto loc_83871CF0;
loc_83871D18:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871D30"))) PPC_WEAK_FUNC(sub_83871D30);
PPC_FUNC_IMPL(__imp__sub_83871D30) {
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
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871d50
	if (!cr6.eq) goto loc_83871D50;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_83871D50:
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
	// bne cr6,0x83871d78
	if (!cr6.eq) goto loc_83871D78;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83871D78:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83871d98
	if (!cr6.eq) goto loc_83871D98;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83871D98:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871DA8"))) PPC_WEAK_FUNC(sub_83871DA8);
PPC_FUNC_IMPL(__imp__sub_83871DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83871de0
	if (cr6.eq) goto loc_83871DE0;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83871de0
	if (cr6.eq) goto loc_83871DE0;
loc_83871DC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x83871de8
	if (cr6.eq) goto loc_83871DE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83871dc0
	if (!cr6.eq) goto loc_83871DC0;
loc_83871DE0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_83871DE8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83871e1c
	if (cr6.eq) goto loc_83871E1C;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83871DFC:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x83871e14
	if (cr6.eq) goto loc_83871E14;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
loc_83871E14:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83871dfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83871DFC;
loc_83871E1C:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871E24"))) PPC_WEAK_FUNC(sub_83871E24);
PPC_FUNC_IMPL(__imp__sub_83871E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871E28"))) PPC_WEAK_FUNC(sub_83871E28);
PPC_FUNC_IMPL(__imp__sub_83871E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x83871e74
	if (!cr6.lt) goto loc_83871E74;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_83871E40:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x83871e54
	if (!cr6.lt) goto loc_83871E54;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83871E54:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r9,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x83871e40
	if (cr6.lt) goto loc_83871E40;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
loc_83871E74:
	// bne cr6,0x83871e88
	if (!cr6.eq) goto loc_83871E88;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r10,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
loc_83871E88:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83871ed0
	if (!cr6.lt) goto loc_83871ED0;
loc_83871EA0:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x83871ed0
	if (!cr6.lt) goto loc_83871ED0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x83871ea0
	if (cr6.lt) goto loc_83871EA0;
loc_83871ED0:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871EDC"))) PPC_WEAK_FUNC(sub_83871EDC);
PPC_FUNC_IMPL(__imp__sub_83871EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83871EE0"))) PPC_WEAK_FUNC(sub_83871EE0);
PPC_FUNC_IMPL(__imp__sub_83871EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83871f00
	if (!cr6.eq) goto loc_83871F00;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_83871F00:
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
	// bne cr6,0x83871f28
	if (!cr6.eq) goto loc_83871F28;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83871F28:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83871f48
	if (!cr6.eq) goto loc_83871F48;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83871F48:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83871F58"))) PPC_WEAK_FUNC(sub_83871F58);
PPC_FUNC_IMPL(__imp__sub_83871F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83871fb4
	if (!cr6.eq) goto loc_83871FB4;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83871F74:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83871f88
	if (!cr6.lt) goto loc_83871F88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83871fa8
	goto loc_83871FA8;
loc_83871F88:
	// lbz r8,49(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83871fa0
	if (cr6.eq) goto loc_83871FA0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83871fa0
	if (!cr6.lt) goto loc_83871FA0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83871FA0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83871FA8:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83871f74
	if (cr6.eq) goto loc_83871F74;
loc_83871FB4:
	// lbz r11,49(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83871fcc
	if (cr6.eq) goto loc_83871FCC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83871fd0
	goto loc_83871FD0;
loc_83871FCC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_83871FD0:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872008
	if (!cr6.eq) goto loc_83872008;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83871FE0:
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83871ff8
	if (!cr6.lt) goto loc_83871FF8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83871ffc
	goto loc_83871FFC;
loc_83871FF8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83871FFC:
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83871fe0
	if (cr6.eq) goto loc_83871FE0;
loc_83872008:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83872014"))) PPC_WEAK_FUNC(sub_83872014);
PPC_FUNC_IMPL(__imp__sub_83872014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872018"))) PPC_WEAK_FUNC(sub_83872018);
PPC_FUNC_IMPL(__imp__sub_83872018) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8387204C;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,48(r7)
	PPC_STORE_U8(ctx.r7.u32 + 48, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,49(r6)
	PPC_STORE_U8(ctx.r6.u32 + 49, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83872090"))) PPC_WEAK_FUNC(sub_83872090);
PPC_FUNC_IMPL(__imp__sub_83872090) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838720C4;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,14(r7)
	PPC_STORE_U8(ctx.r7.u32 + 14, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,15(r6)
	PPC_STORE_U8(ctx.r6.u32 + 15, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83872108"))) PPC_WEAK_FUNC(sub_83872108);
PPC_FUNC_IMPL(__imp__sub_83872108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83872110;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,15(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83872158
	if (!cr6.eq) goto loc_83872158;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8387212C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83872108
	ctx.lr = 0x83872138;
	sub_83872108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8387214C;
	sub_825952B8(ctx, base);
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387212c
	if (cr6.eq) goto loc_8387212C;
loc_83872158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83872160"))) PPC_WEAK_FUNC(sub_83872160);
PPC_FUNC_IMPL(__imp__sub_83872160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83872168;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x838721ac
	if (cr6.lt) goto loc_838721AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x838721A0;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x838721AC;
	sub_831CC150(ctx, base);
loc_838721AC:
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
	// bne cr6,0x838721dc
	if (!cr6.eq) goto loc_838721DC;
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
	// b 0x8387221c
	goto loc_8387221C;
loc_838721DC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83872204
	if (cr6.eq) goto loc_83872204;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8387221c
	if (!cr6.eq) goto loc_8387221C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8387221c
	goto loc_8387221C;
loc_83872204:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8387221c
	if (!cr6.eq) goto loc_8387221C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_8387221C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872340
	if (!cr6.eq) goto loc_83872340;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83872238:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x838722c0
	if (!cr6.eq) goto loc_838722C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872280
	if (!cr6.eq) goto loc_83872280;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r29.u8);
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,14(r8)
	PPC_STORE_U8(ctx.r8.u32 + 14, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83872330
	goto loc_83872330;
loc_83872280:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83872298
	if (!cr6.eq) goto loc_83872298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83871ee0
	ctx.lr = 0x83872298;
	sub_83871EE0(ctx, base);
loc_83872298:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,14(r9)
	PPC_STORE_U8(ctx.r9.u32 + 14, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83871d30
	ctx.lr = 0x838722BC;
	sub_83871D30(ctx, base);
	// b 0x83872330
	goto loc_83872330;
loc_838722C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838722f4
	if (!cr6.eq) goto loc_838722F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r29.u8);
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,14(r8)
	PPC_STORE_U8(ctx.r8.u32 + 14, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83872330
	goto loc_83872330;
loc_838722F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8387230c
	if (!cr6.eq) goto loc_8387230C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83871d30
	ctx.lr = 0x8387230C;
	sub_83871D30(ctx, base);
loc_8387230C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,14(r9)
	PPC_STORE_U8(ctx.r9.u32 + 14, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83871ee0
	ctx.lr = 0x83872330;
	sub_83871EE0(ctx, base);
loc_83872330:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83872238
	if (cr6.eq) goto loc_83872238;
loc_83872340:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8387235C"))) PPC_WEAK_FUNC(sub_8387235C);
PPC_FUNC_IMPL(__imp__sub_8387235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872360"))) PPC_WEAK_FUNC(sub_83872360);
PPC_FUNC_IMPL(__imp__sub_83872360) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x838723a8
	if (cr6.eq) goto loc_838723A8;
loc_83872388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83871bf8
	ctx.lr = 0x8387239C;
	sub_83871BF8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83872388
	if (!cr6.eq) goto loc_83872388;
loc_838723A8:
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

__attribute__((alias("__imp__sub_838723C0"))) PPC_WEAK_FUNC(sub_838723C0);
PPC_FUNC_IMPL(__imp__sub_838723C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x83872574
	if (!cr6.gt) goto loc_83872574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83872400
	if (!cr6.lt) goto loc_83872400;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_83872400:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83872420
	if (!cr6.lt) goto loc_83872420;
	// stbx r9,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u8);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_83872420:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83872440
	if (!cr6.lt) goto loc_83872440;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_83872440:
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x83872464
	if (!cr6.lt) goto loc_83872464;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_83872464:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x83872484
	if (!cr6.lt) goto loc_83872484;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_83872484:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x838724a4
	if (!cr6.lt) goto loc_838724A4;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_838724A4:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r8,r7,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x838724cc
	if (!cr6.lt) goto loc_838724CC;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
loc_838724CC:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x838724ec
	if (!cr6.lt) goto loc_838724EC;
	// stb r7,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_838724EC:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x8387250c
	if (!cr6.lt) goto loc_8387250C;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
loc_8387250C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8387252c
	if (!cr6.lt) goto loc_8387252C;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
loc_8387252C:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8387254c
	if (!cr6.lt) goto loc_8387254C;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
loc_8387254C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838725d4
	if (!cr6.lt) goto loc_838725D4;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83872574:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83872594
	if (!cr6.lt) goto loc_83872594;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_83872594:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838725b4
	if (!cr6.lt) goto loc_838725B4;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_838725B4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838725d4
	if (!cr6.lt) goto loc_838725D4;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_838725D4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838725DC"))) PPC_WEAK_FUNC(sub_838725DC);
PPC_FUNC_IMPL(__imp__sub_838725DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838725E0"))) PPC_WEAK_FUNC(sub_838725E0);
PPC_FUNC_IMPL(__imp__sub_838725E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r11,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addze. r8,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x838726b4
	if (!cr0.gt) goto loc_838726B4;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_838725FC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// lbzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// bge cr6,0x8387264c
	if (!cr6.lt) goto loc_8387264C;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_8387261C:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x83872630
	if (!cr6.lt) goto loc_83872630;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83872630:
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x8387261c
	if (cr6.lt) goto loc_8387261C;
loc_8387264C:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bne cr6,0x83872664
	if (!cr6.eq) goto loc_83872664;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
loc_83872664:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x838726a8
	if (!cr6.lt) goto loc_838726A8;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
loc_8387267C:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x838726a8
	if (!cr6.lt) goto loc_838726A8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x8387267c
	if (cr6.lt) goto loc_8387267C;
loc_838726A8:
	// stbx r4,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x838725fc
	if (cr6.gt) goto loc_838725FC;
loc_838726B4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838726BC"))) PPC_WEAK_FUNC(sub_838726BC);
PPC_FUNC_IMPL(__imp__sub_838726BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838726C0"))) PPC_WEAK_FUNC(sub_838726C0);
PPC_FUNC_IMPL(__imp__sub_838726C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838726C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83872760
	if (cr6.eq) goto loc_83872760;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x83872760
	if (cr6.eq) goto loc_83872760;
	// subfic r28,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r28.s64 = 1 - ctx.r3.s64;
loc_838726EC:
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83872724
	if (!cr6.lt) goto loc_83872724;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x8387271C;
	sub_831CE420(ctx, base);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// b 0x83872754
	goto loc_83872754;
loc_83872724:
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83872750
	if (!cr6.lt) goto loc_83872750;
loc_83872738:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83872738
	if (cr6.lt) goto loc_83872738;
loc_83872750:
	// stb r29,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r29.u8);
loc_83872754:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x838726ec
	if (!cr6.eq) goto loc_838726EC;
loc_83872760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83872768"))) PPC_WEAK_FUNC(sub_83872768);
PPC_FUNC_IMPL(__imp__sub_83872768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83872770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,15(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83872798
	if (cr6.eq) goto loc_83872798;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x83872798;
	sub_831CC188(ctx, base);
loc_83872798:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83871b68
	ctx.lr = 0x838727A4;
	sub_83871B68(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x838727c0
	if (cr6.eq) goto loc_838727C0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x838727e4
	goto loc_838727E4;
loc_838727C0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838727d8
	if (cr6.eq) goto loc_838727D8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x838727e4
	goto loc_838727E4;
loc_838727D8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x838728d0
	if (!cr6.eq) goto loc_838728D0;
loc_838727E4:
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838727f8
	if (!cr6.eq) goto loc_838727F8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_838727F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872810
	if (!cr6.eq) goto loc_83872810;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x83872828
	goto loc_83872828;
loc_83872810:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872824
	if (!cr6.eq) goto loc_83872824;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83872828
	goto loc_83872828;
loc_83872824:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_83872828:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872878
	if (!cr6.eq) goto loc_83872878;
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387284c
	if (cr6.eq) goto loc_8387284C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83872874
	goto loc_83872874;
loc_8387284C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83872874
	if (!cr6.eq) goto loc_83872874;
loc_83872860:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83872860
	if (cr6.eq) goto loc_83872860;
loc_83872874:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83872878:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872964
	if (!cr6.eq) goto loc_83872964;
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838728a0
	if (cr6.eq) goto loc_838728A0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x83872964
	goto loc_83872964;
loc_838728A0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838728c8
	if (!cr6.eq) goto loc_838728C8;
loc_838728B4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838728b4
	if (cr6.eq) goto loc_838728B4;
loc_838728C8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x83872964
	goto loc_83872964;
loc_838728D0:
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
	// bne cr6,0x838728f0
	if (!cr6.eq) goto loc_838728F0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83872918
	goto loc_83872918;
loc_838728F0:
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83872904
	if (!cr6.eq) goto loc_83872904;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83872904:
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
loc_83872918:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872930
	if (!cr6.eq) goto loc_83872930;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x8387294c
	goto loc_8387294C;
loc_83872930:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83872948
	if (!cr6.eq) goto loc_83872948;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8387294c
	goto loc_8387294C;
loc_83872948:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8387294C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,14(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 14);
	// lbz r10,14(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 14);
	// stb r9,14(r25)
	PPC_STORE_U8(ctx.r25.u32 + 14, ctx.r9.u8);
	// stb r10,14(r26)
	PPC_STORE_U8(ctx.r26.u32 + 14, ctx.r10.u8);
loc_83872964:
	// lbz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 14);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83872afc
	if (!cr6.eq) goto loc_83872AFC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x83872af8
	if (cr6.eq) goto loc_83872AF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83872988:
	// lbz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 14);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83872af8
	if (!cr6.eq) goto loc_83872AF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83872a40
	if (!cr6.eq) goto loc_83872A40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838729c8
	if (!cr6.eq) goto loc_838729C8;
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83871ee0
	ctx.lr = 0x838729C4;
	sub_83871EE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_838729C8:
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872a94
	if (!cr6.eq) goto loc_83872A94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x838729f4
	if (!cr6.eq) goto loc_838729F4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83872a90
	if (cr6.eq) goto loc_83872A90;
loc_838729F4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83872a1c
	if (!cr6.eq) goto loc_83872A1C;
	// stb r29,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83871d30
	ctx.lr = 0x83872A18;
	sub_83871D30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83872A1C:
	// lbz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r29,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,14(r9)
	PPC_STORE_U8(ctx.r9.u32 + 14, ctx.r29.u8);
	// bl 0x83871ee0
	ctx.lr = 0x83872A3C;
	sub_83871EE0(ctx, base);
	// b 0x83872af8
	goto loc_83872AF8;
loc_83872A40:
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872a64
	if (!cr6.eq) goto loc_83872A64;
	// stb r29,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83871d30
	ctx.lr = 0x83872A60;
	sub_83871D30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83872A64:
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872a94
	if (!cr6.eq) goto loc_83872A94;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83872ab0
	if (!cr6.eq) goto loc_83872AB0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83872ab0
	if (!cr6.eq) goto loc_83872AB0;
loc_83872A90:
	// stb r30,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r30.u8);
loc_83872A94:
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
	// bne cr6,0x83872988
	if (!cr6.eq) goto loc_83872988;
	// b 0x83872af8
	goto loc_83872AF8;
loc_83872AB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83872ad8
	if (!cr6.eq) goto loc_83872AD8;
	// stb r29,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83871ee0
	ctx.lr = 0x83872AD4;
	sub_83871EE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83872AD8:
	// lbz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r29,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,14(r9)
	PPC_STORE_U8(ctx.r9.u32 + 14, ctx.r29.u8);
	// bl 0x83871d30
	ctx.lr = 0x83872AF8;
	sub_83871D30(ctx, base);
loc_83872AF8:
	// stb r29,14(r28)
	PPC_STORE_U8(ctx.r28.u32 + 14, ctx.r29.u8);
loc_83872AFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83872B10;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83872b24
	if (cr6.eq) goto loc_83872B24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83872B24:
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

__attribute__((alias("__imp__sub_83872B34"))) PPC_WEAK_FUNC(sub_83872B34);
PPC_FUNC_IMPL(__imp__sub_83872B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872B38"))) PPC_WEAK_FUNC(sub_83872B38);
PPC_FUNC_IMPL(__imp__sub_83872B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83872b78
	if (!cr6.eq) goto loc_83872B78;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83872B50:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83872b64
	if (!cr6.lt) goto loc_83872B64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83872b6c
	goto loc_83872B6C;
loc_83872B64:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83872B6C:
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83872b50
	if (cr6.eq) goto loc_83872B50;
loc_83872B78:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83872ba8
	if (cr6.eq) goto loc_83872BA8;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83872ba8
	if (cr6.lt) goto loc_83872BA8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83872BA8:
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

__attribute__((alias("__imp__sub_83872BBC"))) PPC_WEAK_FUNC(sub_83872BBC);
PPC_FUNC_IMPL(__imp__sub_83872BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872BC0"))) PPC_WEAK_FUNC(sub_83872BC0);
PPC_FUNC_IMPL(__imp__sub_83872BC0) {
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
	// bl 0x83872108
	ctx.lr = 0x83872BE0;
	sub_83872108(ctx, base);
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

__attribute__((alias("__imp__sub_83872C14"))) PPC_WEAK_FUNC(sub_83872C14);
PPC_FUNC_IMPL(__imp__sub_83872C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872C18"))) PPC_WEAK_FUNC(sub_83872C18);
PPC_FUNC_IMPL(__imp__sub_83872C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83872C20;
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
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83872ca4
	if (!cr6.eq) goto loc_83872CA4;
	// lbz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83872C58:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83872c74
	if (cr6.eq) goto loc_83872C74;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83872c80
	goto loc_83872C80;
loc_83872C74:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_83872C80:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83872c94
	if (cr6.eq) goto loc_83872C94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83872c98
	goto loc_83872C98;
loc_83872C94:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83872C98:
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83872c58
	if (cr6.eq) goto loc_83872C58;
loc_83872CA4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83872d04
	if (cr6.eq) goto loc_83872D04;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83872cfc
	if (!cr6.eq) goto loc_83872CFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83872160
	ctx.lr = 0x83872CE0;
	sub_83872160(ctx, base);
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
loc_83872CFC:
	// bl 0x83871c88
	ctx.lr = 0x83872D00;
	sub_83871C88(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83872D04:
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83872d48
	if (!cr6.lt) goto loc_83872D48;
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
	// bl 0x83872160
	ctx.lr = 0x83872D2C;
	sub_83872160(ctx, base);
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
loc_83872D48:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83872D5C;
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

__attribute__((alias("__imp__sub_83872D74"))) PPC_WEAK_FUNC(sub_83872D74);
PPC_FUNC_IMPL(__imp__sub_83872D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872D78"))) PPC_WEAK_FUNC(sub_83872D78);
PPC_FUNC_IMPL(__imp__sub_83872D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83872D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838723c0
	ctx.lr = 0x83872DB0;
	sub_838723C0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bge cr6,0x83872de4
	if (!cr6.lt) goto loc_83872DE4;
loc_83872DC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83872de4
	if (cr6.gt) goto loc_83872DE4;
	// blt cr6,0x83872de4
	if (cr6.lt) goto loc_83872DE4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83872dc0
	if (cr6.lt) goto loc_83872DC0;
loc_83872DE4:
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bge cr6,0x83872e0c
	if (!cr6.lt) goto loc_83872E0C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_83872DF0:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83872e0c
	if (cr6.gt) goto loc_83872E0C;
	// blt cr6,0x83872e0c
	if (cr6.lt) goto loc_83872E0C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// blt cr6,0x83872df0
	if (cr6.lt) goto loc_83872DF0;
loc_83872E0C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_83872E14:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bge cr6,0x83872e54
	if (!cr6.lt) goto loc_83872E54;
loc_83872E1C:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83872e48
	if (cr6.gt) goto loc_83872E48;
	// blt cr6,0x83872e54
	if (cr6.lt) goto loc_83872E54;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
loc_83872E48:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// blt cr6,0x83872e1c
	if (cr6.lt) goto loc_83872E1C;
loc_83872E54:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// ble cr6,0x83872e94
	if (!cr6.gt) goto loc_83872E94;
loc_83872E5C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lbz r8,-1(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83872e84
	if (cr6.gt) goto loc_83872E84;
	// blt cr6,0x83872e90
	if (cr6.lt) goto loc_83872E90;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_83872E84:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83872e5c
	if (cr6.lt) goto loc_83872E5C;
loc_83872E90:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
loc_83872E94:
	// bne cr6,0x83872ee0
	if (!cr6.eq) goto loc_83872EE0;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x83872f38
	if (cr6.eq) goto loc_83872F38;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x83872eb8
	if (cr6.eq) goto loc_83872EB8;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
loc_83872EB8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// b 0x83872e14
	goto loc_83872E14;
loc_83872EE0:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x83872f20
	if (!cr6.eq) goto loc_83872F20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83872f0c
	if (cr6.eq) goto loc_83872F0C;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_83872F0C:
	// lbzu r11,-1(r5)
	ea = -1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// b 0x83872e14
	goto loc_83872E14;
loc_83872F20:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x83872e14
	goto loc_83872E14;
loc_83872F38:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83872F4C"))) PPC_WEAK_FUNC(sub_83872F4C);
PPC_FUNC_IMPL(__imp__sub_83872F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83872F50"))) PPC_WEAK_FUNC(sub_83872F50);
PPC_FUNC_IMPL(__imp__sub_83872F50) {
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
	// stb r4,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83879930
	ctx.lr = 0x83872F74;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873050
	if (cr6.eq) goto loc_83873050;
	// addi r3,r1,143
	ctx.r3.s64 = ctx.r1.s64 + 143;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83875e50
	ctx.lr = 0x83872F8C;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873050
	if (cr6.eq) goto loc_83873050;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x83873050
	if (!cr6.eq) goto loc_83873050;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873050
	if (cr6.eq) goto loc_83873050;
	// addi r5,r1,143
	ctx.r5.s64 = ctx.r1.s64 + 143;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83873120
	ctx.lr = 0x83872FBC;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83872ffc
	if (!cr6.eq) goto loc_83872FFC;
	// addi r5,r1,143
	ctx.r5.s64 = ctx.r1.s64 + 143;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838aaf78
	ctx.lr = 0x83872FDC;
	sub_838AAF78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r9,2
	ctx.r9.s64 = 2;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// b 0x83873054
	goto loc_83873054;
loc_83872FFC:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x838799e0
	ctx.lr = 0x83873004;
	sub_838799E0(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x83873050
	if (cr6.gt) goto loc_83873050;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83873030
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83873030;
	// bdzf 4*cr6+eq,0x83873038
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83873038;
	// bdzf 4*cr6+eq,0x83873040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83873040;
	// bdzf 4*cr6+eq,0x83873048
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83873048;
	// bne cr6,0x83873050
	if (!cr6.eq) goto loc_83873050;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83873054
	goto loc_83873054;
loc_83873030:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83873054
	goto loc_83873054;
loc_83873038:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83873054
	goto loc_83873054;
loc_83873040:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83873054
	goto loc_83873054;
loc_83873048:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83873054
	goto loc_83873054;
loc_83873050:
	// li r3,5
	ctx.r3.s64 = 5;
loc_83873054:
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

__attribute__((alias("__imp__sub_8387306C"))) PPC_WEAK_FUNC(sub_8387306C);
PPC_FUNC_IMPL(__imp__sub_8387306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873070"))) PPC_WEAK_FUNC(sub_83873070);
PPC_FUNC_IMPL(__imp__sub_83873070) {
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
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873104
	if (cr6.eq) goto loc_83873104;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873104
	if (cr6.eq) goto loc_83873104;
	// lbz r10,145(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83873104
	if (cr6.eq) goto loc_83873104;
	// lbz r10,49(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x838730d4
	if (!cr6.eq) goto loc_838730D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83873108
	goto loc_83873108;
loc_838730D4:
	// addi r5,r1,151
	ctx.r5.s64 = ctx.r1.s64 + 151;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83872b38
	ctx.lr = 0x838730E4;
	sub_83872B38(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83873104
	if (cr6.eq) goto loc_83873104;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83873108
	goto loc_83873108;
loc_83873104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83873108:
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

__attribute__((alias("__imp__sub_83873120"))) PPC_WEAK_FUNC(sub_83873120);
PPC_FUNC_IMPL(__imp__sub_83873120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83873160
	if (!cr6.eq) goto loc_83873160;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83873138:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x8387314c
	if (!cr6.lt) goto loc_8387314C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83873154
	goto loc_83873154;
loc_8387314C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83873154:
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83873138
	if (cr6.eq) goto loc_83873138;
loc_83873160:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83873190
	if (cr6.eq) goto loc_83873190;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83873190
	if (cr6.lt) goto loc_83873190;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83873190:
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

__attribute__((alias("__imp__sub_838731A4"))) PPC_WEAK_FUNC(sub_838731A4);
PPC_FUNC_IMPL(__imp__sub_838731A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838731A8"))) PPC_WEAK_FUNC(sub_838731A8);
PPC_FUNC_IMPL(__imp__sub_838731A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838731B0;
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
	// bne cr6,0x838731fc
	if (!cr6.eq) goto loc_838731FC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x838731fc
	if (!cr6.eq) goto loc_838731FC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83872bc0
	ctx.lr = 0x838731E4;
	sub_83872BC0(ctx, base);
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
loc_838731FC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x8387322c
	if (cr6.eq) goto loc_8387322C;
loc_83873204:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83871b68
	ctx.lr = 0x83873210;
	sub_83871B68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83872768
	ctx.lr = 0x83873220;
	sub_83872768(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x83873204
	if (!cr6.eq) goto loc_83873204;
loc_8387322C:
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

__attribute__((alias("__imp__sub_8387323C"))) PPC_WEAK_FUNC(sub_8387323C);
PPC_FUNC_IMPL(__imp__sub_8387323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873240"))) PPC_WEAK_FUNC(sub_83873240);
PPC_FUNC_IMPL(__imp__sub_83873240) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83873274;
	sub_82595718(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// stb r10,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r10.u8);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// beq 0x838732b0
	if (cr0.eq) goto loc_838732B0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_838732B0:
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

__attribute__((alias("__imp__sub_838732C8"))) PPC_WEAK_FUNC(sub_838732C8);
PPC_FUNC_IMPL(__imp__sub_838732C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838732D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8387331c
	if (!cr6.gt) goto loc_8387331C;
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
loc_838732E8:
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stbx r9,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// bl 0x83871e28
	ctx.lr = 0x83873310;
	sub_83871E28(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bgt cr6,0x838732e8
	if (cr6.gt) goto loc_838732E8;
loc_8387331C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83873324"))) PPC_WEAK_FUNC(sub_83873324);
PPC_FUNC_IMPL(__imp__sub_83873324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873328"))) PPC_WEAK_FUNC(sub_83873328);
PPC_FUNC_IMPL(__imp__sub_83873328) {
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
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x83879db8
	ctx.lr = 0x83873360;
	sub_83879DB8(ctx, base);
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

__attribute__((alias("__imp__sub_83873378"))) PPC_WEAK_FUNC(sub_83873378);
PPC_FUNC_IMPL(__imp__sub_83873378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,38528
	ctx.r9.u64 = ctx.r10.u64 | 38528;
	// li r8,15
	ctx.r8.s64 = 15;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8387339C"))) PPC_WEAK_FUNC(sub_8387339C);
PPC_FUNC_IMPL(__imp__sub_8387339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838733A0"))) PPC_WEAK_FUNC(sub_838733A0);
PPC_FUNC_IMPL(__imp__sub_838733A0) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838733d0
	if (cr6.eq) goto loc_838733D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x838733D0;
	sub_825952B8(ctx, base);
loc_838733D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838733f0
	if (cr6.eq) goto loc_838733F0;
	// bl 0x8259b510
	ctx.lr = 0x838733F0;
	sub_8259B510(ctx, base);
loc_838733F0:
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

__attribute__((alias("__imp__sub_83873404"))) PPC_WEAK_FUNC(sub_83873404);
PPC_FUNC_IMPL(__imp__sub_83873404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873408"))) PPC_WEAK_FUNC(sub_83873408);
PPC_FUNC_IMPL(__imp__sub_83873408) {
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
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r5,r1,151
	ctx.r5.s64 = ctx.r1.s64 + 151;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83873120
	ctx.lr = 0x83873438;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83873450
	if (!cr6.eq) goto loc_83873450;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83873460
	goto loc_83873460;
loc_83873450:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83884cc0
	ctx.lr = 0x8387345C;
	sub_83884CC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83873460:
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

__attribute__((alias("__imp__sub_83873478"))) PPC_WEAK_FUNC(sub_83873478);
PPC_FUNC_IMPL(__imp__sub_83873478) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83875e30
	ctx.lr = 0x838734A0;
	sub_83875E30(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83873120
	ctx.lr = 0x838734B4;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838734cc
	if (!cr6.eq) goto loc_838734CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x838734dc
	goto loc_838734DC;
loc_838734CC:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83884cc0
	ctx.lr = 0x838734D8;
	sub_83884CC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_838734DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838734fc
	if (cr6.eq) goto loc_838734FC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838799e0
	ctx.lr = 0x838734F0;
	sub_838799E0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83873500
	if (cr6.eq) goto loc_83873500;
loc_838734FC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83873500:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83873514
	if (cr6.eq) goto loc_83873514;
	// bl 0x8259b510
	ctx.lr = 0x83873514;
	sub_8259B510(ctx, base);
loc_83873514:
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

__attribute__((alias("__imp__sub_83873530"))) PPC_WEAK_FUNC(sub_83873530);
PPC_FUNC_IMPL(__imp__sub_83873530) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83875e30
	ctx.lr = 0x83873558;
	sub_83875E30(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83873120
	ctx.lr = 0x8387356C;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83873584
	if (!cr6.eq) goto loc_83873584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x83873594
	goto loc_83873594;
loc_83873584:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83884cc0
	ctx.lr = 0x83873590;
	sub_83884CC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_83873594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838735b4
	if (cr6.eq) goto loc_838735B4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838799e0
	ctx.lr = 0x838735A8;
	sub_838799E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x838735b8
	if (cr6.eq) goto loc_838735B8;
loc_838735B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838735B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838735cc
	if (cr6.eq) goto loc_838735CC;
	// bl 0x8259b510
	ctx.lr = 0x838735CC;
	sub_8259B510(ctx, base);
loc_838735CC:
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

__attribute__((alias("__imp__sub_838735E8"))) PPC_WEAK_FUNC(sub_838735E8);
PPC_FUNC_IMPL(__imp__sub_838735E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83875e30
	ctx.lr = 0x83873610;
	sub_83875E30(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83873120
	ctx.lr = 0x83873624;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8387363c
	if (!cr6.eq) goto loc_8387363C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8387364c
	goto loc_8387364C;
loc_8387363C:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83884cc0
	ctx.lr = 0x83873648;
	sub_83884CC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8387364C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387366c
	if (cr6.eq) goto loc_8387366C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838799e0
	ctx.lr = 0x83873660;
	sub_838799E0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x83873670
	if (!cr6.eq) goto loc_83873670;
loc_8387366C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83873670:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83873684
	if (cr6.eq) goto loc_83873684;
	// bl 0x8259b510
	ctx.lr = 0x83873684;
	sub_8259B510(ctx, base);
loc_83873684:
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

__attribute__((alias("__imp__sub_838736A0"))) PPC_WEAK_FUNC(sub_838736A0);
PPC_FUNC_IMPL(__imp__sub_838736A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838736A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838aaeb8
	ctx.lr = 0x838736C0;
	sub_838AAEB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8381ba48
	ctx.lr = 0x838736E4;
	sub_8381BA48(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d0e798
	ctx.lr = 0x838736F8;
	sub_82D0E798(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83873704"))) PPC_WEAK_FUNC(sub_83873704);
PPC_FUNC_IMPL(__imp__sub_83873704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873708"))) PPC_WEAK_FUNC(sub_83873708);
PPC_FUNC_IMPL(__imp__sub_83873708) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x83873738;
	sub_82B64B88(ctx, base);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83873774"))) PPC_WEAK_FUNC(sub_83873774);
PPC_FUNC_IMPL(__imp__sub_83873774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873778"))) PPC_WEAK_FUNC(sub_83873778);
PPC_FUNC_IMPL(__imp__sub_83873778) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838737a8
	if (cr6.eq) goto loc_838737A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x838737A8;
	sub_825952B8(ctx, base);
loc_838737A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838737c8
	if (cr6.eq) goto loc_838737C8;
	// bl 0x8259b510
	ctx.lr = 0x838737C8;
	sub_8259B510(ctx, base);
loc_838737C8:
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

__attribute__((alias("__imp__sub_838737DC"))) PPC_WEAK_FUNC(sub_838737DC);
PPC_FUNC_IMPL(__imp__sub_838737DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838737E0"))) PPC_WEAK_FUNC(sub_838737E0);
PPC_FUNC_IMPL(__imp__sub_838737E0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8312c7a0
	ctx.lr = 0x8387380C;
	sub_8312C7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838ab000
	ctx.lr = 0x83873820;
	sub_838AB000(ctx, base);
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_83873838"))) PPC_WEAK_FUNC(sub_83873838);
PPC_FUNC_IMPL(__imp__sub_83873838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83873840;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x838738d4
	if (!cr6.gt) goto loc_838738D4;
loc_8387385C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x838738f4
	if (!cr6.gt) goto loc_838738F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83872d78
	ctx.lr = 0x83873874;
	sub_83872D78(ctx, base);
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
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x838738b8
	if (!cr6.lt) goto loc_838738B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83873838
	ctx.lr = 0x838738B0;
	sub_83873838(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x838738c8
	goto loc_838738C8;
loc_838738B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83873838
	ctx.lr = 0x838738C4;
	sub_83873838(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_838738C8:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x8387385c
	if (cr6.gt) goto loc_8387385C;
loc_838738D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838738ec
	if (!cr6.gt) goto loc_838738EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838726c0
	ctx.lr = 0x838738EC;
	sub_838726C0(ctx, base);
loc_838738EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838738F4:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x838738d4
	if (!cr6.gt) goto loc_838738D4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83873918
	if (!cr6.gt) goto loc_83873918;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838725e0
	ctx.lr = 0x83873918;
	sub_838725E0(ctx, base);
loc_83873918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838732c8
	ctx.lr = 0x83873924;
	sub_838732C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8387392C"))) PPC_WEAK_FUNC(sub_8387392C);
PPC_FUNC_IMPL(__imp__sub_8387392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873930"))) PPC_WEAK_FUNC(sub_83873930);
PPC_FUNC_IMPL(__imp__sub_83873930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83873938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387395c
	if (cr6.eq) goto loc_8387395C;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83873968
	if (!cr6.eq) goto loc_83873968;
loc_8387395C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83873968:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83873990
	if (cr6.eq) goto loc_83873990;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873988;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83873990:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea8a8
	ctx.lr = 0x8387399C;
	sub_833EA8A8(ctx, base);
	// addi r4,r28,49
	ctx.r4.s64 = ctx.r28.s64 + 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x838739A8;
	sub_833EAB80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838739B4"))) PPC_WEAK_FUNC(sub_838739B4);
PPC_FUNC_IMPL(__imp__sub_838739B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838739B8"))) PPC_WEAK_FUNC(sub_838739B8);
PPC_FUNC_IMPL(__imp__sub_838739B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838739C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873b18
	if (cr6.eq) goto loc_83873B18;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873b18
	if (cr6.eq) goto loc_83873B18;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83873b18
	if (cr6.eq) goto loc_83873B18;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x83873a1c
	if (cr6.eq) goto loc_83873A1C;
	// subf r28,r4,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873A14;
	sub_831CE420(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83873A1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea8a8
	ctx.lr = 0x83873A28;
	sub_833EA8A8(ctx, base);
	// addi r4,r30,49
	ctx.r4.s64 = ctx.r30.s64 + 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83873A34;
	sub_833EAB80(ctx, base);
	// addi r4,r30,145
	ctx.r4.s64 = ctx.r30.s64 + 145;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83873A40;
	sub_833EAB80(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83873a88
	if (cr6.eq) goto loc_83873A88;
loc_83873A54:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83873af0
	if (!cr6.eq) goto loc_83873AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83873A70;
	sub_833EAB80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83871b68
	ctx.lr = 0x83873A78;
	sub_83871B68(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83873a54
	if (!cr6.eq) goto loc_83873A54;
loc_83873A88:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// bl 0x83873838
	ctx.lr = 0x83873A98;
	sub_83873838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83871da8
	ctx.lr = 0x83873AA8;
	sub_83871DA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x83873ad0
	if (cr6.eq) goto loc_83873AD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873AC8;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83873AD0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83873af8
	if (!cr6.eq) goto loc_83873AF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83873AF0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83873AF8:
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83873b18
	if (cr6.eq) goto loc_83873B18;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873B10;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83873B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83873B24"))) PPC_WEAK_FUNC(sub_83873B24);
PPC_FUNC_IMPL(__imp__sub_83873B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83873B28"))) PPC_WEAK_FUNC(sub_83873B28);
PPC_FUNC_IMPL(__imp__sub_83873B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83873B30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873c7c
	if (cr6.eq) goto loc_83873C7C;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873c7c
	if (cr6.eq) goto loc_83873C7C;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83873c7c
	if (cr6.eq) goto loc_83873C7C;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83873b8c
	if (cr6.eq) goto loc_83873B8C;
	// subf r28,r4,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873B84;
	sub_831CE420(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83873B8C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea8a8
	ctx.lr = 0x83873B98;
	sub_833EA8A8(ctx, base);
	// addi r4,r29,145
	ctx.r4.s64 = ctx.r29.s64 + 145;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83873BA4;
	sub_833EAB80(ctx, base);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83873bec
	if (cr6.eq) goto loc_83873BEC;
loc_83873BB8:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83873c54
	if (!cr6.eq) goto loc_83873C54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83873BD4;
	sub_833EAB80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83871b68
	ctx.lr = 0x83873BDC;
	sub_83871B68(ctx, base);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83873bb8
	if (!cr6.eq) goto loc_83873BB8;
loc_83873BEC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// bl 0x83873838
	ctx.lr = 0x83873BFC;
	sub_83873838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83871da8
	ctx.lr = 0x83873C0C;
	sub_83871DA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x83873c34
	if (cr6.eq) goto loc_83873C34;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873C2C;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83873C34:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83873c5c
	if (!cr6.eq) goto loc_83873C5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83873C54:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83873C5C:
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83873c7c
	if (cr6.eq) goto loc_83873C7C;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83873C74;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83873C7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83873C88"))) PPC_WEAK_FUNC(sub_83873C88);
PPC_FUNC_IMPL(__imp__sub_83873C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83873C90;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8387a728
	ctx.lr = 0x83873CB0;
	sub_8387A728(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83873ce4
	if (cr6.eq) goto loc_83873CE4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8387415c
	if (cr6.eq) goto loc_8387415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83873CD8;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83873CE4:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi. r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83873ddc
	if (cr0.eq) goto loc_83873DDC;
loc_83873D08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387a198
	ctx.lr = 0x83873D14;
	sub_8387A198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83873eb0
	if (cr6.eq) goto loc_83873EB0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873d44
	if (cr6.eq) goto loc_83873D44;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873d44
	if (cr6.eq) goto loc_83873D44;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x83873d48
	if (!cr6.eq) goto loc_83873D48;
loc_83873D44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83873D48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873eb0
	if (cr6.eq) goto loc_83873EB0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83873d88
	if (!cr6.eq) goto loc_83873D88;
	// lbz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 48);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83873d80
	if (!cr6.eq) goto loc_83873D80;
	// stb r11,49(r27)
	PPC_STORE_U8(ctx.r27.u32 + 49, ctx.r11.u8);
	// stb r26,48(r27)
	PPC_STORE_U8(ctx.r27.u32 + 48, ctx.r26.u8);
	// b 0x83873dc0
	goto loc_83873DC0;
loc_83873D80:
	// lbz r10,49(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 49);
	// b 0x83873db4
	goto loc_83873DB4;
loc_83873D88:
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83873dc0
	if (cr6.eq) goto loc_83873DC0;
	// lbz r10,144(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 144);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83873db0
	if (!cr6.eq) goto loc_83873DB0;
	// stb r11,145(r27)
	PPC_STORE_U8(ctx.r27.u32 + 145, ctx.r11.u8);
	// stb r26,144(r27)
	PPC_STORE_U8(ctx.r27.u32 + 144, ctx.r26.u8);
	// b 0x83873dc0
	goto loc_83873DC0;
loc_83873DB0:
	// lbz r10,145(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 145);
loc_83873DB4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83873e9c
	if (!cr6.eq) goto loc_83873E9C;
loc_83873DC0:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x83873d08
	if (cr6.lt) goto loc_83873D08;
loc_83873DDC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874140
	if (cr6.eq) goto loc_83874140;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874140
	if (cr6.eq) goto loc_83874140;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x83873f1c
	if (cr6.eq) goto loc_83873F1C;
loc_83873E08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83873edc
	if (cr0.eq) goto loc_83873EDC;
loc_83873E20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387a198
	ctx.lr = 0x83873E2C;
	sub_8387A198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838740f0
	if (cr6.eq) goto loc_838740F0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873e5c
	if (cr6.eq) goto loc_83873E5C;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873e5c
	if (cr6.eq) goto loc_83873E5C;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x83873e60
	if (!cr6.eq) goto loc_83873E60;
loc_83873E5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83873E60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838740f0
	if (cr6.eq) goto loc_838740F0;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r10,13(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83873ed8
	if (cr6.eq) goto loc_83873ED8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x83873e20
	if (cr6.lt) goto loc_83873E20;
	// b 0x83873edc
	goto loc_83873EDC;
loc_83873E9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83873EA4;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83873EB0:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8387415c
	if (cr6.eq) goto loc_8387415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83873ECC;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83873ED8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83873EDC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83873f08
	if (!cr6.eq) goto loc_83873F08;
	// bl 0x83871b68
	ctx.lr = 0x83873EF0;
	sub_83871B68(ctx, base);
	// addi r4,r27,148
	ctx.r4.s64 = ctx.r27.s64 + 148;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83872768
	ctx.lr = 0x83873F00;
	sub_83872768(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x83873f0c
	goto loc_83873F0C;
loc_83873F08:
	// bl 0x83871b68
	ctx.lr = 0x83873F0C;
	sub_83871B68(ctx, base);
loc_83873F0C:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83873e08
	if (!cr6.eq) goto loc_83873E08;
loc_83873F1C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83874010
	if (cr0.eq) goto loc_83874010;
loc_83873F30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387a198
	ctx.lr = 0x83873F3C;
	sub_8387A198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874118
	if (cr6.eq) goto loc_83874118;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873f6c
	if (cr6.eq) goto loc_83873F6C;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83873f6c
	if (cr6.eq) goto loc_83873F6C;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x83873f70
	if (!cr6.eq) goto loc_83873F70;
loc_83873F6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83873F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874118
	if (cr6.eq) goto loc_83874118;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83873ff4
	if (!cr6.eq) goto loc_83873FF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83873ff4
	if (cr6.eq) goto loc_83873FF4;
	// lbz r30,13(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r31,r27,148
	ctx.r31.s64 = ctx.r27.s64 + 148;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// bl 0x83872b38
	ctx.lr = 0x83873FB0;
	sub_83872B38(ctx, base);
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83873ff4
	if (!cr6.eq) goto loc_83873FF4;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83873240
	ctx.lr = 0x83873FD4;
	sub_83873240(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83872c18
	ctx.lr = 0x83873FE8;
	sub_83872C18(ctx, base);
	// lbz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83873e9c
	if (cr6.eq) goto loc_83873E9C;
loc_83873FF4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x83873f30
	if (cr6.lt) goto loc_83873F30;
loc_83874010:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a8c428
	ctx.lr = 0x83874020;
	sub_82A8C428(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lbz r31,145(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 145);
	// lbz r29,49(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 49);
	// bl 0x82473550
	ctx.lr = 0x8387403C;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474050
	ctx.lr = 0x83874044;
	sub_82474050(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bl 0x82473550
	ctx.lr = 0x8387404C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474050
	ctx.lr = 0x83874054;
	sub_82474050(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x82473550
	ctx.lr = 0x8387405C;
	sub_82473550(ctx, base);
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x838740ac
	if (cr6.eq) goto loc_838740AC;
loc_83874070:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83874088
	if (cr6.eq) goto loc_83874088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82473550
	ctx.lr = 0x83874088;
	sub_82473550(ctx, base);
loc_83874088:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lbz r4,13(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// bl 0x82474050
	ctx.lr = 0x83874094;
	sub_82474050(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83871b68
	ctx.lr = 0x8387409C;
	sub_83871B68(ctx, base);
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83874070
	if (!cr6.eq) goto loc_83874070;
loc_838740AC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a79160
	ctx.lr = 0x838740B4;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x838740C8;
	sub_831CCF00(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838740e4
	if (cr6.eq) goto loc_838740E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x838740E4;
	sub_825952B8(ctx, base);
loc_838740E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838740F0:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8387415c
	if (cr6.eq) goto loc_8387415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8387410C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83874118:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8387415c
	if (cr6.eq) goto loc_8387415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83874134;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83874140:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8387415c
	if (cr6.eq) goto loc_8387415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x8387415C;
	sub_825952B8(ctx, base);
loc_8387415C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83874168"))) PPC_WEAK_FUNC(sub_83874168);
PPC_FUNC_IMPL(__imp__sub_83874168) {
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
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83874198
	if (cr6.eq) goto loc_83874198;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83874198;
	sub_825952B8(ctx, base);
loc_83874198:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838741b8
	if (cr6.eq) goto loc_838741B8;
	// bl 0x8259b510
	ctx.lr = 0x838741B8;
	sub_8259B510(ctx, base);
loc_838741B8:
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

__attribute__((alias("__imp__sub_838741CC"))) PPC_WEAK_FUNC(sub_838741CC);
PPC_FUNC_IMPL(__imp__sub_838741CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838741D0"))) PPC_WEAK_FUNC(sub_838741D0);
PPC_FUNC_IMPL(__imp__sub_838741D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838741D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,29126
	ctx.r9.u64 = ctx.r10.u64 | 29126;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83874228
	if (cr6.lt) goto loc_83874228;
	// addi r4,r7,12
	ctx.r4.s64 = ctx.r7.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x83874168
	ctx.lr = 0x83874208;
	sub_83874168(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8387421C;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x83874228;
	sub_831CC150(ctx, base);
loc_83874228:
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
	// bne cr6,0x83874258
	if (!cr6.eq) goto loc_83874258;
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
	// b 0x83874298
	goto loc_83874298;
loc_83874258:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874280
	if (cr6.eq) goto loc_83874280;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83874298
	if (!cr6.eq) goto loc_83874298;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x83874298
	goto loc_83874298;
loc_83874280:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83874298
	if (!cr6.eq) goto loc_83874298;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_83874298:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838743bc
	if (!cr6.eq) goto loc_838743BC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_838742B4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8387433c
	if (!cr6.eq) goto loc_8387433C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838742fc
	if (!cr6.eq) goto loc_838742FC;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x838743ac
	goto loc_838743AC;
loc_838742FC:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83874314
	if (!cr6.eq) goto loc_83874314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x83874314;
	sub_82EF1A10(ctx, base);
loc_83874314:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ef1940
	ctx.lr = 0x83874338;
	sub_82EF1940(ctx, base);
	// b 0x838743ac
	goto loc_838743AC;
loc_8387433C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83874370
	if (!cr6.eq) goto loc_83874370;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x838743ac
	goto loc_838743AC;
loc_83874370:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83874388
	if (!cr6.eq) goto loc_83874388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef1940
	ctx.lr = 0x83874388;
	sub_82EF1940(ctx, base);
loc_83874388:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ef1a10
	ctx.lr = 0x838743AC;
	sub_82EF1A10(ctx, base);
loc_838743AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838742b4
	if (cr6.eq) goto loc_838742B4;
loc_838743BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838743D8"))) PPC_WEAK_FUNC(sub_838743D8);
PPC_FUNC_IMPL(__imp__sub_838743D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838743E0;
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
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x83874410;
	sub_82B64B88(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// bl 0x82abc660
	ctx.lr = 0x83874434;
	sub_82ABC660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83874440"))) PPC_WEAK_FUNC(sub_83874440);
PPC_FUNC_IMPL(__imp__sub_83874440) {
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
	// lwz r6,1108(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,1104
	ctx.r4.s64 = ctx.r3.s64 + 1104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ef9a28
	ctx.lr = 0x8387446C;
	sub_82EF9A28(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,1108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x83874480;
	sub_825952B8(ctx, base);
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ef9a28
	ctx.lr = 0x83874494;
	sub_82EF9A28(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,1092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x825952b8
	ctx.lr = 0x838744A4;
	sub_825952B8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,32068
	ctx.r10.s64 = ctx.r11.s64 + 32068;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838744CC"))) PPC_WEAK_FUNC(sub_838744CC);
PPC_FUNC_IMPL(__imp__sub_838744CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838744D0"))) PPC_WEAK_FUNC(sub_838744D0);
PPC_FUNC_IMPL(__imp__sub_838744D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838744D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 49);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874500
	if (cr6.eq) goto loc_83874500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x83874500;
	sub_831CC188(ctx, base);
loc_83874500:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83871bf8
	ctx.lr = 0x8387450C;
	sub_83871BF8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x83874528
	if (cr6.eq) goto loc_83874528;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x8387454c
	goto loc_8387454C;
loc_83874528:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83874540
	if (cr6.eq) goto loc_83874540;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8387454c
	goto loc_8387454C;
loc_83874540:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x83874638
	if (!cr6.eq) goto loc_83874638;
loc_8387454C:
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83874560
	if (!cr6.eq) goto loc_83874560;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83874560:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83874578
	if (!cr6.eq) goto loc_83874578;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x83874590
	goto loc_83874590;
loc_83874578:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x8387458c
	if (!cr6.eq) goto loc_8387458C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83874590
	goto loc_83874590;
loc_8387458C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_83874590:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x838745e0
	if (!cr6.eq) goto loc_838745E0;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838745b4
	if (cr6.eq) goto loc_838745B4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x838745dc
	goto loc_838745DC;
loc_838745B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838745dc
	if (!cr6.eq) goto loc_838745DC;
loc_838745C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838745c8
	if (cr6.eq) goto loc_838745C8;
loc_838745DC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_838745E0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x838746cc
	if (!cr6.eq) goto loc_838746CC;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874608
	if (cr6.eq) goto loc_83874608;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x838746cc
	goto loc_838746CC;
loc_83874608:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83874630
	if (!cr6.eq) goto loc_83874630;
loc_8387461C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8387461c
	if (cr6.eq) goto loc_8387461C;
loc_83874630:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x838746cc
	goto loc_838746CC;
loc_83874638:
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
	// bne cr6,0x83874658
	if (!cr6.eq) goto loc_83874658;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83874680
	goto loc_83874680;
loc_83874658:
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387466c
	if (!cr6.eq) goto loc_8387466C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8387466C:
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
loc_83874680:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83874698
	if (!cr6.eq) goto loc_83874698;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x838746b4
	goto loc_838746B4;
loc_83874698:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x838746b0
	if (!cr6.eq) goto loc_838746B0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x838746b4
	goto loc_838746B4;
loc_838746B0:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_838746B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// lbz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 48);
	// stb r9,48(r25)
	PPC_STORE_U8(ctx.r25.u32 + 48, ctx.r9.u8);
	// stb r10,48(r26)
	PPC_STORE_U8(ctx.r26.u32 + 48, ctx.r10.u8);
loc_838746CC:
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83874864
	if (!cr6.eq) goto loc_83874864;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x83874860
	if (cr6.eq) goto loc_83874860;
loc_838746F0:
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83874860
	if (!cr6.eq) goto loc_83874860;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x838747a8
	if (!cr6.eq) goto loc_838747A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83874730
	if (!cr6.eq) goto loc_83874730;
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x8387472C;
	sub_82EF1A10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83874730:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838747fc
	if (!cr6.eq) goto loc_838747FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8387475c
	if (!cr6.eq) goto loc_8387475C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x838747f8
	if (cr6.eq) goto loc_838747F8;
loc_8387475C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83874784
	if (!cr6.eq) goto loc_83874784;
	// stb r30,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1940
	ctx.lr = 0x83874780;
	sub_82EF1940(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83874784:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r30.u8);
	// bl 0x82ef1a10
	ctx.lr = 0x838747A4;
	sub_82EF1A10(ctx, base);
	// b 0x83874860
	goto loc_83874860;
loc_838747A8:
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838747cc
	if (!cr6.eq) goto loc_838747CC;
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1940
	ctx.lr = 0x838747C8;
	sub_82EF1940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_838747CC:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838747fc
	if (!cr6.eq) goto loc_838747FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83874818
	if (!cr6.eq) goto loc_83874818;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83874818
	if (!cr6.eq) goto loc_83874818;
loc_838747F8:
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
loc_838747FC:
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
	// bne cr6,0x838746f0
	if (!cr6.eq) goto loc_838746F0;
	// b 0x83874860
	goto loc_83874860;
loc_83874818:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83874840
	if (!cr6.eq) goto loc_83874840;
	// stb r30,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x8387483C;
	sub_82EF1A10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83874840:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r30.u8);
	// bl 0x82ef1940
	ctx.lr = 0x83874860;
	sub_82EF1940(ctx, base);
loc_83874860:
	// stb r30,48(r28)
	PPC_STORE_U8(ctx.r28.u32 + 48, ctx.r30.u8);
loc_83874864:
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83874884
	if (cr6.eq) goto loc_83874884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83874884;
	sub_825952B8(ctx, base);
loc_83874884:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838748a0
	if (cr6.eq) goto loc_838748A0;
	// bl 0x8259b510
	ctx.lr = 0x838748A0;
	sub_8259B510(ctx, base);
loc_838748A0:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x838748B0;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838748c4
	if (cr6.eq) goto loc_838748C4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_838748C4:
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

__attribute__((alias("__imp__sub_838748D4"))) PPC_WEAK_FUNC(sub_838748D4);
PPC_FUNC_IMPL(__imp__sub_838748D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838748D8"))) PPC_WEAK_FUNC(sub_838748D8);
PPC_FUNC_IMPL(__imp__sub_838748D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838748E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 49);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387496c
	if (!cr6.eq) goto loc_8387496C;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83874904:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x838748d8
	ctx.lr = 0x83874910;
	sub_838748D8(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x83874930
	if (cr6.eq) goto loc_83874930;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83874930;
	sub_825952B8(ctx, base);
loc_83874930:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8387494c
	if (cr6.eq) goto loc_8387494C;
	// bl 0x8259b510
	ctx.lr = 0x8387494C;
	sub_8259B510(ctx, base);
loc_8387494C:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8387495C;
	sub_825952B8(ctx, base);
	// lbz r11,49(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874904
	if (cr6.eq) goto loc_83874904;
loc_8387496C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83874974"))) PPC_WEAK_FUNC(sub_83874974);
PPC_FUNC_IMPL(__imp__sub_83874974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874978"))) PPC_WEAK_FUNC(sub_83874978);
PPC_FUNC_IMPL(__imp__sub_83874978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83874980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x838749AC;
	sub_82B64B88(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lbz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// bl 0x82abc660
	ctx.lr = 0x838749D0;
	sub_82ABC660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838749DC"))) PPC_WEAK_FUNC(sub_838749DC);
PPC_FUNC_IMPL(__imp__sub_838749DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838749E0"))) PPC_WEAK_FUNC(sub_838749E0);
PPC_FUNC_IMPL(__imp__sub_838749E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838749E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83874a70
	if (!cr6.eq) goto loc_83874A70;
	// lbz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83874A24:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83874a40
	if (cr6.eq) goto loc_83874A40;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83874a4c
	goto loc_83874A4C;
loc_83874A40:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_83874A4C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83874a60
	if (cr6.eq) goto loc_83874A60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83874a64
	goto loc_83874A64;
loc_83874A60:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83874A64:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83874a24
	if (cr6.eq) goto loc_83874A24;
loc_83874A70:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874ad0
	if (cr6.eq) goto loc_83874AD0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83874ac8
	if (!cr6.eq) goto loc_83874AC8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x838741d0
	ctx.lr = 0x83874AAC;
	sub_838741D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83874AC8:
	// bl 0x82ef1898
	ctx.lr = 0x83874ACC;
	sub_82EF1898(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83874AD0:
	// lbz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83874b14
	if (!cr6.lt) goto loc_83874B14;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838741d0
	ctx.lr = 0x83874AF8;
	sub_838741D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83874B14:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x83874168
	ctx.lr = 0x83874B20;
	sub_83874168(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83874B34;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83874B4C"))) PPC_WEAK_FUNC(sub_83874B4C);
PPC_FUNC_IMPL(__imp__sub_83874B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874B50"))) PPC_WEAK_FUNC(sub_83874B50);
PPC_FUNC_IMPL(__imp__sub_83874B50) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x83874bbc
	if (cr6.eq) goto loc_83874BBC;
loc_83874B7C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x838799e0
	ctx.lr = 0x83874B84;
	sub_838799E0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x83874ba8
	if (!cr6.eq) goto loc_83874BA8;
	// bl 0x83871bf8
	ctx.lr = 0x83874B94;
	sub_83871BF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838744d0
	ctx.lr = 0x83874BA4;
	sub_838744D0(ctx, base);
	// b 0x83874bac
	goto loc_83874BAC;
loc_83874BA8:
	// bl 0x83871bf8
	ctx.lr = 0x83874BAC;
	sub_83871BF8(ctx, base);
loc_83874BAC:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83874b7c
	if (!cr6.eq) goto loc_83874B7C;
loc_83874BBC:
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

__attribute__((alias("__imp__sub_83874BD8"))) PPC_WEAK_FUNC(sub_83874BD8);
PPC_FUNC_IMPL(__imp__sub_83874BD8) {
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
	// bl 0x838748d8
	ctx.lr = 0x83874BF8;
	sub_838748D8(ctx, base);
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

__attribute__((alias("__imp__sub_83874C2C"))) PPC_WEAK_FUNC(sub_83874C2C);
PPC_FUNC_IMPL(__imp__sub_83874C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874C30"))) PPC_WEAK_FUNC(sub_83874C30);
PPC_FUNC_IMPL(__imp__sub_83874C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83874C38;
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
	// bne cr6,0x83874c84
	if (!cr6.eq) goto loc_83874C84;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x83874c84
	if (!cr6.eq) goto loc_83874C84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83874bd8
	ctx.lr = 0x83874C6C;
	sub_83874BD8(ctx, base);
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
loc_83874C84:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x83874cb4
	if (cr6.eq) goto loc_83874CB4;
loc_83874C8C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83871bf8
	ctx.lr = 0x83874C98;
	sub_83871BF8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838744d0
	ctx.lr = 0x83874CA8;
	sub_838744D0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x83874c8c
	if (!cr6.eq) goto loc_83874C8C;
loc_83874CB4:
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

__attribute__((alias("__imp__sub_83874CC4"))) PPC_WEAK_FUNC(sub_83874CC4);
PPC_FUNC_IMPL(__imp__sub_83874CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874CC8"))) PPC_WEAK_FUNC(sub_83874CC8);
PPC_FUNC_IMPL(__imp__sub_83874CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83874CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r30,r5,4
	ctx.r30.s64 = ctx.r5.s64 + 4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x83874CFC;
	sub_82B64B88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// bl 0x82abc660
	ctx.lr = 0x83874D1C;
	sub_82ABC660(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83874d30
	if (cr6.eq) goto loc_83874D30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838743d8
	ctx.lr = 0x83874D30;
	sub_838743D8(ctx, base);
loc_83874D30:
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83874d4c
	if (cr6.eq) goto loc_83874D4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83874D4C;
	sub_825952B8(ctx, base);
loc_83874D4C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874d5c
	if (cr6.eq) goto loc_83874D5C;
	// bl 0x8259b510
	ctx.lr = 0x83874D5C;
	sub_8259B510(ctx, base);
loc_83874D5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83874D64"))) PPC_WEAK_FUNC(sub_83874D64);
PPC_FUNC_IMPL(__imp__sub_83874D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874D68"))) PPC_WEAK_FUNC(sub_83874D68);
PPC_FUNC_IMPL(__imp__sub_83874D68) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83874dd8
	if (cr6.eq) goto loc_83874DD8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83874dd8
	if (cr6.eq) goto loc_83874DD8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83874dd8
	if (cr6.eq) goto loc_83874DD8;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x83874bd8
	ctx.lr = 0x83874DA0;
	sub_83874BD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// bl 0x83131d70
	ctx.lr = 0x83874DC0;
	sub_83131D70(ctx, base);
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
loc_83874DD8:
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

__attribute__((alias("__imp__sub_83874DF0"))) PPC_WEAK_FUNC(sub_83874DF0);
PPC_FUNC_IMPL(__imp__sub_83874DF0) {
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
	// bl 0x83874b50
	ctx.lr = 0x83874E08;
	sub_83874B50(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83874e20
	if (!cr6.eq) goto loc_83874E20;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x83874E20;
	sub_83131D70(ctx, base);
loc_83874E20:
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

__attribute__((alias("__imp__sub_83874E38"))) PPC_WEAK_FUNC(sub_83874E38);
PPC_FUNC_IMPL(__imp__sub_83874E38) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838748d8
	ctx.lr = 0x83874E5C;
	sub_838748D8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// bl 0x83131d70
	ctx.lr = 0x83874E98;
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
}

__attribute__((alias("__imp__sub_83874EAC"))) PPC_WEAK_FUNC(sub_83874EAC);
PPC_FUNC_IMPL(__imp__sub_83874EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874EB0"))) PPC_WEAK_FUNC(sub_83874EB0);
PPC_FUNC_IMPL(__imp__sub_83874EB0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x838799a0
	ctx.lr = 0x83874EDC;
	sub_838799A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874ef8
	if (cr6.eq) goto loc_83874EF8;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x83874f04
	if (cr6.eq) goto loc_83874F04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83874e38
	ctx.lr = 0x83874EF4;
	sub_83874E38(ctx, base);
	// b 0x83874f00
	goto loc_83874F00;
loc_83874EF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83874f04
	if (cr6.eq) goto loc_83874F04;
loc_83874F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83874F04:
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

__attribute__((alias("__imp__sub_83874F1C"))) PPC_WEAK_FUNC(sub_83874F1C);
PPC_FUNC_IMPL(__imp__sub_83874F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83874F20"))) PPC_WEAK_FUNC(sub_83874F20);
PPC_FUNC_IMPL(__imp__sub_83874F20) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83875e30
	ctx.lr = 0x83874F48;
	sub_83875E30(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83873120
	ctx.lr = 0x83874F5C;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83874f7c
	if (cr6.eq) goto loc_83874F7C;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83884cc0
	ctx.lr = 0x83874F78;
	sub_83884CC0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83874F7C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83874fc4
	if (cr6.eq) goto loc_83874FC4;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838799c0
	ctx.lr = 0x83874F98;
	sub_838799C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874fdc
	if (cr6.eq) goto loc_83874FDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83873c88
	ctx.lr = 0x83874FB0;
	sub_83873C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83874fdc
	if (!cr6.eq) goto loc_83874FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874e38
	ctx.lr = 0x83874FC4;
	sub_83874E38(ctx, base);
loc_83874FC4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874fd4
	if (cr6.eq) goto loc_83874FD4;
	// bl 0x8259b510
	ctx.lr = 0x83874FD4;
	sub_8259B510(ctx, base);
loc_83874FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83874ff0
	goto loc_83874FF0;
loc_83874FDC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83874fec
	if (cr6.eq) goto loc_83874FEC;
	// bl 0x8259b510
	ctx.lr = 0x83874FEC;
	sub_8259B510(ctx, base);
loc_83874FEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83874FF0:
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
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

__attribute__((alias("__imp__sub_83875008"))) PPC_WEAK_FUNC(sub_83875008);
PPC_FUNC_IMPL(__imp__sub_83875008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83875010;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83871f58
	ctx.lr = 0x83875028;
	sub_83871F58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83872360
	ctx.lr = 0x8387504C;
	sub_83872360(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83874c30
	ctx.lr = 0x83875060;
	sub_83874C30(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8387506C"))) PPC_WEAK_FUNC(sub_8387506C);
PPC_FUNC_IMPL(__imp__sub_8387506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875070"))) PPC_WEAK_FUNC(sub_83875070);
PPC_FUNC_IMPL(__imp__sub_83875070) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,127
	ctx.r3.s64 = ctx.r1.s64 + 127;
	// bl 0x83875e50
	ctx.lr = 0x83875090;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838750b4
	if (!cr6.eq) goto loc_838750B4;
loc_8387509C:
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
loc_838750B4:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387509c
	if (cr6.eq) goto loc_8387509C;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x838736a0
	ctx.lr = 0x838750CC;
	sub_838736A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8387509c
	if (cr6.eq) goto loc_8387509C;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83875008
	ctx.lr = 0x838750E0;
	sub_83875008(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838750FC"))) PPC_WEAK_FUNC(sub_838750FC);
PPC_FUNC_IMPL(__imp__sub_838750FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875100"))) PPC_WEAK_FUNC(sub_83875100);
PPC_FUNC_IMPL(__imp__sub_83875100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83875108;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r4,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r4.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387519c
	if (cr6.eq) goto loc_8387519C;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// bl 0x83875e50
	ctx.lr = 0x83875130;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387519c
	if (cr6.eq) goto loc_8387519C;
	// addi r5,r1,159
	ctx.r5.s64 = ctx.r1.s64 + 159;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83873120
	ctx.lr = 0x8387514C;
	sub_83873120(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8387519c
	if (cr6.eq) goto loc_8387519C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83875170
	if (cr6.eq) goto loc_83875170;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8387519c
	if (!cr6.eq) goto loc_8387519C;
loc_83875170:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874eb0
	ctx.lr = 0x83875184;
	sub_83874EB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838751a0
	if (cr6.eq) goto loc_838751A0;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838751a0
	if (cr6.eq) goto loc_838751A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874e38
	ctx.lr = 0x8387519C;
	sub_83874E38(ctx, base);
loc_8387519C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838751A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838751A8"))) PPC_WEAK_FUNC(sub_838751A8);
PPC_FUNC_IMPL(__imp__sub_838751A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838751B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r5,2263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2263, ctx.r5.u8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875344
	if (cr6.eq) goto loc_83875344;
	// addi r3,r1,2263
	ctx.r3.s64 = ctx.r1.s64 + 2263;
	// bl 0x83875e50
	ctx.lr = 0x838751DC;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875344
	if (cr6.eq) goto loc_83875344;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83873070
	ctx.lr = 0x83875200;
	sub_83873070(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83875344
	if (cr6.eq) goto loc_83875344;
	// addi r5,r1,2263
	ctx.r5.s64 = ctx.r1.s64 + 2263;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83873120
	ctx.lr = 0x8387521C;
	sub_83873120(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x83875344
	if (cr6.eq) goto loc_83875344;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8387530c
	if (cr6.lt) goto loc_8387530C;
	// bne cr6,0x83875344
	if (!cr6.eq) goto loc_83875344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83873328
	ctx.lr = 0x83875244;
	sub_83873328(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875280
	if (!cr6.eq) goto loc_83875280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83879e08
	ctx.lr = 0x83875260;
	sub_83879E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387529c
	if (!cr6.eq) goto loc_8387529C;
loc_8387526C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x83875274;
	sub_8387E638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83875280:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83879ea8
	ctx.lr = 0x83875290;
	sub_83879EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838752e4
	if (cr6.eq) goto loc_838752E4;
loc_8387529C:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83879d98
	ctx.lr = 0x838752AC;
	sub_83879D98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8387526c
	if (cr6.eq) goto loc_8387526C;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874eb0
	ctx.lr = 0x838752CC;
	sub_83874EB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8387526c
	if (cr6.eq) goto loc_8387526C;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838752f8
	if (cr6.eq) goto loc_838752F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874e38
	ctx.lr = 0x838752E4;
	sub_83874E38(ctx, base);
loc_838752E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x838752EC;
	sub_8387E638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838752F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x83875300;
	sub_8387E638(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8387530C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875344
	if (!cr6.eq) goto loc_83875344;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874eb0
	ctx.lr = 0x8387532C;
	sub_83874EB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83875348
	if (cr6.eq) goto loc_83875348;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// beq cr6,0x83875348
	if (cr6.eq) goto loc_83875348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874e38
	ctx.lr = 0x83875344;
	sub_83874E38(ctx, base);
loc_83875344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83875348:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875350"))) PPC_WEAK_FUNC(sub_83875350);
PPC_FUNC_IMPL(__imp__sub_83875350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83875358;
	__savegprlr_25(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r5,2279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2279, ctx.r5.u8);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875514
	if (cr6.eq) goto loc_83875514;
	// addi r3,r1,2279
	ctx.r3.s64 = ctx.r1.s64 + 2279;
	// bl 0x83875e50
	ctx.lr = 0x83875384;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875514
	if (cr6.eq) goto loc_83875514;
	// addi r5,r1,2279
	ctx.r5.s64 = ctx.r1.s64 + 2279;
	// addi r4,r27,80
	ctx.r4.s64 = ctx.r27.s64 + 80;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x83873120
	ctx.lr = 0x838753A0;
	sub_83873120(ctx, base);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83875514
	if (cr6.eq) goto loc_83875514;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83875428
	if (cr6.eq) goto loc_83875428;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83875514
	if (cr6.gt) goto loc_83875514;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x831ce420
	ctx.lr = 0x838753EC;
	sub_831CE420(ctx, base);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8387541c
	if (cr6.eq) goto loc_8387541C;
	// subf r30,r4,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x83875414;
	sub_831CE420(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8387541C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83875428:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8387545c
	if (!cr6.eq) goto loc_8387545C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x838799c0
	ctx.lr = 0x83875444;
	sub_838799C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838755d0
	if (cr6.eq) goto loc_838755D0;
	// lbz r11,49(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 49);
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8387545C:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x838799c0
	ctx.lr = 0x83875468;
	sub_838799C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83875514
	if (cr6.eq) goto loc_83875514;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387a130
	ctx.lr = 0x83875490;
	sub_8387A130(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x8387550c
	if (!cr6.eq) goto loc_8387550C;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8387550c
	if (!cr6.eq) goto loc_8387550C;
	// lbz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838754cc
	if (cr6.eq) goto loc_838754CC;
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x838754d4
	goto loc_838754D4;
loc_838754CC:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_838754D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387550c
	if (cr6.eq) goto loc_8387550C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// ble cr6,0x83875590
	if (!cr6.gt) goto loc_83875590;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83875520
	if (cr6.eq) goto loc_83875520;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83874e38
	ctx.lr = 0x8387550C;
	sub_83874E38(ctx, base);
loc_8387550C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x83875514;
	sub_8387E638(ctx, base);
loc_83875514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83875520:
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83875550
	if (cr6.eq) goto loc_83875550;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83875548
	if (!cr0.eq) goto loc_83875548;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83875548;
	sub_831CC188(ctx, base);
loc_83875548:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83875554
	goto loc_83875554;
loc_83875550:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83875554:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8387557c
	if (cr6.eq) goto loc_8387557C;
loc_83875564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833eab80
	ctx.lr = 0x83875570;
	sub_833EAB80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83875564
	if (!cr6.eq) goto loc_83875564;
loc_8387557C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x83875584;
	sub_8387E638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83875590:
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x838755b0
	if (cr6.eq) goto loc_838755B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x838755b4
	if (!cr6.eq) goto loc_838755B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x838755B0;
	sub_831CC188(ctx, base);
loc_838755B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_838755B4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x838755C4;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e638
	ctx.lr = 0x838755CC;
	sub_8387E638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_838755D0:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838755D8"))) PPC_WEAK_FUNC(sub_838755D8);
PPC_FUNC_IMPL(__imp__sub_838755D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838755E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875624
	if (!cr6.eq) goto loc_83875624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x8387a8b0
	ctx.lr = 0x83875604;
	sub_8387A8B0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// std r8,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r8.u64);
loc_83875624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83873478
	ctx.lr = 0x8387562C;
	sub_83873478(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875674
	if (!cr6.eq) goto loc_83875674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83873530
	ctx.lr = 0x83875640;
	sub_83873530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875674
	if (!cr6.eq) goto loc_83875674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838735e8
	ctx.lr = 0x83875654;
	sub_838735E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875730
	if (!cr6.eq) goto loc_83875730;
	// bl 0x83874d68
	ctx.lr = 0x83875668;
	sub_83874D68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83875674:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875698
	if (cr6.eq) goto loc_83875698;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875698
	if (cr6.eq) goto loc_83875698;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// b 0x8387569c
	goto loc_8387569C;
loc_83875698:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8387569C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874f20
	ctx.lr = 0x838756A4;
	sub_83874F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838756f8
	if (cr6.eq) goto loc_838756F8;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838756d4
	if (cr6.eq) goto loc_838756D4;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838756d4
	if (cr6.eq) goto loc_838756D4;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x838756d8
	goto loc_838756D8;
loc_838756D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_838756D8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x838756f8
	if (cr6.eq) goto loc_838756F8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x838756EC;
	sub_83131D70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838756F8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875718
	if (!cr6.eq) goto loc_83875718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874e38
	ctx.lr = 0x8387570C;
	sub_83874E38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83875718:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8387a7c8
	ctx.lr = 0x83875720;
	sub_8387A7C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875734
	if (cr6.eq) goto loc_83875734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83875730:
	// bl 0x83874e38
	ctx.lr = 0x83875734;
	sub_83874E38(ctx, base);
loc_83875734:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875740"))) PPC_WEAK_FUNC(sub_83875740);
PPC_FUNC_IMPL(__imp__sub_83875740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83875748;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83875770;
	sub_82595718(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
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
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// bl 0x83874cc8
	ctx.lr = 0x838757A8;
	sub_83874CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838749e0
	ctx.lr = 0x838757BC;
	sub_838749E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838757C8"))) PPC_WEAK_FUNC(sub_838757C8);
PPC_FUNC_IMPL(__imp__sub_838757C8) {
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
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x83874c30
	ctx.lr = 0x838757F4;
	sub_83874C30(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x83875808;
	sub_825952B8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83875828
	if (cr6.lt) goto loc_83875828;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83875828;
	sub_825952B8(ctx, base);
loc_83875828:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83875854"))) PPC_WEAK_FUNC(sub_83875854);
PPC_FUNC_IMPL(__imp__sub_83875854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875858"))) PPC_WEAK_FUNC(sub_83875858);
PPC_FUNC_IMPL(__imp__sub_83875858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83875860;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83875884
	if (cr6.eq) goto loc_83875884;
	// bl 0x83874e38
	ctx.lr = 0x83875884;
	sub_83874E38(ctx, base);
loc_83875884:
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x83874440
	ctx.lr = 0x8387588C;
	sub_83874440(ctx, base);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x838731a8
	ctx.lr = 0x838758A0;
	sub_838731A8(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x838758B4;
	sub_825952B8(ctx, base);
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x838758C8;
	sub_82D0E798(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x838758D8;
	sub_825952B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x838757c8
	ctx.lr = 0x838758E0;
	sub_838757C8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83875900
	if (cr6.lt) goto loc_83875900;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83875900;
	sub_825952B8(ctx, base);
loc_83875900:
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
	// bl 0x83875e20
	ctx.lr = 0x8387591C;
	sub_83875E20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875924"))) PPC_WEAK_FUNC(sub_83875924);
PPC_FUNC_IMPL(__imp__sub_83875924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875928"))) PPC_WEAK_FUNC(sub_83875928);
PPC_FUNC_IMPL(__imp__sub_83875928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83875930;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83875a58
	if (!cr6.eq) goto loc_83875A58;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875a58
	if (cr6.eq) goto loc_83875A58;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x8259cb28
	ctx.lr = 0x83875974;
	sub_8259CB28(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824eecc0
	ctx.lr = 0x8387597C;
	sub_824EECC0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83875e38
	ctx.lr = 0x83875984;
	sub_83875E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875a58
	if (cr6.eq) goto loc_83875A58;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x83875e30
	ctx.lr = 0x8387599C;
	sub_83875E30(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8387b0b8
	ctx.lr = 0x838759B0;
	sub_8387B0B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875a08
	if (cr6.eq) goto loc_83875A08;
	// bl 0x83875e30
	ctx.lr = 0x838759C0;
	sub_83875E30(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x83873708
	ctx.lr = 0x838759D8;
	sub_83873708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83874978
	ctx.lr = 0x838759E8;
	sub_83874978(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83875740
	ctx.lr = 0x838759F8;
	sub_83875740(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x83875a0c
	if (!cr6.eq) goto loc_83875A0C;
loc_83875A08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83875A0C:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83875a28
	if (cr6.eq) goto loc_83875A28;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x83873778
	ctx.lr = 0x83875A28;
	sub_83873778(ctx, base);
loc_83875A28:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83875a3c
	if (cr6.eq) goto loc_83875A3C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838733a0
	ctx.lr = 0x83875A3C;
	sub_838733A0(ctx, base);
loc_83875A3C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875a64
	if (cr6.eq) goto loc_83875A64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83875a58
	if (cr6.eq) goto loc_83875A58;
	// bl 0x8259b510
	ctx.lr = 0x83875A58;
	sub_8259B510(ctx, base);
loc_83875A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83875A64:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x83875A70;
	sub_83131D70(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83875a80
	if (cr6.eq) goto loc_83875A80;
	// bl 0x8259b510
	ctx.lr = 0x83875A80;
	sub_8259B510(ctx, base);
loc_83875A80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875A8C"))) PPC_WEAK_FUNC(sub_83875A8C);
PPC_FUNC_IMPL(__imp__sub_83875A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875A90"))) PPC_WEAK_FUNC(sub_83875A90);
PPC_FUNC_IMPL(__imp__sub_83875A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83875A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875ab8
	if (!cr6.eq) goto loc_83875AB8;
loc_83875AAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83875AB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83875aac
	if (!cr6.eq) goto loc_83875AAC;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x83875bc4
	if (cr6.eq) goto loc_83875BC4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83875ADC:
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83875e50
	ctx.lr = 0x83875AE8;
	sub_83875E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875b10
	if (!cr6.eq) goto loc_83875B10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83875AFC;
	sub_8330EE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d0e3c8
	ctx.lr = 0x83875B0C;
	sub_82D0E3C8(ctx, base);
	// b 0x83875bb4
	goto loc_83875BB4;
loc_83875B10:
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83873120
	ctx.lr = 0x83875B24;
	sub_83873120(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83875bac
	if (!cr6.eq) goto loc_83875BAC;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8387b1e8
	ctx.lr = 0x83875B50;
	sub_8387B1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875b9c
	if (cr6.eq) goto loc_83875B9C;
	// addi r5,r28,16
	ctx.r5.s64 = ctx.r28.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83873708
	ctx.lr = 0x83875B6C;
	sub_83873708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83874978
	ctx.lr = 0x83875B7C;
	sub_83874978(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83875740
	ctx.lr = 0x83875B8C;
	sub_83875740(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83873778
	ctx.lr = 0x83875B94;
	sub_83873778(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838733a0
	ctx.lr = 0x83875B9C;
	sub_838733A0(ctx, base);
loc_83875B9C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83875bac
	if (cr6.eq) goto loc_83875BAC;
	// bl 0x8259b510
	ctx.lr = 0x83875BAC;
	sub_8259B510(ctx, base);
loc_83875BAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83875BB4;
	sub_8330EE50(ctx, base);
loc_83875BB4:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83875adc
	if (!cr6.eq) goto loc_83875ADC;
loc_83875BC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875BD0"))) PPC_WEAK_FUNC(sub_83875BD0);
PPC_FUNC_IMPL(__imp__sub_83875BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83875BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83875de0
	ctx.lr = 0x83875BE8;
	sub_83875DE0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x8259cb28
	ctx.lr = 0x83875C28;
	sub_8259CB28(ctx, base);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r30.u8);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83872018
	ctx.lr = 0x83875C50;
	sub_83872018(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387a860
	ctx.lr = 0x83875C58;
	sub_8387A860(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r7.u64);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// ld r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x8381b9d0
	ctx.lr = 0x83875C8C;
	sub_8381B9D0(ctx, base);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stb r30,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r30.u8);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83872090
	ctx.lr = 0x83875CA4;
	sub_83872090(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8387b028
	ctx.lr = 0x83875CAC;
	sub_8387B028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875CB8"))) PPC_WEAK_FUNC(sub_83875CB8);
PPC_FUNC_IMPL(__imp__sub_83875CB8) {
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
	// bl 0x83875858
	ctx.lr = 0x83875CD8;
	sub_83875858(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875cf0
	if (cr6.eq) goto loc_83875CF0;
	// bl 0x82416268
	ctx.lr = 0x83875CEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83875CF0:
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

__attribute__((alias("__imp__sub_83875D08"))) PPC_WEAK_FUNC(sub_83875D08);
PPC_FUNC_IMPL(__imp__sub_83875D08) {
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
	// bl 0x83873530
	ctx.lr = 0x83875D20;
	sub_83873530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875d7c
	if (!cr6.eq) goto loc_83875D7C;
	// bl 0x838735e8
	ctx.lr = 0x83875D34;
	sub_838735E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875d60
	if (cr6.eq) goto loc_83875D60;
	// bl 0x83874e38
	ctx.lr = 0x83875D48;
	sub_83874E38(ctx, base);
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
loc_83875D60:
	// bl 0x83874d68
	ctx.lr = 0x83875D64;
	sub_83874D68(ctx, base);
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
loc_83875D7C:
	// bl 0x83874f20
	ctx.lr = 0x83875D80;
	sub_83874F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875da4
	if (!cr6.eq) goto loc_83875DA4;
loc_83875D8C:
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
loc_83875DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83874b50
	ctx.lr = 0x83875DAC;
	sub_83874B50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875d8c
	if (cr6.eq) goto loc_83875D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83875a90
	ctx.lr = 0x83875DC0;
	sub_83875A90(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83875DE0"))) PPC_WEAK_FUNC(sub_83875DE0);
PPC_FUNC_IMPL(__imp__sub_83875DE0) {
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
	// bl 0x83879878
	ctx.lr = 0x83875DF8;
	sub_83879878(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83875E1C"))) PPC_WEAK_FUNC(sub_83875E1C);
PPC_FUNC_IMPL(__imp__sub_83875E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875E20"))) PPC_WEAK_FUNC(sub_83875E20);
PPC_FUNC_IMPL(__imp__sub_83875E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83879890
	sub_83879890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875E30"))) PPC_WEAK_FUNC(sub_83875E30);
PPC_FUNC_IMPL(__imp__sub_83875E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aabde8
	sub_82AABDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875E34"))) PPC_WEAK_FUNC(sub_83875E34);
PPC_FUNC_IMPL(__imp__sub_83875E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875E38"))) PPC_WEAK_FUNC(sub_83875E38);
PPC_FUNC_IMPL(__imp__sub_83875E38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83875E4C"))) PPC_WEAK_FUNC(sub_83875E4C);
PPC_FUNC_IMPL(__imp__sub_83875E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875E50"))) PPC_WEAK_FUNC(sub_83875E50);
PPC_FUNC_IMPL(__imp__sub_83875E50) {
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
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// bl 0x83879930
	ctx.lr = 0x83875E6C;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83875e90
	if (cr6.eq) goto loc_83875E90;
	// bl 0x82aabde8
	ctx.lr = 0x83875E7C;
	sub_82AABDE8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83875e94
	if (!cr6.eq) goto loc_83875E94;
loc_83875E90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83875E94:
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

__attribute__((alias("__imp__sub_83875EAC"))) PPC_WEAK_FUNC(sub_83875EAC);
PPC_FUNC_IMPL(__imp__sub_83875EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875EB0"))) PPC_WEAK_FUNC(sub_83875EB0);
PPC_FUNC_IMPL(__imp__sub_83875EB0) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83879890
	ctx.lr = 0x83875EDC;
	sub_83879890(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83875ef4
	if (cr6.eq) goto loc_83875EF4;
	// bl 0x82416268
	ctx.lr = 0x83875EF0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83875EF4:
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

__attribute__((alias("__imp__sub_83875F0C"))) PPC_WEAK_FUNC(sub_83875F0C);
PPC_FUNC_IMPL(__imp__sub_83875F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875F10"))) PPC_WEAK_FUNC(sub_83875F10);
PPC_FUNC_IMPL(__imp__sub_83875F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83875f24
	if (!cr6.eq) goto loc_83875F24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83875F24:
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83875F34"))) PPC_WEAK_FUNC(sub_83875F34);
PPC_FUNC_IMPL(__imp__sub_83875F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875F38"))) PPC_WEAK_FUNC(sub_83875F38);
PPC_FUNC_IMPL(__imp__sub_83875F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x83879930
	sub_83879930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83875F3C"))) PPC_WEAK_FUNC(sub_83875F3C);
PPC_FUNC_IMPL(__imp__sub_83875F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83875F40"))) PPC_WEAK_FUNC(sub_83875F40);
PPC_FUNC_IMPL(__imp__sub_83875F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83875F58"))) PPC_WEAK_FUNC(sub_83875F58);
PPC_FUNC_IMPL(__imp__sub_83875F58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83875F8C;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,64(r7)
	PPC_STORE_U8(ctx.r7.u32 + 64, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,65(r6)
	PPC_STORE_U8(ctx.r6.u32 + 65, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83875FD0"))) PPC_WEAK_FUNC(sub_83875FD0);
PPC_FUNC_IMPL(__imp__sub_83875FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83876010
	if (!cr6.eq) goto loc_83876010;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83875FE8:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83875ffc
	if (!cr6.lt) goto loc_83875FFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83876004
	goto loc_83876004;
loc_83875FFC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83876004:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83875fe8
	if (cr6.eq) goto loc_83875FE8;
loc_83876010:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83876040
	if (cr6.eq) goto loc_83876040;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83876040
	if (cr6.lt) goto loc_83876040;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83876040:
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

__attribute__((alias("__imp__sub_83876054"))) PPC_WEAK_FUNC(sub_83876054);
PPC_FUNC_IMPL(__imp__sub_83876054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876058"))) PPC_WEAK_FUNC(sub_83876058);
PPC_FUNC_IMPL(__imp__sub_83876058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83876098
	if (!cr6.eq) goto loc_83876098;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_83876070:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83876084
	if (!cr6.lt) goto loc_83876084;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8387608c
	goto loc_8387608C;
loc_83876084:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8387608C:
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83876070
	if (cr6.eq) goto loc_83876070;
loc_83876098:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x838760c8
	if (cr6.eq) goto loc_838760C8;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x838760c8
	if (cr6.lt) goto loc_838760C8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_838760C8:
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

__attribute__((alias("__imp__sub_838760DC"))) PPC_WEAK_FUNC(sub_838760DC);
PPC_FUNC_IMPL(__imp__sub_838760DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838760E0"))) PPC_WEAK_FUNC(sub_838760E0);
PPC_FUNC_IMPL(__imp__sub_838760E0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83876114
	if (cr6.lt) goto loc_83876114;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83876114;
	sub_825952B8(ctx, base);
loc_83876114:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8387613C"))) PPC_WEAK_FUNC(sub_8387613C);
PPC_FUNC_IMPL(__imp__sub_8387613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876140"))) PPC_WEAK_FUNC(sub_83876140);
PPC_FUNC_IMPL(__imp__sub_83876140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83876148;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r4,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r4.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83879930
	ctx.lr = 0x83876160;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838762f0
	if (cr6.eq) goto loc_838762F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83879930
	ctx.lr = 0x83876178;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838762f0
	if (cr6.eq) goto loc_838762F0;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x838762f0
	if (!cr6.eq) goto loc_838762F0;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x8387625c
	if (cr6.eq) goto loc_8387625C;
loc_838761BC:
	// addi r5,r1,207
	ctx.r5.s64 = ctx.r1.s64 + 207;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83875fd0
	ctx.lr = 0x838761CC;
	sub_83875FD0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838761e4
	if (!cr6.eq) goto loc_838761E4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_838761E4:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x838799e0
	ctx.lr = 0x838761EC;
	sub_838799E0(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x8387623c
	if (cr6.gt) goto loc_8387623C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83876218
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83876218;
	// bdzf 4*cr6+eq,0x83876220
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83876220;
	// bdzf 4*cr6+eq,0x83876228
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83876228;
	// bdzf 4*cr6+eq,0x83876230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83876230;
	// bne cr6,0x83876238
	if (!cr6.eq) goto loc_83876238;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_83876218:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_83876220:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_83876228:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_83876230:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x8387623c
	goto loc_8387623C;
loc_83876238:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8387623C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x83876244;
	sub_83355AC8(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x838761bc
	if (!cr6.eq) goto loc_838761BC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x838762f0
	if (!cr6.eq) goto loc_838762F0;
loc_8387625C:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83876280
	if (cr6.eq) goto loc_83876280;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83876280:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83876294
	if (cr6.eq) goto loc_83876294;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83876294:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838762b0
	if (cr6.eq) goto loc_838762B0;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x838762b0
	if (!cr6.eq) goto loc_838762B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838762B0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838762d4
	if (cr6.eq) goto loc_838762D4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x838762e4
	if (!cr6.eq) goto loc_838762E4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x838762e4
	if (!cr6.eq) goto loc_838762E4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838762D4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x838762e4
	if (!cr6.eq) goto loc_838762E4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x838762f0
	if (cr6.eq) goto loc_838762F0;
loc_838762E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838762F0:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838762FC"))) PPC_WEAK_FUNC(sub_838762FC);
PPC_FUNC_IMPL(__imp__sub_838762FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876300"))) PPC_WEAK_FUNC(sub_83876300);
PPC_FUNC_IMPL(__imp__sub_83876300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83876308;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r5,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r5.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83879930
	ctx.lr = 0x83876328;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876398
	if (cr6.eq) goto loc_83876398;
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x83876398
	if (cr6.eq) goto loc_83876398;
loc_83876348:
	// addi r5,r1,183
	ctx.r5.s64 = ctx.r1.s64 + 183;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83875fd0
	ctx.lr = 0x83876358;
	sub_83875FD0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83876380
	if (cr6.eq) goto loc_83876380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x838799c0
	ctx.lr = 0x83876378;
	sub_838799C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838763a4
	if (!cr6.eq) goto loc_838763A4;
loc_83876380:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x83876388;
	sub_83355AC8(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83876348
	if (!cr6.eq) goto loc_83876348;
loc_83876398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838763A4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838763B4"))) PPC_WEAK_FUNC(sub_838763B4);
PPC_FUNC_IMPL(__imp__sub_838763B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838763B8"))) PPC_WEAK_FUNC(sub_838763B8);
PPC_FUNC_IMPL(__imp__sub_838763B8) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// stb r6,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838763f0
	if (!cr6.eq) goto loc_838763F0;
loc_838763E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83876440
	goto loc_83876440;
loc_838763F0:
	// addi r5,r1,151
	ctx.r5.s64 = ctx.r1.s64 + 151;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83876058
	ctx.lr = 0x83876400;
	sub_83876058(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x838763e8
	if (cr6.eq) goto loc_838763E8;
	// addi r5,r1,159
	ctx.r5.s64 = ctx.r1.s64 + 159;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83875fd0
	ctx.lr = 0x83876420;
	sub_83875FD0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x838763e8
	if (cr6.eq) goto loc_838763E8;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83884cc0
	ctx.lr = 0x8387643C;
	sub_83884CC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83876440:
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

__attribute__((alias("__imp__sub_83876458"))) PPC_WEAK_FUNC(sub_83876458);
PPC_FUNC_IMPL(__imp__sub_83876458) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8387648c
	if (cr6.lt) goto loc_8387648C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8387648C;
	sub_825952B8(ctx, base);
loc_8387648C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_838764B4"))) PPC_WEAK_FUNC(sub_838764B4);
PPC_FUNC_IMPL(__imp__sub_838764B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838764B8"))) PPC_WEAK_FUNC(sub_838764B8);
PPC_FUNC_IMPL(__imp__sub_838764B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838764C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83879930
	ctx.lr = 0x838764E0;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876528
	if (cr6.eq) goto loc_83876528;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838763b8
	ctx.lr = 0x8387650C;
	sub_838763B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83876534
	if (!cr6.eq) goto loc_83876534;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83876528
	if (cr6.eq) goto loc_83876528;
	// bl 0x8259b510
	ctx.lr = 0x83876528;
	sub_8259B510(ctx, base);
loc_83876528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83876534:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838799c0
	ctx.lr = 0x83876544;
	sub_838799C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8387655c
	if (cr6.eq) goto loc_8387655C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x8387655C;
	sub_8259B510(ctx, base);
loc_8387655C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876568"))) PPC_WEAK_FUNC(sub_83876568);
PPC_FUNC_IMPL(__imp__sub_83876568) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8387659c
	if (!cr6.eq) goto loc_8387659C;
loc_83876594:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838765dc
	goto loc_838765DC;
loc_8387659C:
	// addi r5,r1,151
	ctx.r5.s64 = ctx.r1.s64 + 151;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83876058
	ctx.lr = 0x838765AC;
	sub_83876058(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83876594
	if (cr6.eq) goto loc_83876594;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83876594
	if (cr6.eq) goto loc_83876594;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83884cc0
	ctx.lr = 0x838765D8;
	sub_83884CC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_838765DC:
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

__attribute__((alias("__imp__sub_838765F4"))) PPC_WEAK_FUNC(sub_838765F4);
PPC_FUNC_IMPL(__imp__sub_838765F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838765F8"))) PPC_WEAK_FUNC(sub_838765F8);
PPC_FUNC_IMPL(__imp__sub_838765F8) {
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
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8387662C;
	sub_82B64B88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83876654
	if (cr6.eq) goto loc_83876654;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82b64b88
	ctx.lr = 0x83876654;
	sub_82B64B88(ctx, base);
loc_83876654:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83876664
	if (cr6.eq) goto loc_83876664;
	// bl 0x8259b510
	ctx.lr = 0x83876664;
	sub_8259B510(ctx, base);
loc_83876664:
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

__attribute__((alias("__imp__sub_83876678"))) PPC_WEAK_FUNC(sub_83876678);
PPC_FUNC_IMPL(__imp__sub_83876678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83876680;
	__savegprlr_29(ctx, base);
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838766A4;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// beq 0x838766f8
	if (cr0.eq) goto loc_838766F8;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// bl 0x82b64b88
	ctx.lr = 0x838766F8;
	sub_82B64B88(ctx, base);
loc_838766F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876704"))) PPC_WEAK_FUNC(sub_83876704);
PPC_FUNC_IMPL(__imp__sub_83876704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876708"))) PPC_WEAK_FUNC(sub_83876708);
PPC_FUNC_IMPL(__imp__sub_83876708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83876710;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876824
	if (cr6.eq) goto loc_83876824;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83876758
	if (cr6.eq) goto loc_83876758;
	// subf r28,r4,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x83876750;
	sub_831CE420(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83876758:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea8a8
	ctx.lr = 0x83876764;
	sub_833EA8A8(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83876770;
	sub_833EAB80(ctx, base);
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x838767a8
	if (cr6.eq) goto loc_838767A8;
loc_83876784:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x83876790;
	sub_833EAB80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x83876798;
	sub_83355AC8(ctx, base);
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83876784
	if (!cr6.eq) goto loc_83876784;
loc_838767A8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// bl 0x83873838
	ctx.lr = 0x838767B8;
	sub_83873838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83871da8
	ctx.lr = 0x838767C8;
	sub_83871DA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838767f0
	if (cr6.eq) goto loc_838767F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x838767E8;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_838767F0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x83876830
	if (cr6.eq) goto loc_83876830;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83876824
	if (cr6.eq) goto loc_83876824;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x8387681C;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83876824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83876830:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8387683C"))) PPC_WEAK_FUNC(sub_8387683C);
PPC_FUNC_IMPL(__imp__sub_8387683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876840"))) PPC_WEAK_FUNC(sub_83876840);
PPC_FUNC_IMPL(__imp__sub_83876840) {
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
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x83876884;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_8387689C"))) PPC_WEAK_FUNC(sub_8387689C);
PPC_FUNC_IMPL(__imp__sub_8387689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838768A0"))) PPC_WEAK_FUNC(sub_838768A0);
PPC_FUNC_IMPL(__imp__sub_838768A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838768A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 25);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838768d0
	if (cr6.eq) goto loc_838768D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x838768D0;
	sub_831CC188(ctx, base);
loc_838768D0:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x833ccd48
	ctx.lr = 0x838768DC;
	sub_833CCD48(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x838768f8
	if (cr6.eq) goto loc_838768F8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x8387691c
	goto loc_8387691C;
loc_838768F8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,25(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83876910
	if (cr6.eq) goto loc_83876910;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8387691c
	goto loc_8387691C;
loc_83876910:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x83876a08
	if (!cr6.eq) goto loc_83876A08;
loc_8387691C:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83876930
	if (!cr6.eq) goto loc_83876930;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83876930:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83876948
	if (!cr6.eq) goto loc_83876948;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x83876960
	goto loc_83876960;
loc_83876948:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x8387695c
	if (!cr6.eq) goto loc_8387695C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83876960
	goto loc_83876960;
loc_8387695C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_83876960:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x838769b0
	if (!cr6.eq) goto loc_838769B0;
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876984
	if (cr6.eq) goto loc_83876984;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x838769ac
	goto loc_838769AC;
loc_83876984:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838769ac
	if (!cr6.eq) goto loc_838769AC;
loc_83876998:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83876998
	if (cr6.eq) goto loc_83876998;
loc_838769AC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_838769B0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83876a9c
	if (!cr6.eq) goto loc_83876A9C;
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838769d8
	if (cr6.eq) goto loc_838769D8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x83876a9c
	goto loc_83876A9C;
loc_838769D8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83876a00
	if (!cr6.eq) goto loc_83876A00;
loc_838769EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838769ec
	if (cr6.eq) goto loc_838769EC;
loc_83876A00:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x83876a9c
	goto loc_83876A9C;
loc_83876A08:
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
	// bne cr6,0x83876a28
	if (!cr6.eq) goto loc_83876A28;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83876a50
	goto loc_83876A50;
loc_83876A28:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83876a3c
	if (!cr6.eq) goto loc_83876A3C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83876A3C:
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
loc_83876A50:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83876a68
	if (!cr6.eq) goto loc_83876A68;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x83876a84
	goto loc_83876A84;
loc_83876A68:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83876a80
	if (!cr6.eq) goto loc_83876A80;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x83876a84
	goto loc_83876A84;
loc_83876A80:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_83876A84:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// lbz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 24);
	// stb r9,24(r25)
	PPC_STORE_U8(ctx.r25.u32 + 24, ctx.r9.u8);
	// stb r10,24(r26)
	PPC_STORE_U8(ctx.r26.u32 + 24, ctx.r10.u8);
loc_83876A9C:
	// lbz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83876c34
	if (!cr6.eq) goto loc_83876C34;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x83876c30
	if (cr6.eq) goto loc_83876C30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83876AC0:
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83876c30
	if (!cr6.eq) goto loc_83876C30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83876b78
	if (!cr6.eq) goto loc_83876B78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83876b00
	if (!cr6.eq) goto loc_83876B00;
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8349cdd8
	ctx.lr = 0x83876AFC;
	sub_8349CDD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83876B00:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83876bcc
	if (!cr6.eq) goto loc_83876BCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83876b2c
	if (!cr6.eq) goto loc_83876B2C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83876bc8
	if (cr6.eq) goto loc_83876BC8;
loc_83876B2C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83876b54
	if (!cr6.eq) goto loc_83876B54;
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833cd868
	ctx.lr = 0x83876B50;
	sub_833CD868(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83876B54:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r29.u8);
	// bl 0x8349cdd8
	ctx.lr = 0x83876B74;
	sub_8349CDD8(ctx, base);
	// b 0x83876c30
	goto loc_83876C30;
loc_83876B78:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83876b9c
	if (!cr6.eq) goto loc_83876B9C;
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833cd868
	ctx.lr = 0x83876B98;
	sub_833CD868(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83876B9C:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83876bcc
	if (!cr6.eq) goto loc_83876BCC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83876be8
	if (!cr6.eq) goto loc_83876BE8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83876be8
	if (!cr6.eq) goto loc_83876BE8;
loc_83876BC8:
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
loc_83876BCC:
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
	// bne cr6,0x83876ac0
	if (!cr6.eq) goto loc_83876AC0;
	// b 0x83876c30
	goto loc_83876C30;
loc_83876BE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83876c10
	if (!cr6.eq) goto loc_83876C10;
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8349cdd8
	ctx.lr = 0x83876C0C;
	sub_8349CDD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83876C10:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r29.u8);
	// bl 0x833cd868
	ctx.lr = 0x83876C30;
	sub_833CD868(ctx, base);
loc_83876C30:
	// stb r29,24(r28)
	PPC_STORE_U8(ctx.r28.u32 + 24, ctx.r29.u8);
loc_83876C34:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83876c44
	if (cr6.eq) goto loc_83876C44;
	// bl 0x8259b510
	ctx.lr = 0x83876C44;
	sub_8259B510(ctx, base);
loc_83876C44:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83876C58;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876c6c
	if (cr6.eq) goto loc_83876C6C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83876C6C:
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

__attribute__((alias("__imp__sub_83876C7C"))) PPC_WEAK_FUNC(sub_83876C7C);
PPC_FUNC_IMPL(__imp__sub_83876C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876C80"))) PPC_WEAK_FUNC(sub_83876C80);
PPC_FUNC_IMPL(__imp__sub_83876C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83876C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83876ce8
	if (!cr6.eq) goto loc_83876CE8;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83876CA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83876c80
	ctx.lr = 0x83876CB4;
	sub_83876C80(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x83876cc8
	if (cr6.eq) goto loc_83876CC8;
	// bl 0x8259b510
	ctx.lr = 0x83876CC8;
	sub_8259B510(ctx, base);
loc_83876CC8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83876CD8;
	sub_825952B8(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876ca8
	if (cr6.eq) goto loc_83876CA8;
loc_83876CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876CF0"))) PPC_WEAK_FUNC(sub_83876CF0);
PPC_FUNC_IMPL(__imp__sub_83876CF0) {
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
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,15
	ctx.r7.s64 = 15;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// bl 0x8259cb28
	ctx.lr = 0x83876D44;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_83876D5C"))) PPC_WEAK_FUNC(sub_83876D5C);
PPC_FUNC_IMPL(__imp__sub_83876D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876D60"))) PPC_WEAK_FUNC(sub_83876D60);
PPC_FUNC_IMPL(__imp__sub_83876D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83876D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83876dd8
	if (!cr6.eq) goto loc_83876DD8;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x83876678
	ctx.lr = 0x83876D90;
	sub_83876678(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lbz r10,25(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83876db0
	if (cr6.eq) goto loc_83876DB0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83876DB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83876d60
	ctx.lr = 0x83876DC0;
	sub_83876D60(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83876d60
	ctx.lr = 0x83876DD4;
	sub_83876D60(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_83876DD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876DE4"))) PPC_WEAK_FUNC(sub_83876DE4);
PPC_FUNC_IMPL(__imp__sub_83876DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876DE8"))) PPC_WEAK_FUNC(sub_83876DE8);
PPC_FUNC_IMPL(__imp__sub_83876DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83876DF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r4,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r4.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x83879930
	ctx.lr = 0x83876E08;
	sub_83879930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876edc
	if (cr6.eq) goto loc_83876EDC;
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876edc
	if (cr6.eq) goto loc_83876EDC;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876edc
	if (cr6.eq) goto loc_83876EDC;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876edc
	if (cr6.eq) goto loc_83876EDC;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x83876eac
	if (cr6.eq) goto loc_83876EAC;
loc_83876E50:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r5,r1,175
	ctx.r5.s64 = ctx.r1.s64 + 175;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83875fd0
	ctx.lr = 0x83876E64;
	sub_83875FD0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x83876e94
	if (cr6.eq) goto loc_83876E94;
	// lbz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 100);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83876e88
	if (cr6.lt) goto loc_83876E88;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83876E88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838768a0
	ctx.lr = 0x83876E94;
	sub_838768A0(ctx, base);
loc_83876E94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x83876E9C;
	sub_83355AC8(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83876e50
	if (!cr6.eq) goto loc_83876E50;
loc_83876EAC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876ed0
	if (cr6.eq) goto loc_83876ED0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,1272
	ctx.r3.s64 = ctx.r29.s64 + 1272;
	// bl 0x8387b9c0
	ctx.lr = 0x83876EC4;
	sub_8387B9C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876edc
	if (cr6.eq) goto loc_83876EDC;
loc_83876ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83876EDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876EE8"))) PPC_WEAK_FUNC(sub_83876EE8);
PPC_FUNC_IMPL(__imp__sub_83876EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83876EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83876f84
	if (cr6.eq) goto loc_83876F84;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x83876f84
	if (cr6.eq) goto loc_83876F84;
loc_83876F18:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x83876f6c
	if (cr6.eq) goto loc_83876F6C;
loc_83876F2C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x838799e0
	ctx.lr = 0x83876F34;
	sub_838799E0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x83876f58
	if (!cr6.eq) goto loc_83876F58;
	// bl 0x833ccd48
	ctx.lr = 0x83876F44;
	sub_833CCD48(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838768a0
	ctx.lr = 0x83876F54;
	sub_838768A0(ctx, base);
	// b 0x83876f5c
	goto loc_83876F5C;
loc_83876F58:
	// bl 0x833ccd48
	ctx.lr = 0x83876F5C;
	sub_833CCD48(ctx, base);
loc_83876F5C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83876f2c
	if (!cr6.eq) goto loc_83876F2C;
loc_83876F6C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83355ac8
	ctx.lr = 0x83876F74;
	sub_83355AC8(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83876f18
	if (!cr6.eq) goto loc_83876F18;
loc_83876F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83876F8C"))) PPC_WEAK_FUNC(sub_83876F8C);
PPC_FUNC_IMPL(__imp__sub_83876F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876F90"))) PPC_WEAK_FUNC(sub_83876F90);
PPC_FUNC_IMPL(__imp__sub_83876F90) {
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
	// bl 0x83876c80
	ctx.lr = 0x83876FB0;
	sub_83876C80(ctx, base);
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

__attribute__((alias("__imp__sub_83876FE4"))) PPC_WEAK_FUNC(sub_83876FE4);
PPC_FUNC_IMPL(__imp__sub_83876FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83876FE8"))) PPC_WEAK_FUNC(sub_83876FE8);
PPC_FUNC_IMPL(__imp__sub_83876FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83876FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83876d60
	ctx.lr = 0x83877010;
	sub_83876D60(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,25(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83877090
	if (!cr6.eq) goto loc_83877090;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83877054
	if (!cr6.eq) goto loc_83877054;
loc_83877040:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83877040
	if (cr6.eq) goto loc_83877040;
loc_83877054:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83877084
	if (!cr6.eq) goto loc_83877084;
loc_83877070:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83877070
	if (cr6.eq) goto loc_83877070;
loc_83877084:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83877090:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838770A4"))) PPC_WEAK_FUNC(sub_838770A4);
PPC_FUNC_IMPL(__imp__sub_838770A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

