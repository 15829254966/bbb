cmd_drivers/pwm/pwm-tiehrpwm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/pwm/pwm-tiehrpwm.ko drivers/pwm/pwm-tiehrpwm.o drivers/pwm/pwm-tiehrpwm.mod.o