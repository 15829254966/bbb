cmd_drivers/hid/hid-axff.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-axff.ko drivers/hid/hid-axff.o drivers/hid/hid-axff.mod.o