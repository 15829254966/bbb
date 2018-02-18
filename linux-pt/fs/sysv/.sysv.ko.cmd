cmd_fs/sysv/sysv.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/sysv/sysv.ko fs/sysv/sysv.o fs/sysv/sysv.mod.o
