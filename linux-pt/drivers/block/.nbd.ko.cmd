cmd_drivers/block/nbd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/nbd.ko drivers/block/nbd.o drivers/block/nbd.mod.o
