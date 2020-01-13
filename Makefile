
cc?=clang

all:
	$(cc) features-test.c -o features-test -mssse3
	./features-test
