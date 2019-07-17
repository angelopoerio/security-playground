#!/bin/bash

unset format
for i in $(seq 20); do format+='%#08x.'; done;
./format1 $(echo $format)
