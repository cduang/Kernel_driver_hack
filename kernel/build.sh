#!/bin/bash
rm -rf *.mod* *.sym* *.cmd* *.order *.o
export PATH=/home/cas/Kernel/toolchains/zyc-clang/bin:$PATH
make CROSS_COMPILE=aarch64-linux-gnu- LLVM=1 LLVM_IAS=1 ARCH=arm64 -C /home/cas/Kernel/cas/out M=$PWD -j16
