cmd_drivers/usb/storage/ums-onetouch.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/storage/ums-onetouch.ko drivers/usb/storage/ums-onetouch.o drivers/usb/storage/ums-onetouch.mod.o