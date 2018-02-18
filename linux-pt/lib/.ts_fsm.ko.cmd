cmd_lib/ts_fsm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/ts_fsm.ko lib/ts_fsm.o lib/ts_fsm.mod.o
