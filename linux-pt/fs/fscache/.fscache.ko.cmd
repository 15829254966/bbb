cmd_fs/fscache/fscache.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/fscache/fscache.ko fs/fscache/fscache.o fs/fscache/fscache.mod.o
