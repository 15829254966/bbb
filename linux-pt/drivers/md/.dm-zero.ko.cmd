cmd_drivers/md/dm-zero.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-zero.ko drivers/md/dm-zero.o drivers/md/dm-zero.mod.o
