cmd_drivers/usb/serial/f81232.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/f81232.ko drivers/usb/serial/f81232.o drivers/usb/serial/f81232.mod.o