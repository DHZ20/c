all: test
test.o: test.c
	cc -g -c test.c

test: test.o
	cc test.o -o test

.PHONY: clean
clean:
	-rm test.o test
