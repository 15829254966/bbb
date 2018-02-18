cmd_fs/quota/quota_v1.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/quota/quota_v1.ko fs/quota/quota_v1.o fs/quota/quota_v1.mod.o
