cmd_drivers/tty/n_gsm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/tty/n_gsm.ko drivers/tty/n_gsm.o drivers/tty/n_gsm.mod.o
