all: test 3-30-review
test.o: test.c
	cc -g -c test.c

3-30-review.o: 3-30-review.c
	cc -g -c 3-30-review.c

3-30-review: 3-30-review.o
	cc 3-30-review.o -o 3-30-review

test: test.o
	cc test.o -o test

.PHONY: clean
clean:
	-rm test.o test 3-30-review.o 3-30-review
