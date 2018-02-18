cmd_fs/aufs/aufs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/aufs/aufs.ko fs/aufs/aufs.o fs/aufs/aufs.mod.o
