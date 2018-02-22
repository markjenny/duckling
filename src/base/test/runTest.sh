#########################################################################
# File Name: runTest.sh
# Author: markjenny
# mail: lijianlin0819@163.com
#########################################################################
#!/usr/bin/env bash
#!/bin/bash

mkdir build &
cd build
cmake ..
make clean &
make
cd bin
./mainUnittest

