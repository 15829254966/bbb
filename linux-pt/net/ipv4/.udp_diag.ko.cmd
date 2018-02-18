cmd_net/ipv4/udp_diag.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/udp_diag.ko net/ipv4/udp_diag.o net/ipv4/udp_diag.mod.o
