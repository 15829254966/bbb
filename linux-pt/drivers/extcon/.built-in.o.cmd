cmd_drivers/extcon/built-in.o :=  arm-linux-gnu-ld -EL    -r -o drivers/extcon/built-in.o drivers/extcon/extcon.o drivers/extcon/extcon-gpio.o drivers/extcon/extcon-palmas.o drivers/extcon/extcon-usb-gpio.o 