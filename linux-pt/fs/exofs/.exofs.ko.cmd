cmd_fs/exofs/exofs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/exofs/exofs.ko fs/exofs/exofs.o fs/exofs/exofs.mod.o
