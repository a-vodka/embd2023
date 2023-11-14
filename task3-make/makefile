.PHONY: clean
#presets
C        = g++
CFLAGS   =
DIR      = .
OBJ      = guessnum.o randomGen.o
TARGET   = game

#default rule
all: ${TARGET}

#compile game
${TARGET}: ${OBJ}
	${C} ${CFLAGS} ${OBJ} -o $@

guessnum.o: guessnum.cpp randomGen.h
	${C} ${CFLAGS} -c $<

randomGen.o: randomGen.cpp randomGen.h
	${C} ${CFLAGS} -c $<

#clean intermediate files
clean:
	rm -f ${TARGET} *.o
