cmd_drivers/md/dm-thin-pool.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-thin-pool.ko drivers/md/dm-thin-pool.o drivers/md/dm-thin-pool.mod.o