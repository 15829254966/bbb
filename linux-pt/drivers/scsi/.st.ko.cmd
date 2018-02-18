cmd_drivers/scsi/st.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o
