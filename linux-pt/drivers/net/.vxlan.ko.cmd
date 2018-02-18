cmd_drivers/net/vxlan.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/vxlan.ko drivers/net/vxlan.o drivers/net/vxlan.mod.o
