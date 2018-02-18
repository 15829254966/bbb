cmd_drivers/md/raid1.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o
