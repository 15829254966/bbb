cmd_net/8021q/8021q.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/8021q/8021q.ko net/8021q/8021q.o net/8021q/8021q.mod.o
