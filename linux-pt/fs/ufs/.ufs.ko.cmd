cmd_fs/ufs/ufs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ufs/ufs.ko fs/ufs/ufs.o fs/ufs/ufs.mod.o
