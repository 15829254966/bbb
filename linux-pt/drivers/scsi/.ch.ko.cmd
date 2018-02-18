cmd_drivers/scsi/ch.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/ch.ko drivers/scsi/ch.o drivers/scsi/ch.mod.o
