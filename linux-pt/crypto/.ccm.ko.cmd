cmd_crypto/ccm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o
