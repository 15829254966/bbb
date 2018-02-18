cmd_arch/arm/boot/uImage := /bin/sh ./scripts/mkuboot.sh -A arm -O linux -C none  -T kernel -a 0x82000000 -e 0x82000000 -n 'Linux-4.4.89+' -d arch/arm/boot/zImage arch/arm/boot/uImage
