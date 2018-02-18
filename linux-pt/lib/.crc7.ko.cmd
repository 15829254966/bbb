cmd_lib/crc7.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o
