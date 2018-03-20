# makefile
cc=g++
CFLAGS= -c -Wall
LFLAGS= -Wall
OBJ=foo.o goo.o main.o
EXE=prog

${EXE}: ${OBJ}
        ${cc} ${LFLAGS} -o ${@} ${OBJ}

foo.o:  foo.h goo.h foo.cpp
        ${cc} ${CFLAGS} -o ${@} foo.cpp

goo.o:  goo.h goo.cpp
        ${cc} ${CFLAGS} -0 ${@} goo.cpp

main.o: foo.h main.cpp
        ${cc} ${CFLAGS} -o ${@} main.cpp

clean:
        rm -f ${OBJ} ${EXE}
