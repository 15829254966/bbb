cmd_sound/core/snd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o
