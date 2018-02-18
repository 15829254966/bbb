cmd_net/sched/em_canid.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/em_canid.ko net/sched/em_canid.o net/sched/em_canid.mod.o
