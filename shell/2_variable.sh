#!/bin/bash

str="hello"
fullStr="${str} world"
echo ${fullStr} #输出hello world
echo ${#fullStr} # 11
echo ${fullStr:0:2} # he

day=("one" "two" "three" "four")
echo ${day[0]}
echo ${day[1]}
echo ${day[2]}

echo ${#day[*]}
echo ${#day[2]}
