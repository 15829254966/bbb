cmd_crypto/vmac.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/vmac.ko crypto/vmac.o crypto/vmac.mod.o
