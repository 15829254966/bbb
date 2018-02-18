cmd_net/rxrpc/af-rxrpc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/rxrpc/af-rxrpc.ko net/rxrpc/af-rxrpc.o net/rxrpc/af-rxrpc.mod.o
