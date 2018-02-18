cmd_net/phonet/phonet.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o
