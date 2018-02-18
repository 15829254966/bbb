cmd_sound/ac97_bus.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o
