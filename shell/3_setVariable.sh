#!/bin/bash


echo \$$#
eval echo \$$#

if [ $# != 2 ]; then
    echo "Uage: $0 xing ming"
    exit 1
fi

xing=$1
ming=$2

echo "$xing"
echo "$ming"
echo $@
echo $* #输出所有的参数
echo $? #上一条语句是否执行成功

echo pwd
echo `pwd`
echo $(pwd)
