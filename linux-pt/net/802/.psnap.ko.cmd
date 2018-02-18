cmd_net/802/psnap.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o
