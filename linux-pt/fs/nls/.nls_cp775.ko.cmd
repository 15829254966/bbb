cmd_fs/nls/nls_cp775.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_cp775.ko fs/nls/nls_cp775.o fs/nls/nls_cp775.mod.o
