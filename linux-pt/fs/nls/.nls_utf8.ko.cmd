cmd_fs/nls/nls_utf8.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_utf8.ko fs/nls/nls_utf8.o fs/nls/nls_utf8.mod.o
