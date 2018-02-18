cmd_drivers/md/dm-raid.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-raid.ko drivers/md/dm-raid.o drivers/md/dm-raid.mod.o
