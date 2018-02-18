cmd_drivers/hid/hid-dr.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-dr.ko drivers/hid/hid-dr.o drivers/hid/hid-dr.mod.o
