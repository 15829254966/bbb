cmd_drivers/net/geneve.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/geneve.ko drivers/net/geneve.o drivers/net/geneve.mod.o
