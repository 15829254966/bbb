cmd_drivers/hwmon/lm93.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm93.ko drivers/hwmon/lm93.o drivers/hwmon/lm93.mod.o
