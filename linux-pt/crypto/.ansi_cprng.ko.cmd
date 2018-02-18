cmd_crypto/ansi_cprng.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/ansi_cprng.ko crypto/ansi_cprng.o crypto/ansi_cprng.mod.o
