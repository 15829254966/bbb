cmd_drivers/block/loop.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/loop.ko drivers/block/loop.o drivers/block/loop.mod.o
