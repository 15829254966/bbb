cmd_net/rose/rose.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o
