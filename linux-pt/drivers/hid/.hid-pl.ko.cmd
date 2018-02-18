cmd_drivers/hid/hid-pl.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-pl.ko drivers/hid/hid-pl.o drivers/hid/hid-pl.mod.o
