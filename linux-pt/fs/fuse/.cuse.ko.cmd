cmd_fs/fuse/cuse.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/fuse/cuse.ko fs/fuse/cuse.o fs/fuse/cuse.mod.o
