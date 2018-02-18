cmd_net/ipv4/ipcomp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/ipcomp.ko net/ipv4/ipcomp.o net/ipv4/ipcomp.mod.o
