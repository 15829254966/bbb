cmd_fs/cifs/cifs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/cifs/cifs.ko fs/cifs/cifs.o fs/cifs/cifs.mod.o
