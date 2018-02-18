cmd_drivers/block/rbd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/rbd.ko drivers/block/rbd.o drivers/block/rbd.mod.o
