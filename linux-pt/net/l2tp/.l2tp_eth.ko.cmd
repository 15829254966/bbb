cmd_net/l2tp/l2tp_eth.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_eth.ko net/l2tp/l2tp_eth.o net/l2tp/l2tp_eth.mod.o
