cmd_fs/ocfs2/ocfs2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ocfs2/ocfs2.ko fs/ocfs2/ocfs2.o fs/ocfs2/ocfs2.mod.o
