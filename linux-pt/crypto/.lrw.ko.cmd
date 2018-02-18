cmd_crypto/lrw.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o
