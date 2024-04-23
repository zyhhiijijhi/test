#!/bin/bash

i=$1
a=$(($i-1))
cp -r ex${a} ex${i}
cd ex${i}
make clean
mv ex${a}.c ex${i}.c

sed -i "s/ex${a}/ex${i}/g" makefile
