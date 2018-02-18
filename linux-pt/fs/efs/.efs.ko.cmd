cmd_fs/efs/efs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/efs/efs.ko fs/efs/efs.o fs/efs/efs.mod.o
