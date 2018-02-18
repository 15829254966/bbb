cmd_fs/hfsplus/hfsplus.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/hfsplus/hfsplus.ko fs/hfsplus/hfsplus.o fs/hfsplus/hfsplus.mod.o
