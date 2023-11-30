#!/bin/bash

wins=0

cpp_file="../task1-simple-program/task1.cpp"

while true;
    do
	g++ "$cpp_file" -o "guessanumber"
	output="./guessanumber"
	$output
	if [ $? -eq 0 ]
	    then
	    let wins+=1;
	    echo "Good job!"
	else
	    echo "Wish a good luck next time"
	fi
	read -p "continue?[y/n]: " ans
	if [ "$ans" == "n" ]
	    then
		break
	fi
done

echo "You win $wins times! :>"