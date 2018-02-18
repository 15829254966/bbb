cmd_net/can/can.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/can/can.ko net/can/can.o net/can/can.mod.o
