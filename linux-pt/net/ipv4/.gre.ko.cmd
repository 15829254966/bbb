cmd_net/ipv4/gre.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o
