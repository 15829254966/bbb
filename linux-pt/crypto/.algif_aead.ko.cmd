cmd_crypto/algif_aead.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/algif_aead.ko crypto/algif_aead.o crypto/algif_aead.mod.o
