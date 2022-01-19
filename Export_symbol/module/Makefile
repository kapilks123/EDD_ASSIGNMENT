obj-m := src.o dest.o

KERNELDIR = /lib/modules/$(shell uname -r)/build/

PWD := $(shell pwd)

default:
	make -C $(KERNELDIR) M=$(PWD) modules

#install:
#	make -C $(KERNELDIR) M=$(PWD) module_intall

clean:
	make -C $(KERNELDIR) M=$(PWD) clean
