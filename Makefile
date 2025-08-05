CC = gcc
CFLAGS = -Wall -c
OBJECTS = movement.o

all: $(OBJECTS)

movement.o: movement.c movement.h
	$(CC) $(CFLAGS) movement.c -o movement.o

clean:
	rm -f $(OBJECTS)

