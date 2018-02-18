cmd_crypto/anubis.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o
