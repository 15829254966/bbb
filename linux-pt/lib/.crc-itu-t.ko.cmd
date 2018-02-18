cmd_lib/crc-itu-t.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/crc-itu-t.ko lib/crc-itu-t.o lib/crc-itu-t.mod.o
