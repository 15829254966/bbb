cmd_net/sched/sch_fq_codel.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/sch_fq_codel.ko net/sched/sch_fq_codel.o net/sched/sch_fq_codel.mod.o