cmd_net/can/can-gw.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/can/can-gw.ko net/can/can-gw.o net/can/can-gw.mod.o
