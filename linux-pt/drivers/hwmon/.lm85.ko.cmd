cmd_drivers/hwmon/lm85.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm85.ko drivers/hwmon/lm85.o drivers/hwmon/lm85.mod.o
