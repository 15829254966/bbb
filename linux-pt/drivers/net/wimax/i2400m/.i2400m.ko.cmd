cmd_drivers/net/wimax/i2400m/i2400m.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/wimax/i2400m/i2400m.ko drivers/net/wimax/i2400m/i2400m.o drivers/net/wimax/i2400m/i2400m.mod.o