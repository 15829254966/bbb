cmd_sound/soundcore.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/soundcore.ko sound/soundcore.o sound/soundcore.mod.o
