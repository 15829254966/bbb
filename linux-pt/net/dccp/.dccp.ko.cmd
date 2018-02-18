cmd_net/dccp/dccp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/dccp/dccp.ko net/dccp/dccp.o net/dccp/dccp.mod.o
