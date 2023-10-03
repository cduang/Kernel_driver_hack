MODULE_NAME :=Kokomi
RESMAN_CORE_OBJS:=
RESMAN_GLUE_OBJS:=
ifneq ($(KERNELRELEASE),)
	$(MODULE_NAME)-objs:=$(RESMAN_GLUE_OBJS) $(RESMAN_CORE_OBJS)
		obj-m := kokomi.o

	kokomi-objs := memory.o process.o entry.o
else
	KDIR := /home/cas/Kernel/cas/out
all:
	make -C $(KDIR) M=$(PWD) ARCH=arm64 SUBARCH=arm64 CLANG_TRIPLE=aarch64-linux-gnu- CROSS_COMPILE=aarch64-linux-gnu- CC=clang HOSTCC=clang DEPMOD=depmod CC=clang LD=ld.lld AR=llvm-ar NM=llvm-nm OBJCOPY=llvm-objcopy OBJDUMP=llvm-objdump READELF=llvm-readelf OBJSIZE=llvm-size STRIP=llvm-strip modules
	rm -rf *.mod .*cmd *.o *.mod.c .tmp_versions *.order *symvers *Module.markers .*.d
	llvm-strip --strip-debug kokomi.ko
clean:
	rm -rf *.mod .*cmd *.o *.mod.c .tmp_versions *.order *symvers *Module.markers .*.d
endif
