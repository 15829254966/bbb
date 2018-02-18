cmd_net/atm/mpoa.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/atm/mpoa.ko net/atm/mpoa.o net/atm/mpoa.mod.o
