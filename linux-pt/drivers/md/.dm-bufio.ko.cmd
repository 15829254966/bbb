cmd_drivers/md/dm-bufio.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-bufio.ko drivers/md/dm-bufio.o drivers/md/dm-bufio.mod.o