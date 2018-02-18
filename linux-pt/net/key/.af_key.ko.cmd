cmd_net/key/af_key.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o
