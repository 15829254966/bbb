cmd_drivers/md/dm-era.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-era.ko drivers/md/dm-era.o drivers/md/dm-era.mod.o
