cmd_drivers/net/eql.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/eql.ko drivers/net/eql.o drivers/net/eql.mod.o
