cmd_drivers/hsi/hsi.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hsi/hsi.ko drivers/hsi/hsi.o drivers/hsi/hsi.mod.o
