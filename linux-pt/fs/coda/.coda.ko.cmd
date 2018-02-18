cmd_fs/coda/coda.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/coda/coda.ko fs/coda/coda.o fs/coda/coda.mod.o
