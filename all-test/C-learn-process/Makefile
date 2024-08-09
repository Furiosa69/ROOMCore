
CC=gcc
CFLAGS=-Wall -g
SOURCES=ex18.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=ex18

all:$(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

