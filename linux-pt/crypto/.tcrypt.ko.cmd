cmd_crypto/tcrypt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o
