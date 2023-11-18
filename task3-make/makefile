.PHONY: clean debug-check warning-check

#presets
C        = g++
CFLAGS   =
DIR      = .
OBJ      = guessnum.o randomGen.o
TARGET   = game

#cppcheck
CHECKOBJ = guessnum.cpp randomGen.cpp randomGen.h
CHECKOUT = check.txt
CHECKOPT = --enable=all --output-file=${CHECKOUT}

#export path for shared library
#doesn't work no matter what
#export LD_LIBRARY_PATH = ${`pwd`}

#default rule
all: ${TARGET}

#compile game
${TARGET}: ${OBJ}
	${C} ${CFLAGS} ${OBJ} -o $@

guessnum.o: guessnum.cpp randomGen.h
	${C} ${CFLAGS} -c $<

randomGen.o: randomGen.cpp randomGen.h
	${C} ${CFLAGS} -c $< -fPIC

#compiles game implements static library
gamestatic: guessnum.o lib_randomGen.a
	${C} ${CFLAGS} -o ${TARGET} $< -L${DIR} -l_randomGen

#create static library
lib_randomGen.a: lib_randomGen.o
	ar rcs $@ $<

lib_randomGen.o: randomGen.cpp
	${C} ${CFLAGS} -c $< -o $@

#compile game implements dynamic library
gamedynamic: guessnum.o lib_randomGen.so
	${C} ${CFLAGS} -o ${TARGET} $< -L${DIR} lib_randomGen.so

#create dynamic library
lib_randomGen.so: randomGen.o
	${C} ${CFLAGS} $< -shared -o $@ #lib_randomGen.so

cppcheck: ${CHECKOBJ}
	cppcheck ${CHECKOPT} ${CHECKOBJ}

#impletens debug information during compilation
debug: debug-check ${TARGET}

#add -g flag to CFLAGS
debug-check:
	$(eval CFLAGS += -g)

#implements warnings during compilation
warning: warning-check ${TARGET}

#add warning flags (-Wall -Wextra) to CFLAGS
warning-check:
	${eval CFLAGS += -Wall -Wextra}

#clean intermediate files
clean:
	rm -f ${TARGET} *.o *.a *.so *.txt
