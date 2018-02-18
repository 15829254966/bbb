cmd_crypto/tgr192.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/tgr192.ko crypto/tgr192.o crypto/tgr192.mod.o
