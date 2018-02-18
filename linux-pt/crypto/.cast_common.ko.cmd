cmd_crypto/cast_common.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o
