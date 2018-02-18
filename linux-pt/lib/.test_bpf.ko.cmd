cmd_lib/test_bpf.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/test_bpf.ko lib/test_bpf.o lib/test_bpf.mod.o
