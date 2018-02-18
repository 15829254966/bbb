cmd_crypto/pcrypt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/pcrypt.ko crypto/pcrypt.o crypto/pcrypt.mod.o
