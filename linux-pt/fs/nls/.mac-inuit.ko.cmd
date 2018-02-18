cmd_fs/nls/mac-inuit.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/mac-inuit.ko fs/nls/mac-inuit.o fs/nls/mac-inuit.mod.o
