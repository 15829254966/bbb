cmd_net/ipv4/tcp_vegas.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_vegas.ko net/ipv4/tcp_vegas.o net/ipv4/tcp_vegas.mod.o
