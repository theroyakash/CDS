CC = gcc
CFLAGS = -Wall


OBJFILES = linkedlist.o stacks.o queue.o tree.o
TARGET = DSAPP

all: $(TARGET)


$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) main.c $(OBJFILES)

linkedlist.o: includes/linkedlist.c
	gcc -Wall -c includes/linkedlist.c

stacks.o: includes/stacks.c
	gcc -Wall -c includes/stacks.c

queue.o: includes/queue.c
	gcc -Wall -c includes/queue.c

tree.o: includes/tree.c
	gcc -Wall -c includes/tree.c


clean:
	rm -f $(OBJFILES) $(TARGET) *~



#
#DS: linkedlist.o stacks.o queue.o tree.o
#	gcc -Wall -o DS main.c linkedlist.o stacks.o queue.o tree.o
#
