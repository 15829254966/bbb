cmd_drivers/hwmon/lm83.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm83.ko drivers/hwmon/lm83.o drivers/hwmon/lm83.mod.o
