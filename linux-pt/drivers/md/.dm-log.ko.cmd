cmd_drivers/md/dm-log.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o
