cmd_drivers/hwmon/lm87.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm87.ko drivers/hwmon/lm87.o drivers/hwmon/lm87.mod.o
