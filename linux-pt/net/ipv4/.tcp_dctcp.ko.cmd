cmd_net/ipv4/tcp_dctcp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_dctcp.ko net/ipv4/tcp_dctcp.o net/ipv4/tcp_dctcp.mod.o
