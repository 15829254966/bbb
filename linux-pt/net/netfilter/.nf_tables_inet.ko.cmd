cmd_net/netfilter/nf_tables_inet.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/nf_tables_inet.ko net/netfilter/nf_tables_inet.o net/netfilter/nf_tables_inet.mod.o