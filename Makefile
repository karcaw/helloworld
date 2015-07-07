

CC=gcc

file: file.o
	$(CC) -o file file.o

file.o: file.c file.h
	$(CC) -c file.c

test: file
	./file
