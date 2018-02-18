cmd_net/dccp/dccp_diag.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/dccp/dccp_diag.ko net/dccp/dccp_diag.o net/dccp/dccp_diag.mod.o
