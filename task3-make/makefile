C = g++

guessnumber: main.o check.o
	$(C) -o guessanumber main.o check.o

main.o: main.cpp
	$(C) -c main.cpp

check.o: check.h check.cpp
	$(C) -c check.cpp