#!/bin/bash

# read side length inputs
read x
read y
read z

# determine type of triangle
if ((x == y && y == z)); then
    echo "EQUILATERAL"
elif ((x == y || y == z || x == z)); then
    echo "ISOSCELES"
else
    echo "SCALENE"
fi

