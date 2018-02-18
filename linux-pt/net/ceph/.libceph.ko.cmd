cmd_net/ceph/libceph.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ceph/libceph.ko net/ceph/libceph.o net/ceph/libceph.mod.o
