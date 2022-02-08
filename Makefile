CC = g++
CFLAGS = -g -Wall -std=c++11

a.out: lab4main.cc numbers.h
	$(CC) $(CFLAGS) lab4main.cc -o a.out

clean:
	rm -rf a.out
