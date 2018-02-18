cmd_crypto/echainiv.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o
