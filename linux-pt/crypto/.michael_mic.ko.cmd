cmd_crypto/michael_mic.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o
