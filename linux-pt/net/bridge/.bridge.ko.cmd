cmd_net/bridge/bridge.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o
