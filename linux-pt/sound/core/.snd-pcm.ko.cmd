cmd_sound/core/snd-pcm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/core/snd-pcm.ko sound/core/snd-pcm.o sound/core/snd-pcm.mod.o
