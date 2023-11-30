#!/bin/bash

wins=0

output="../task1-simple-program/a.out"

while true;
    do
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