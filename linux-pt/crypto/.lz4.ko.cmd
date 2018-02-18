cmd_crypto/lz4.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o
