cmd_net/ipv4/ipip.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/ipip.ko net/ipv4/ipip.o net/ipv4/ipip.mod.o
