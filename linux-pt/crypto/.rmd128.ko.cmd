cmd_crypto/rmd128.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/rmd128.ko crypto/rmd128.o crypto/rmd128.mod.o
