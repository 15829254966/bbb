cmd_net/802/stp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o
