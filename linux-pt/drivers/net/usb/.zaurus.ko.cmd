cmd_drivers/net/usb/zaurus.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/usb/zaurus.ko drivers/net/usb/zaurus.o drivers/net/usb/zaurus.mod.o