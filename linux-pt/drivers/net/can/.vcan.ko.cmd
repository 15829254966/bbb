cmd_drivers/net/can/vcan.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/can/vcan.ko drivers/net/can/vcan.o drivers/net/can/vcan.mod.o