cmd_net/llc/llc2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/llc/llc2.ko net/llc/llc2.o net/llc/llc2.mod.o
