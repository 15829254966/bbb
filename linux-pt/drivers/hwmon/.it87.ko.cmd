cmd_drivers/hwmon/it87.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/it87.ko drivers/hwmon/it87.o drivers/hwmon/it87.mod.o
