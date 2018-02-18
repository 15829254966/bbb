cmd_drivers/hwmon/lm70.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm70.ko drivers/hwmon/lm70.o drivers/hwmon/lm70.mod.o
