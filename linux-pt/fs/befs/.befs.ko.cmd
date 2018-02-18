cmd_fs/befs/befs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/befs/befs.ko fs/befs/befs.o fs/befs/befs.mod.o
