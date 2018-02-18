cmd_crypto/algif_hash.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/algif_hash.ko crypto/algif_hash.o crypto/algif_hash.mod.o
