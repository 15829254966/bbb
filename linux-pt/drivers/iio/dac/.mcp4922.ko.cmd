cmd_drivers/iio/dac/mcp4922.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/dac/mcp4922.ko drivers/iio/dac/mcp4922.o drivers/iio/dac/mcp4922.mod.o