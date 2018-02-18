cmd_drivers/net/nlmon.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/nlmon.ko drivers/net/nlmon.o drivers/net/nlmon.mod.o
