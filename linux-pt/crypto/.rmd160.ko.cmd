cmd_crypto/rmd160.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o
