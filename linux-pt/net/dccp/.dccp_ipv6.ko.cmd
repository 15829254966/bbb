cmd_net/dccp/dccp_ipv6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/dccp/dccp_ipv6.ko net/dccp/dccp_ipv6.o net/dccp/dccp_ipv6.mod.o
