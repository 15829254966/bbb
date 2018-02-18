cmd_fs/nfsd/nfsd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nfsd/nfsd.ko fs/nfsd/nfsd.o fs/nfsd/nfsd.mod.o
