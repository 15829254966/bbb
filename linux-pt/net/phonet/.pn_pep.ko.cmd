cmd_net/phonet/pn_pep.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/phonet/pn_pep.ko net/phonet/pn_pep.o net/phonet/pn_pep.mod.o
