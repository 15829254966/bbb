cmd_drivers/atm/adummy.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/atm/adummy.ko drivers/atm/adummy.o drivers/atm/adummy.mod.o
