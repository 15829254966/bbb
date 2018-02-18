cmd_fs/nls/mac-roman.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/mac-roman.ko fs/nls/mac-roman.o fs/nls/mac-roman.mod.o
