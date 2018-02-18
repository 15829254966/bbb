cmd_crypto/xcbc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o
