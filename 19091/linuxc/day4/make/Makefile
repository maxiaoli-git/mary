CC=gcc
OBJS=add.o main.o
CFLAGS=-c -Wall -g -O
add:$(OBJS)
	$(CC) $(OBJS) -o $@
$(OBJS):%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@
.PHONY:clean
clean:
	rm *.o
