cmd_drivers/hwmon/adt7x10.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/adt7x10.ko drivers/hwmon/adt7x10.o drivers/hwmon/adt7x10.mod.o