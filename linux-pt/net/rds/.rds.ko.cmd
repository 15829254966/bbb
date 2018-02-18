cmd_net/rds/rds.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/rds/rds.ko net/rds/rds.o net/rds/rds.mod.o
