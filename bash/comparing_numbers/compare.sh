#!/bin/bash

# read input from user
read x
read y

# determine if x>y, x<y, or x=y
if ((x > y)); then
    echo "X is greater than Y"
elif ((x < y)); then
    echo "X is less than Y"
else
    echo "X is equal to Y"
fi

