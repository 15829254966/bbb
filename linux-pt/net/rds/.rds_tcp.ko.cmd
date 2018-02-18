cmd_net/rds/rds_tcp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/rds/rds_tcp.ko net/rds/rds_tcp.o net/rds/rds_tcp.mod.o
