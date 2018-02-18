cmd_net/ipv4/ip_vti.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/ip_vti.ko net/ipv4/ip_vti.o net/ipv4/ip_vti.mod.o
