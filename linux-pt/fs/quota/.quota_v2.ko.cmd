cmd_fs/quota/quota_v2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/quota/quota_v2.ko fs/quota/quota_v2.o fs/quota/quota_v2.mod.o
