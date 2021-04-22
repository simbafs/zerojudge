#!/bin/bash

cd $(git rev-parse --show-toplevel)
id=$1
if [[ -z $id ]];then
	echo -n Problem ID: 
	read id
fi

cp ./template/id.cpp working/$id.cpp
cp ./template/id.data working/$id.data
