cmd_net/can/can-bcm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o
