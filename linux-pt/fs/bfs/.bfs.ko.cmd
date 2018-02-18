cmd_fs/bfs/bfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/bfs/bfs.ko fs/bfs/bfs.o fs/bfs/bfs.mod.o
