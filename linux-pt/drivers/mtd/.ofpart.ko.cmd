cmd_drivers/mtd/ofpart.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/mtd/ofpart.ko drivers/mtd/ofpart.o drivers/mtd/ofpart.mod.o
