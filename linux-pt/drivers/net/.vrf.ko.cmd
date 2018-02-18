cmd_drivers/net/vrf.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/vrf.ko drivers/net/vrf.o drivers/net/vrf.mod.o
