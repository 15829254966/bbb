cmd_drivers/scsi/ses.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/ses.ko drivers/scsi/ses.o drivers/scsi/ses.mod.o
