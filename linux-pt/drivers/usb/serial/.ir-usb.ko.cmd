cmd_drivers/usb/serial/ir-usb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/ir-usb.ko drivers/usb/serial/ir-usb.o drivers/usb/serial/ir-usb.mod.o