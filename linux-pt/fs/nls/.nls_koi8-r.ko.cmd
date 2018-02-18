cmd_fs/nls/nls_koi8-r.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_koi8-r.ko fs/nls/nls_koi8-r.o fs/nls/nls_koi8-r.mod.o
