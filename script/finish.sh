#!/bin/bash

cd $(git rev-parse --show-toplevel)
id=$1
if [[ -z $id ]];then
	echo -n Problem ID:\ 
	read id
fi

rm ./working/$id
mv ./working/$id.cpp ./finish
mv ./working/$id.data ./data

git add .
git commit -m $id
git push
