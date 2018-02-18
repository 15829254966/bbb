cmd_fs/nls/nls_ascii.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_ascii.ko fs/nls/nls_ascii.o fs/nls/nls_ascii.mod.o
