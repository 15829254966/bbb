cmd_net/802/garp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o
