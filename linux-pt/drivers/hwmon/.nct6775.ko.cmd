cmd_drivers/hwmon/nct6775.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/nct6775.ko drivers/hwmon/nct6775.o drivers/hwmon/nct6775.mod.o