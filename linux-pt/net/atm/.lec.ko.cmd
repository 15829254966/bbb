cmd_net/atm/lec.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/atm/lec.ko net/atm/lec.o net/atm/lec.mod.o
