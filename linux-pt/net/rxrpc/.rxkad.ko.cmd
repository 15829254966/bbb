cmd_net/rxrpc/rxkad.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/rxrpc/rxkad.ko net/rxrpc/rxkad.o net/rxrpc/rxkad.mod.o
