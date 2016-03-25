CC = gcc
OBJ = ana.o

all: tests program

clean:
	rm -rf ana testana

tests:
	$(CC) test/test.c src/ana.c -lcheck -o testana

program:
	$(CC) src/ana.c src/main.c -o ana 
