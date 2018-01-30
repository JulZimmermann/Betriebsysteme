#!/bin/bash

x=5
y=0

for ((i=$y; i < $x; i++))
do
    echo $i
done

for file in $(ls)
do
    echo $file
done
