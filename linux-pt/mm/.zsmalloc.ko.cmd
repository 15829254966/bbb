cmd_mm/zsmalloc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o
