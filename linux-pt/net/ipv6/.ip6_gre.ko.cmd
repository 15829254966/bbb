cmd_net/ipv6/ip6_gre.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv6/ip6_gre.ko net/ipv6/ip6_gre.o net/ipv6/ip6_gre.mod.o
