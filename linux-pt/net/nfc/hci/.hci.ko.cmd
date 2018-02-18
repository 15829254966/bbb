cmd_net/nfc/hci/hci.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/nfc/hci/hci.ko net/nfc/hci/hci.o net/nfc/hci/hci.mod.o
