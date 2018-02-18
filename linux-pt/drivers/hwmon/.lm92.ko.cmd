cmd_drivers/hwmon/lm92.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm92.ko drivers/hwmon/lm92.o drivers/hwmon/lm92.mod.o
