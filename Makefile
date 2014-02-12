CC=g++
CFLAGS=-Wall -O3 -g -pg
STDC++=-lstdc++

Texasranger: walker.o main.o 
	$(CC) $(CFLAGS) -o Texasranger main.o walker.o 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp $(STDC++)

walker.o: walker.cpp walker.h random.h
	$(CC) $(CFLAGS) -c walker.cpp $(STDC++)

clean:
	rm -rf *.o
