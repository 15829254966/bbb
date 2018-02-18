cmd_crypto/rmd320.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/rmd320.ko crypto/rmd320.o crypto/rmd320.mod.o
