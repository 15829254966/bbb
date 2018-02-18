cmd_net/nfc/nfc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o
