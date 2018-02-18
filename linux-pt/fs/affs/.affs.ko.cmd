cmd_fs/affs/affs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/affs/affs.ko fs/affs/affs.o fs/affs/affs.mod.o
