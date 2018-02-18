cmd_crypto/des_generic.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/des_generic.ko crypto/des_generic.o crypto/des_generic.mod.o
