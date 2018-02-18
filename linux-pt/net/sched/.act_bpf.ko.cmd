cmd_net/sched/act_bpf.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_bpf.ko net/sched/act_bpf.o net/sched/act_bpf.mod.o
