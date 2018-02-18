cmd_crypto/wp512.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o
