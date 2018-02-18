cmd_net/sched/cls_fw.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/cls_fw.ko net/sched/cls_fw.o net/sched/cls_fw.mod.o
