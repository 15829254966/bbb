cmd_crypto/authencesn.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o
