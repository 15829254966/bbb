cmd_drivers/hid/wacom.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/wacom.ko drivers/hid/wacom.o drivers/hid/wacom.mod.o
