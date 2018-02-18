cmd_drivers/uwb/hwa-rc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/uwb/hwa-rc.ko drivers/uwb/hwa-rc.o drivers/uwb/hwa-rc.mod.o
