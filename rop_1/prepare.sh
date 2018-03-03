#!/bin/bash

echo "0" > /proc/sys/kernel/randomize_va_space # disable ALSR
cc rop_1.c -o rop_1 -fno-stack-protector -Wl,-z,norelro # no stack protection, no relro
