cmd_drivers/hwmon/tmp103.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/tmp103.ko drivers/hwmon/tmp103.o drivers/hwmon/tmp103.mod.o