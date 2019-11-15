OBJS=add.o main.o text.o
CC=gcc
CFLAGS=-c -Wall -g
add:$(OBJS)
	$(CC) $(OBJS) -o $@
$(OBJS):%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@
.PHONY:clean
clean:
	rm *.o add

