cmd_crypto/lz4hc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/lz4hc.ko crypto/lz4hc.o crypto/lz4hc.mod.o
