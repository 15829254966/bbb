cmd_drivers/input/touchscreen/ad7879.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/ad7879.ko drivers/input/touchscreen/ad7879.o drivers/input/touchscreen/ad7879.mod.o