cmd_net/atm/atm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o
