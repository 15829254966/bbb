cmd_net/can/can-raw.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/can/can-raw.ko net/can/can-raw.o net/can/can-raw.mod.o
