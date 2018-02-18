cmd_fs/udf/udf.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o
