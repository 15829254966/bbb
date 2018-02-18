cmd_net/nfc/nci/nci.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/nfc/nci/nci.ko net/nfc/nci/nci.o net/nfc/nci/nci.mod.o
