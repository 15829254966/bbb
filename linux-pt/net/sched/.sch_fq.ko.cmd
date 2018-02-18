cmd_net/sched/sch_fq.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/sch_fq.ko net/sched/sch_fq.o net/sched/sch_fq.mod.o
