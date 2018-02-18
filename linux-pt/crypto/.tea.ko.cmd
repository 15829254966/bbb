cmd_crypto/tea.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/tea.ko crypto/tea.o crypto/tea.mod.o
