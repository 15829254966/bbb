cmd_drivers/hwmon/lm75.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm75.ko drivers/hwmon/lm75.o drivers/hwmon/lm75.mod.o
