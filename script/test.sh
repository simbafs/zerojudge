#!/bin/bash

cd $(git rev-parse --show-toplevel)/working
id=$1
if [[ -z $id ]];then
	echo -n Problem ID: 
	read id
fi

make $id &&
time ./$id < $id.data

