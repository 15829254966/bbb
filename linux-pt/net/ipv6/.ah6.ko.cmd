cmd_net/ipv6/ah6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv6/ah6.ko net/ipv6/ah6.o net/ipv6/ah6.mod.o
