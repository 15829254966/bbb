cmd_fs/adfs/adfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/adfs/adfs.ko fs/adfs/adfs.o fs/adfs/adfs.mod.o
