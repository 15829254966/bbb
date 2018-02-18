cmd_crypto/gcm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o
