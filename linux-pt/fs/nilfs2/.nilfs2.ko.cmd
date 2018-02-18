cmd_fs/nilfs2/nilfs2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nilfs2/nilfs2.ko fs/nilfs2/nilfs2.o fs/nilfs2/nilfs2.mod.o
