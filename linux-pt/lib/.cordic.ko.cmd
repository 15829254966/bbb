cmd_lib/cordic.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/cordic.ko lib/cordic.o lib/cordic.mod.o
