cmd_drivers/md/raid10.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/raid10.ko drivers/md/raid10.o drivers/md/raid10.mod.o
