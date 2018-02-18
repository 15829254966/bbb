	.arch armv7-a
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
	.file	"asm-offsets.c"
@ GNU C89 (GCC) version 7.2.1 20170915 (Red Hat Cross 7.2.1-1) (arm-linux-gnueabi)
@	compiled by GNU C version 7.2.1 20170915 (Red Hat 7.2.1-2), GMP version 6.1.2, MPFR version 3.1.5, MPC version 1.0.2, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I arch/arm/include/generated/uapi -I arch/arm/include/generated
@ -I include -I ./arch/arm/include/uapi -I arch/arm/include/generated/uapi
@ -I ./include/uapi -I include/generated/uapi -D __KERNEL__
@ -D __LINUX_ARM_ARCH__=7 -U arm -D CC_HAVE_ASM_GOTO -D KBUILD_STR(s)=#s
@ -D KBUILD_BASENAME=KBUILD_STR(asm_offsets)
@ -D KBUILD_MODNAME=KBUILD_STR(asm_offsets)
@ -isystem /usr/lib/gcc/arm-linux-gnueabi/7/include
@ -include ./include/linux/kconfig.h -MD arch/arm/kernel/.asm-offsets.s.d
@ arch/arm/kernel/asm-offsets.c -mlittle-endian -mapcs -mno-sched-prolog
@ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -march=armv7-a
@ -mfloat-abi=soft -mtune=cortex-a8 -mtls-dialect=gnu
@ -auxbase-strip arch/arm/kernel/asm-offsets.s -O2 -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-maybe-uninitialized -Wno-frame-address
@ -Wformat-truncation=0 -Wformat-overflow=0 -Wno-int-in-bool-context
@ -Wframe-larger-than=1024 -Wno-unused-but-set-variable
@ -Wunused-const-variable=0 -Wdeclaration-after-statement -Wno-pointer-sign
@ -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -std=gnu90 -p -fno-strict-aliasing
@ -fno-common -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fstack-protector-strong
@ -fno-omit-frame-pointer -fno-optimize-sibling-calls
@ -fno-var-tracking-assignments -fno-strict-overflow -fconserve-stack
@ -fverbose-asm --param allow-store-data-races=0
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffp-int-builtin-inexact -ffunction-cse -fgcse
@ -fgcse-lm -fgnu-runtime -fgnu-unique -fguess-branch-probability
@ -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-atomics
@ -finline-functions-called-once -finline-small-functions -fipa-bit-cp
@ -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
@ -fipa-pure-const -fipa-reference -fipa-vrp -fira-hoist-pressure
@ -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
@ -fmath-errno -fmerge-constants -fmerge-debug-strings
@ -fmove-loop-invariants -foptimize-strlen -fpartial-inlining -fpeephole
@ -fpeephole2 -fplt -fprefetch-loop-arrays -fprofile -freg-struct-return
@ -freorder-blocks -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fshrink-wrap-separate -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
@ -fstack-protector-strong -fstdarg-opt -fstore-merging
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fverbose-asm
@ -fzero-initialized-in-bss -mapcs-frame -marm -mglibc -mlittle-endian
@ -mpic-data-is-text-relative -munaligned-access -mvectorize-with-neon-quad

	.syntax divided
	.macro	it, cond
	.endm
	.macro	itt, cond
	.endm
	.macro	ite, cond
	.endm
	.macro	ittt, cond
	.endm
	.macro	itte, cond
	.endm
	.macro	itet, cond
	.endm
	.macro	itee, cond
	.endm
	.macro	itttt, cond
	.endm
	.macro	ittte, cond
	.endm
	.macro	ittet, cond
	.endm
	.macro	ittee, cond
	.endm
	.macro	itett, cond
	.endm
	.macro	itete, cond
	.endm
	.macro	iteet, cond
	.endm
	.macro	iteee, cond
	.endm

	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	.movsp ip
	mov	ip, sp	@,
	push	{fp, ip, lr, pc}	@
	.pad #4
	.save {fp, ip, lr}
	.setfp fp, ip, #-4
	sub	fp, ip, #4	@,,
	push	{lr}
	bl	__gnu_mcount_nc
@ arch/arm/kernel/asm-offsets.c:60: {
@ arch/arm/kernel/asm-offsets.c:61:   DEFINE(TSK_ACTIVE_MM,		offsetof(struct task_struct, active_mm));
	.syntax divided
@ 61 "arch/arm/kernel/asm-offsets.c" 1
	
->TSK_ACTIVE_MM #716 offsetof(struct task_struct, active_mm)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:63:   DEFINE(TSK_STACK_CANARY,	offsetof(struct task_struct, stack_canary));
@ 63 "arch/arm/kernel/asm-offsets.c" 1
	
->TSK_STACK_CANARY #824 offsetof(struct task_struct, stack_canary)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:65:   BLANK();
@ 65 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:66:   DEFINE(TI_FLAGS,		offsetof(struct thread_info, flags));
@ 66 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FLAGS #0 offsetof(struct thread_info, flags)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:67:   DEFINE(TI_PREEMPT,		offsetof(struct thread_info, preempt_count));
@ 67 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:68:   DEFINE(TI_PREEMPT_LAZY,	offsetof(struct thread_info, preempt_lazy_count));
@ 68 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_PREEMPT_LAZY #8 offsetof(struct thread_info, preempt_lazy_count)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:69:   DEFINE(TI_ADDR_LIMIT,		offsetof(struct thread_info, addr_limit));
@ 69 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_ADDR_LIMIT #12 offsetof(struct thread_info, addr_limit)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:70:   DEFINE(TI_TASK,		offsetof(struct thread_info, task));
@ 70 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TASK #16 offsetof(struct thread_info, task)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:71:   DEFINE(TI_CPU,		offsetof(struct thread_info, cpu));
@ 71 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU #20 offsetof(struct thread_info, cpu)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:72:   DEFINE(TI_CPU_DOMAIN,		offsetof(struct thread_info, cpu_domain));
@ 72 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_DOMAIN #24 offsetof(struct thread_info, cpu_domain)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:73:   DEFINE(TI_CPU_SAVE,		offsetof(struct thread_info, cpu_context));
@ 73 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_SAVE #28 offsetof(struct thread_info, cpu_context)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:74:   DEFINE(TI_USED_CP,		offsetof(struct thread_info, used_cp));
@ 74 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_USED_CP #80 offsetof(struct thread_info, used_cp)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:75:   DEFINE(TI_TP_VALUE,		offsetof(struct thread_info, tp_value));
@ 75 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TP_VALUE #96 offsetof(struct thread_info, tp_value)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:76:   DEFINE(TI_FPSTATE,		offsetof(struct thread_info, fpstate));
@ 76 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:78:   DEFINE(TI_VFPSTATE,		offsetof(struct thread_info, vfpstate));
@ 78 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_VFPSTATE #248 offsetof(struct thread_info, vfpstate)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:80:   DEFINE(VFP_CPU,		offsetof(union vfp_state, hard.cpu));
@ 80 "arch/arm/kernel/asm-offsets.c" 1
	
->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:84:   DEFINE(TI_THUMBEE_STATE,	offsetof(struct thread_info, thumbee_state));
@ 84 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_THUMBEE_STATE #528 offsetof(struct thread_info, thumbee_state)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:92:   BLANK();
@ 92 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:93:   DEFINE(S_R0,			offsetof(struct pt_regs, ARM_r0));
@ 93 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R0 #0 offsetof(struct pt_regs, ARM_r0)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:94:   DEFINE(S_R1,			offsetof(struct pt_regs, ARM_r1));
@ 94 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R1 #4 offsetof(struct pt_regs, ARM_r1)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:95:   DEFINE(S_R2,			offsetof(struct pt_regs, ARM_r2));
@ 95 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R2 #8 offsetof(struct pt_regs, ARM_r2)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:96:   DEFINE(S_R3,			offsetof(struct pt_regs, ARM_r3));
@ 96 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R3 #12 offsetof(struct pt_regs, ARM_r3)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:97:   DEFINE(S_R4,			offsetof(struct pt_regs, ARM_r4));
@ 97 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R4 #16 offsetof(struct pt_regs, ARM_r4)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:98:   DEFINE(S_R5,			offsetof(struct pt_regs, ARM_r5));
@ 98 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R5 #20 offsetof(struct pt_regs, ARM_r5)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:99:   DEFINE(S_R6,			offsetof(struct pt_regs, ARM_r6));
@ 99 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R6 #24 offsetof(struct pt_regs, ARM_r6)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:100:   DEFINE(S_R7,			offsetof(struct pt_regs, ARM_r7));
@ 100 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R7 #28 offsetof(struct pt_regs, ARM_r7)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:101:   DEFINE(S_R8,			offsetof(struct pt_regs, ARM_r8));
@ 101 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R8 #32 offsetof(struct pt_regs, ARM_r8)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:102:   DEFINE(S_R9,			offsetof(struct pt_regs, ARM_r9));
@ 102 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R9 #36 offsetof(struct pt_regs, ARM_r9)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:103:   DEFINE(S_R10,			offsetof(struct pt_regs, ARM_r10));
@ 103 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R10 #40 offsetof(struct pt_regs, ARM_r10)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:104:   DEFINE(S_FP,			offsetof(struct pt_regs, ARM_fp));
@ 104 "arch/arm/kernel/asm-offsets.c" 1
	
->S_FP #44 offsetof(struct pt_regs, ARM_fp)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:105:   DEFINE(S_IP,			offsetof(struct pt_regs, ARM_ip));
@ 105 "arch/arm/kernel/asm-offsets.c" 1
	
->S_IP #48 offsetof(struct pt_regs, ARM_ip)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:106:   DEFINE(S_SP,			offsetof(struct pt_regs, ARM_sp));
@ 106 "arch/arm/kernel/asm-offsets.c" 1
	
->S_SP #52 offsetof(struct pt_regs, ARM_sp)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:107:   DEFINE(S_LR,			offsetof(struct pt_regs, ARM_lr));
@ 107 "arch/arm/kernel/asm-offsets.c" 1
	
->S_LR #56 offsetof(struct pt_regs, ARM_lr)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:108:   DEFINE(S_PC,			offsetof(struct pt_regs, ARM_pc));
@ 108 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PC #60 offsetof(struct pt_regs, ARM_pc)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:109:   DEFINE(S_PSR,			offsetof(struct pt_regs, ARM_cpsr));
@ 109 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:110:   DEFINE(S_OLD_R0,		offsetof(struct pt_regs, ARM_ORIG_r0));
@ 110 "arch/arm/kernel/asm-offsets.c" 1
	
->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:111:   DEFINE(S_FRAME_SIZE,		sizeof(struct pt_regs));
@ 111 "arch/arm/kernel/asm-offsets.c" 1
	
->S_FRAME_SIZE #72 sizeof(struct pt_regs)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:112:   BLANK();
@ 112 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:114:   DEFINE(L2X0_R_PHY_BASE,	offsetof(struct l2x0_regs, phy_base));
@ 114 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PHY_BASE #0 offsetof(struct l2x0_regs, phy_base)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:115:   DEFINE(L2X0_R_AUX_CTRL,	offsetof(struct l2x0_regs, aux_ctrl));
@ 115 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_AUX_CTRL #4 offsetof(struct l2x0_regs, aux_ctrl)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:116:   DEFINE(L2X0_R_TAG_LATENCY,	offsetof(struct l2x0_regs, tag_latency));
@ 116 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_TAG_LATENCY #8 offsetof(struct l2x0_regs, tag_latency)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:117:   DEFINE(L2X0_R_DATA_LATENCY,	offsetof(struct l2x0_regs, data_latency));
@ 117 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_DATA_LATENCY #12 offsetof(struct l2x0_regs, data_latency)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:118:   DEFINE(L2X0_R_FILTER_START,	offsetof(struct l2x0_regs, filter_start));
@ 118 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_START #16 offsetof(struct l2x0_regs, filter_start)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:119:   DEFINE(L2X0_R_FILTER_END,	offsetof(struct l2x0_regs, filter_end));
@ 119 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_END #20 offsetof(struct l2x0_regs, filter_end)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:120:   DEFINE(L2X0_R_PREFETCH_CTRL,	offsetof(struct l2x0_regs, prefetch_ctrl));
@ 120 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PREFETCH_CTRL #24 offsetof(struct l2x0_regs, prefetch_ctrl)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:121:   DEFINE(L2X0_R_PWR_CTRL,	offsetof(struct l2x0_regs, pwr_ctrl));
@ 121 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PWR_CTRL #28 offsetof(struct l2x0_regs, pwr_ctrl)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:122:   BLANK();
@ 122 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:125:   DEFINE(MM_CONTEXT_ID,		offsetof(struct mm_struct, context.id.counter));
@ 125 "arch/arm/kernel/asm-offsets.c" 1
	
->MM_CONTEXT_ID #360 offsetof(struct mm_struct, context.id.counter)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:126:   BLANK();
@ 126 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:128:   DEFINE(VMA_VM_MM,		offsetof(struct vm_area_struct, vm_mm));
@ 128 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:129:   DEFINE(VMA_VM_FLAGS,		offsetof(struct vm_area_struct, vm_flags));
@ 129 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:130:   BLANK();
@ 130 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:131:   DEFINE(VM_EXEC,	       	VM_EXEC);
@ 131 "arch/arm/kernel/asm-offsets.c" 1
	
->VM_EXEC #4 VM_EXEC	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:132:   BLANK();
@ 132 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:133:   DEFINE(PAGE_SZ,	       	PAGE_SIZE);
@ 133 "arch/arm/kernel/asm-offsets.c" 1
	
->PAGE_SZ #4096 PAGE_SIZE	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:134:   BLANK();
@ 134 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:135:   DEFINE(SYS_ERROR0,		0x9f0000);
@ 135 "arch/arm/kernel/asm-offsets.c" 1
	
->SYS_ERROR0 #10420224 0x9f0000	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:136:   BLANK();
@ 136 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:137:   DEFINE(SIZEOF_MACHINE_DESC,	sizeof(struct machine_desc));
@ 137 "arch/arm/kernel/asm-offsets.c" 1
	
->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:138:   DEFINE(MACHINFO_TYPE,		offsetof(struct machine_desc, nr));
@ 138 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:139:   DEFINE(MACHINFO_NAME,		offsetof(struct machine_desc, name));
@ 139 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_NAME #4 offsetof(struct machine_desc, name)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:140:   BLANK();
@ 140 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:141:   DEFINE(PROC_INFO_SZ,		sizeof(struct proc_info_list));
@ 141 "arch/arm/kernel/asm-offsets.c" 1
	
->PROC_INFO_SZ #52 sizeof(struct proc_info_list)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:142:   DEFINE(PROCINFO_INITFUNC,	offsetof(struct proc_info_list, __cpu_flush));
@ 142 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:143:   DEFINE(PROCINFO_MM_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_mm_mmu_flags));
@ 143 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:144:   DEFINE(PROCINFO_IO_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_io_mmu_flags));
@ 144 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:145:   BLANK();
@ 145 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:153:   DEFINE(CPU_SLEEP_SIZE,	offsetof(struct processor, suspend_size));
@ 153 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_SLEEP_SIZE #36 offsetof(struct processor, suspend_size)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:154:   DEFINE(CPU_DO_SUSPEND,	offsetof(struct processor, do_suspend));
@ 154 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_SUSPEND #40 offsetof(struct processor, do_suspend)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:155:   DEFINE(CPU_DO_RESUME,		offsetof(struct processor, do_resume));
@ 155 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_RESUME #44 offsetof(struct processor, do_resume)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:161:   DEFINE(SLEEP_SAVE_SP_SZ,	sizeof(struct sleep_save_sp));
@ 161 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_SZ #8 sizeof(struct sleep_save_sp)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:162:   DEFINE(SLEEP_SAVE_SP_PHYS,	offsetof(struct sleep_save_sp, save_ptr_stash_phys));
@ 162 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_PHYS #4 offsetof(struct sleep_save_sp, save_ptr_stash_phys)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:163:   DEFINE(SLEEP_SAVE_SP_VIRT,	offsetof(struct sleep_save_sp, save_ptr_stash));
@ 163 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_VIRT #0 offsetof(struct sleep_save_sp, save_ptr_stash)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:165:   BLANK();
@ 165 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:166:   DEFINE(DMA_BIDIRECTIONAL,	DMA_BIDIRECTIONAL);
@ 166 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:167:   DEFINE(DMA_TO_DEVICE,		DMA_TO_DEVICE);
@ 167 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_TO_DEVICE #1 DMA_TO_DEVICE	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:168:   DEFINE(DMA_FROM_DEVICE,	DMA_FROM_DEVICE);
@ 168 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:169:   BLANK();
@ 169 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:170:   DEFINE(CACHE_WRITEBACK_ORDER, __CACHE_WRITEBACK_ORDER);
@ 170 "arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:171:   DEFINE(CACHE_WRITEBACK_GRANULE, __CACHE_WRITEBACK_GRANULE);
@ 171 "arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:172:   BLANK();
@ 172 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:210:   BLANK();
@ 210 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:212:   DEFINE(VDSO_DATA_SIZE,	sizeof(union vdso_data_store));
@ 212 "arch/arm/kernel/asm-offsets.c" 1
	
->VDSO_DATA_SIZE #4096 sizeof(union vdso_data_store)	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:215: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (GNU) 7.2.1 20170915 (Red Hat Cross 7.2.1-1)"
	.section	.note.GNU-stack,"",%progbits
