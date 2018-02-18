cmd_crypto/cryptd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o
