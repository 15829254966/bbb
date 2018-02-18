cmd_drivers/scsi/sg.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/sg.ko drivers/scsi/sg.o drivers/scsi/sg.mod.o
