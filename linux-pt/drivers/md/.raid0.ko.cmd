cmd_drivers/md/raid0.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o
