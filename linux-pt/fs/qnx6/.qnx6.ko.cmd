cmd_fs/qnx6/qnx6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/qnx6/qnx6.ko fs/qnx6/qnx6.o fs/qnx6/qnx6.mod.o
