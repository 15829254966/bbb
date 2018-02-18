cmd_net/ipv6/ip6_vti.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv6/ip6_vti.ko net/ipv6/ip6_vti.o net/ipv6/ip6_vti.mod.o
