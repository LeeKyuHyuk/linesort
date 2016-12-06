# Makefile for linesort

all:
	@g++ -o linesort linesort.cpp

install:
	@cp -v linesort /bin/linesort
	@chmod -v +x /bin/linesort

clean:
	@rm -v linesort
