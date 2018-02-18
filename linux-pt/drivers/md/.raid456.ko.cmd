cmd_drivers/md/raid456.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/raid456.ko drivers/md/raid456.o drivers/md/raid456.mod.o
