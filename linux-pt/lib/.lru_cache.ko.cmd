cmd_lib/lru_cache.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o
