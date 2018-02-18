cmd_drivers/uio/uio.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/uio/uio.ko drivers/uio/uio.o drivers/uio/uio.mod.o
