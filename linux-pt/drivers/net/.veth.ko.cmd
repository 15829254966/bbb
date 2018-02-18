cmd_drivers/net/veth.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/veth.ko drivers/net/veth.o drivers/net/veth.mod.o
