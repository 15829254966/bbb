cmd_fs/binfmt_misc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o
