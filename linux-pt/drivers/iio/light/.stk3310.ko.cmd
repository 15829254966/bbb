cmd_drivers/iio/light/stk3310.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/light/stk3310.ko drivers/iio/light/stk3310.o drivers/iio/light/stk3310.mod.o