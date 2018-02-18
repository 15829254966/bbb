cmd_drivers/bcma/bcma.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/bcma/bcma.ko drivers/bcma/bcma.o drivers/bcma/bcma.mod.o
