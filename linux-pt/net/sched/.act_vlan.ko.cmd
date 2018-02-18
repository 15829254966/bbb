cmd_net/sched/act_vlan.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_vlan.ko net/sched/act_vlan.o net/sched/act_vlan.mod.o
