cmd_net/atm/clip.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/atm/clip.ko net/atm/clip.o net/atm/clip.mod.o
