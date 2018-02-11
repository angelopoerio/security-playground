#!/bin/bash

echo "0" > /proc/sys/kernel/randomize_va_space # disable ALSR
cc basic.c -o basic -z execstack -fno-stack-protector -Wl,-z,norelro # executable stack, not stack protection, no relro
