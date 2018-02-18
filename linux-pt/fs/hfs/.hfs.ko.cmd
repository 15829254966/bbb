cmd_fs/hfs/hfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o
