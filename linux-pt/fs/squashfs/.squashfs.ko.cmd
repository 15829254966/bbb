cmd_fs/squashfs/squashfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/squashfs/squashfs.ko fs/squashfs/squashfs.o fs/squashfs/squashfs.mod.o