cmd_drivers/hwmon/lm95241.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm95241.ko drivers/hwmon/lm95241.o drivers/hwmon/lm95241.mod.o