cmd_drivers/hwmon/lm73.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm73.ko drivers/hwmon/lm73.o drivers/hwmon/lm73.mod.o
