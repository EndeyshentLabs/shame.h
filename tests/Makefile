CFLAGS = -Wall -Wextra -pedantic -std=gnu99 -I.. -O3 -ggdb3
LIBS = -L.. -lshame
CS = $(shell find -type f -name \*.c)
OBJS = $(CS:.c=.o)
EXES = $(OBJS:.o=.out)

all: $(EXES)

.o.out:
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	@echo 'Cleaning...'
	$(RM) *.o *.out
