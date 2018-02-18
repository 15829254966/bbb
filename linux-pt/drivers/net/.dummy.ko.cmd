cmd_drivers/net/dummy.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/dummy.ko drivers/net/dummy.o drivers/net/dummy.mod.o
