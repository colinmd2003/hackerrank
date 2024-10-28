#!/bin/bash

# read number input
read x
read y

# calculate sum, difference, product, and quotient
sum=$((x + y))
difference=$((x - y))
product=$((x * y))
quotient=$((x / y))

# print sum, difference, product, and quotient
echo -e "$sum\n$difference\n$product\n$quotient\n"

