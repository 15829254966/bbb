cmd_crypto/zlib.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/zlib.ko crypto/zlib.o crypto/zlib.mod.o
