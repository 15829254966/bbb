cmd_drivers/md/linear.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/linear.ko drivers/md/linear.o drivers/md/linear.mod.o
