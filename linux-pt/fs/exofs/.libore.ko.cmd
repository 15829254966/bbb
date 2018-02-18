cmd_fs/exofs/libore.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/exofs/libore.ko fs/exofs/libore.o fs/exofs/libore.mod.o
