cmd_net/wimax/wimax.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o
