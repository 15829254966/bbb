cmd_fs/ncpfs/ncpfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ncpfs/ncpfs.ko fs/ncpfs/ncpfs.o fs/ncpfs/ncpfs.mod.o
