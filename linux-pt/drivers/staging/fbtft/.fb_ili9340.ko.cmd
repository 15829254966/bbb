cmd_drivers/staging/fbtft/fb_ili9340.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/staging/fbtft/fb_ili9340.ko drivers/staging/fbtft/fb_ili9340.o drivers/staging/fbtft/fb_ili9340.mod.o