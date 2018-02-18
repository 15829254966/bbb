cmd_crypto/crc32.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/crc32.ko crypto/crc32.o crypto/crc32.mod.o
