cmd_firmware/am335x-pm-firmware.elf.gen.o := arm-linux-gnu-gcc -Wp,-MD,firmware/.am335x-pm-firmware.elf.gen.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabi/7/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -DCC_HAVE_ASM_GOTO             -c -o firmware/am335x-pm-firmware.elf.gen.o firmware/am335x-pm-firmware.elf.gen.S

source_firmware/am335x-pm-firmware.elf.gen.o := firmware/am335x-pm-firmware.elf.gen.S

deps_firmware/am335x-pm-firmware.elf.gen.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/am335x-pm-firmware.elf.gen.o: $(deps_firmware/am335x-pm-firmware.elf.gen.o)

$(deps_firmware/am335x-pm-firmware.elf.gen.o):
