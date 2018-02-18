cmd_fs/afs/kafs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/afs/kafs.ko fs/afs/kafs.o fs/afs/kafs.mod.o
