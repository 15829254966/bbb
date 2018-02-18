cmd_net/sched/act_nat.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_nat.ko net/sched/act_nat.o net/sched/act_nat.mod.o
