cmd_drivers/staging/speakup/speakup_soft.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/staging/speakup/speakup_soft.ko drivers/staging/speakup/speakup_soft.o drivers/staging/speakup/speakup_soft.mod.o