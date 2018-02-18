cmd_fs/jffs2/jffs2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/jffs2/jffs2.ko fs/jffs2/jffs2.o fs/jffs2/jffs2.mod.o
