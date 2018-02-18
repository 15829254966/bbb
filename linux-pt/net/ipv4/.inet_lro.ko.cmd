cmd_net/ipv4/inet_lro.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/inet_lro.ko net/ipv4/inet_lro.o net/ipv4/inet_lro.mod.o
