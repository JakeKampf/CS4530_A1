CC = gcc
#CFLAGS = -g -Wall -pedantic
CFLAGS = -O -Wall -pedantic

Source.c : Source.o all.o 

all.h: readfile.h structs.h interactive.h node.h
		touch all.h


clean:
	rm -f *.o core a1

run: Source
	./Source
