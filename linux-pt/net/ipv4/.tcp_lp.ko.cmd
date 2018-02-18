cmd_net/ipv4/tcp_lp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_lp.ko net/ipv4/tcp_lp.o net/ipv4/tcp_lp.mod.o
