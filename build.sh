#!/bin/bash
if [ -d "build" ]; then
  rm -r build
fi

mkdir build
cd build
cmake ..
make

cd build
echo "build completed!"