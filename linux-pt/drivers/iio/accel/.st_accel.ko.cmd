cmd_drivers/iio/accel/st_accel.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/accel/st_accel.ko drivers/iio/accel/st_accel.o drivers/iio/accel/st_accel.mod.o