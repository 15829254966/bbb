cmd_crypto/pcbc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o
