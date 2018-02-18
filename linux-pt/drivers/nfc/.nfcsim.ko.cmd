cmd_drivers/nfc/nfcsim.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/nfc/nfcsim.ko drivers/nfc/nfcsim.o drivers/nfc/nfcsim.mod.o
