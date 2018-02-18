cmd_net/sctp/sctp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sctp/sctp.ko net/sctp/sctp.o net/sctp/sctp.mod.o
