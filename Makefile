# Makefile

CC = gcc
CFLAGS = -g -O2 -W -Wall
LDFLAGS = -lpafe

SUICA = suica
SUICA_SRCS = main.c
SUICA_OBJS = $(SUICA_SRCS:.c=.o)

.PHONY: build
build: $(SUICA)

$(SUICA): $(SUICA_OBJS)
	$(CC) -o $@ $(SUICA_OBJS) $(LDFLAGS)

.SUFFIXES:
.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	rm -rf $(SUICA) $(SUICA_OBJS) *.dSYM
