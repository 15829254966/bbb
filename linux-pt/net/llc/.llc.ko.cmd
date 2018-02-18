cmd_net/llc/llc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o
