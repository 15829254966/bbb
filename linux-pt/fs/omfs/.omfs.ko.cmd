cmd_fs/omfs/omfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/omfs/omfs.ko fs/omfs/omfs.o fs/omfs/omfs.mod.o
