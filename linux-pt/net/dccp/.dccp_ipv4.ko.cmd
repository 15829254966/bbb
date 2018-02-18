cmd_net/dccp/dccp_ipv4.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/dccp/dccp_ipv4.ko net/dccp/dccp_ipv4.o net/dccp/dccp_ipv4.mod.o
