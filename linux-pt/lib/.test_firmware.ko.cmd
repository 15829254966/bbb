cmd_lib/test_firmware.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/test_firmware.ko lib/test_firmware.o lib/test_firmware.mod.o
