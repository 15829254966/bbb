cmd_crypto/ablk_helper.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/ablk_helper.ko crypto/ablk_helper.o crypto/ablk_helper.mod.o
