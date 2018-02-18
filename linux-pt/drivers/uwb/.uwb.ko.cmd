cmd_drivers/uwb/uwb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/uwb/uwb.ko drivers/uwb/uwb.o drivers/uwb/uwb.mod.o
