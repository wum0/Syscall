# SysCall

#### 介绍

https://p4yl0ad.github.io/pages/b.html

代码主要来源于这篇文章，我只是做成了项目。

该项目为一个非常小的 Shellcode Loader 。

主要文件为 syscall.h   main.c  syscall.asm 。

syscall.asm 中主要实现了 函数的三环部分
main.c 中调用了 汇编实现的函数
syscall.h 实现了 XOR(这里没用到）和 memcpy 复制

只保证 Release x64 可编译成功，不保证运行成功，因为我自己也没有运行成功。
要求安装  WDK ，需要使用到 ntdllp.lib （可能唯一需要使用的就是 DbgPrint了）