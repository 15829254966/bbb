cmd_drivers/hwmon/lm63.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm63.ko drivers/hwmon/lm63.o drivers/hwmon/lm63.mod.o
