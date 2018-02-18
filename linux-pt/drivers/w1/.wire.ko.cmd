cmd_drivers/w1/wire.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o
