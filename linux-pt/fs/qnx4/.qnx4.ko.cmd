cmd_fs/qnx4/qnx4.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/qnx4/qnx4.ko fs/qnx4/qnx4.o fs/qnx4/qnx4.mod.o
