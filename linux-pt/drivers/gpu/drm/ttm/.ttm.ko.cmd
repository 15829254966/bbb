cmd_drivers/gpu/drm/ttm/ttm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/gpu/drm/ttm/ttm.ko drivers/gpu/drm/ttm/ttm.o drivers/gpu/drm/ttm/ttm.mod.o