CC=gcc
CFLAGS=-I.
PROG=mystack

OBJ := main.o
OBJ += mystack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o $(PROG)

invoke: $(PROG)
	./$(PROG)