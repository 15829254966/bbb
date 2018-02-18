cmd_crypto/fcrypt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/fcrypt.ko crypto/fcrypt.o crypto/fcrypt.mod.o
