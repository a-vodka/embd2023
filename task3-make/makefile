C = g++
WAY=.

guessnumber: main.o check.o
	$(C) -o guessanumber main.o check.o

guessanumber_stat: main.o lib_check.a
	$(C) -o guessanumber_stat main.o -L$(WAY) lib_check.a

guessanumber_dyn: main.o lib_check.so
	$(C) -o guessanumber_dyn main.o -L$(WAY) lib_check.so

main.o: main.cpp
	$(C) -c main.cpp

check.o: check.h check.cpp
	$(C) -c -fPIC check.cpp

lib_check.a: check.o
	ar rcs lib_check.a check.o

lib_check.so: check.o
	g++ check.o -shared -o lib_check.so

clean: 
	rm -f *.o *.gch *.a guessanumber guessanumber_stat
