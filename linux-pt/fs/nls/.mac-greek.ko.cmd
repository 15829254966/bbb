cmd_fs/nls/mac-greek.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/mac-greek.ko fs/nls/mac-greek.o fs/nls/mac-greek.mod.o
