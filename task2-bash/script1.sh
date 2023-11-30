#!/bin/bash
#!/bin/sh

base="../task2-bash/tmp/guessanumber/"

if [ ! -e $base ];
    then
    mkdir -p $base
fi

file1="../task1-simple-program/task1.cpp"

cp $file1 $base

tar cfz guessanumber.tar.gz $file1

release="./release/"

if [ ! -e  $release ];
    then
    mkdir -p $release
fi
cp guessanumber.tar.gz ./release/