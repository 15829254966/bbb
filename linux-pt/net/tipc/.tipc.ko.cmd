cmd_net/tipc/tipc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/tipc/tipc.ko net/tipc/tipc.o net/tipc/tipc.mod.o
