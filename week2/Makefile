CC=g++
CFLAGS=-I.
DEPS = landscape.hh search.hh
OBJ = main.o search.o landscape.o

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

search: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
