cmd_drivers/input/gameport/gameport.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/gameport/gameport.ko drivers/input/gameport/gameport.o drivers/input/gameport/gameport.mod.o