cmd_drivers/spi/spidev.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/spi/spidev.ko drivers/spi/spidev.o drivers/spi/spidev.mod.o
