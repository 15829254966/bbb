cmd_net/sched/sch_plug.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/sch_plug.ko net/sched/sch_plug.o net/sched/sch_plug.mod.o
