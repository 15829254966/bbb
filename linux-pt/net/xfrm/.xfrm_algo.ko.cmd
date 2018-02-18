cmd_net/xfrm/xfrm_algo.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/xfrm/xfrm_algo.ko net/xfrm/xfrm_algo.o net/xfrm/xfrm_algo.mod.o
