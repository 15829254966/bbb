cmd_fs/gfs2/gfs2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/gfs2/gfs2.ko fs/gfs2/gfs2.o fs/gfs2/gfs2.mod.o
