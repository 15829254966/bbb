cmd_drivers/md/md-mod.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o
