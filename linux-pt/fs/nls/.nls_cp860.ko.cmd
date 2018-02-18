cmd_fs/nls/nls_cp860.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_cp860.ko fs/nls/nls_cp860.o fs/nls/nls_cp860.mod.o
