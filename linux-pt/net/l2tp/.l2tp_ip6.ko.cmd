cmd_net/l2tp/l2tp_ip6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_ip6.ko net/l2tp/l2tp_ip6.o net/l2tp/l2tp_ip6.mod.o
