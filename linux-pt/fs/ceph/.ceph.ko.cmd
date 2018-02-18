cmd_fs/ceph/ceph.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ceph/ceph.ko fs/ceph/ceph.o fs/ceph/ceph.mod.o
