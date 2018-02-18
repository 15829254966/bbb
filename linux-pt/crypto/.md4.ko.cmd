cmd_crypto/md4.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o
