cmd_drivers/net/usb/pegasus.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/usb/pegasus.ko drivers/net/usb/pegasus.o drivers/net/usb/pegasus.mod.o