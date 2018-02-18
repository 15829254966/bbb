cmd_net/unix/unix_diag.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/unix/unix_diag.ko net/unix/unix_diag.o net/unix/unix_diag.mod.o
