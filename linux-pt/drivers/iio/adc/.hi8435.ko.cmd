cmd_drivers/iio/adc/hi8435.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/adc/hi8435.ko drivers/iio/adc/hi8435.o drivers/iio/adc/hi8435.mod.o