cmd_drivers/ssb/ssb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/ssb/ssb.ko drivers/ssb/ssb.o drivers/ssb/ssb.mod.o
