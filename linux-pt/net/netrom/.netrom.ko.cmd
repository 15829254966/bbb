cmd_net/netrom/netrom.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netrom/netrom.ko net/netrom/netrom.o net/netrom/netrom.mod.o
