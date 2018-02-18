cmd_crypto/arc4.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/arc4.ko crypto/arc4.o crypto/arc4.mod.o
