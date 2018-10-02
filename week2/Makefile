CC=gcc
CFLAGS=-I.
DEPS = landscape.h list.h hillclimb.h
OBJ = main.o list.o hillclimb.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

search: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
