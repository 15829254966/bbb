cmd_drivers/hwmon/emc6w201.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/emc6w201.ko drivers/hwmon/emc6w201.o drivers/hwmon/emc6w201.mod.o