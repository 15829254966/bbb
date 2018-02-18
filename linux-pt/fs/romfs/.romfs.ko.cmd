cmd_fs/romfs/romfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/romfs/romfs.ko fs/romfs/romfs.o fs/romfs/romfs.mod.o
