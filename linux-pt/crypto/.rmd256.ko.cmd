cmd_crypto/rmd256.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o
