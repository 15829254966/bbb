cmd_net/ipv4/tcp_diag.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_diag.ko net/ipv4/tcp_diag.o net/ipv4/tcp_diag.mod.o
