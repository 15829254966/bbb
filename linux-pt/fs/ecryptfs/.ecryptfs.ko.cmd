cmd_fs/ecryptfs/ecryptfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ecryptfs/ecryptfs.ko fs/ecryptfs/ecryptfs.o fs/ecryptfs/ecryptfs.mod.o