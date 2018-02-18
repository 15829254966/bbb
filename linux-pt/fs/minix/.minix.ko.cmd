cmd_fs/minix/minix.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/minix/minix.ko fs/minix/minix.o fs/minix/minix.mod.o
