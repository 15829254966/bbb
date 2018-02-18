cmd_drivers/mtd/ssfdc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/mtd/ssfdc.ko drivers/mtd/ssfdc.o drivers/mtd/ssfdc.mod.o
