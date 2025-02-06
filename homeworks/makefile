CC = gcc
CFLAGS = -I. -g -w
DEPS = hw1header.h
OBJ = hw1.o pattern_checker.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
pattern_finder: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)