cmd_net/nfc/nfc_digital.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/nfc/nfc_digital.ko net/nfc/nfc_digital.o net/nfc/nfc_digital.mod.o