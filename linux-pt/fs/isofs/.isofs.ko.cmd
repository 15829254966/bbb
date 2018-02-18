cmd_fs/isofs/isofs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/isofs/isofs.ko fs/isofs/isofs.o fs/isofs/isofs.mod.o
