cmd_drivers/md/dm-mod.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-mod.ko drivers/md/dm-mod.o drivers/md/dm-mod.mod.o
