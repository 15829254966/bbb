cmd_net/802/mrp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/802/mrp.ko net/802/mrp.o net/802/mrp.mod.o
