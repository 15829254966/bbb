cmd_lib/test_user_copy.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/test_user_copy.ko lib/test_user_copy.o lib/test_user_copy.mod.o
