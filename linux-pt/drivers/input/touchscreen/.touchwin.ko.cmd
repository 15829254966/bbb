cmd_drivers/input/touchscreen/touchwin.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/touchwin.ko drivers/input/touchscreen/touchwin.o drivers/input/touchscreen/touchwin.mod.o