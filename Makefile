CC = gcc
OBJ = ana.o

all: test program

clean:
	rm -rf ana

test:
	$(CC) test/test.c -o testana

program:
	$(CC) src/ana.c -o ana 
