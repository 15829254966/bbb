cmd_crypto/af_alg.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o
