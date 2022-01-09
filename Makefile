obj-m :=	001_char_dvr.o
KERNDIR:= /lib/modules/$(shell uname -r)/build/
PWD:= $(shell pwd)
default:
	make -C $(KERNDIR) M=$(PWD) modules

install:
	make -C $(KERNDIR) M=$(PWD) modules_install

clean:
	 make -C $(KERNDIR) M=$(PWD) clean

