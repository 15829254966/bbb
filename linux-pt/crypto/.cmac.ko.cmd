cmd_crypto/cmac.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o
