CC = g++
CFLAGS = -g -Wall -std=c++11

a.out: lab4main.o numbers-zach.o
	$(CC) $(CFLAGS) lab4main.o numbers-zach.o -o a.out

lab4main.o: lab4main.cc
    $(CC) $(CFLAGS) -c lab4main.cc

numbers-zach.o: numbers-zach.cc numbers-zach.h
    $(CC) $(CFLAGS) -c numbers-zach.cc

clean:
	rm -rf lab4main.o numbers-zach.o a.out
