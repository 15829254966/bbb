cmd_drivers/hid/hid-penmount.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-penmount.ko drivers/hid/hid-penmount.o drivers/hid/hid-penmount.mod.o