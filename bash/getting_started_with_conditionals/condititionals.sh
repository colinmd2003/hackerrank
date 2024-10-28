#!/bin/bash

# read user input
read -n 1 char

if [ "$char" = "y" ] || [ "$char" = "Y" ]; then
    echo "YES"
else
    echo "NO"
fi

