cmd_drivers/input/keyboard/twl4030_keypad.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/keyboard/twl4030_keypad.ko drivers/input/keyboard/twl4030_keypad.o drivers/input/keyboard/twl4030_keypad.mod.o