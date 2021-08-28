main: linkedlist.o tree.o main.o
	gcc linkedlist.o tree.o main.o -o main

linkedlist.o: linkedlist/linkedlist.c
	gcc -Wall -c "linkedlist/linkedlist.c"

tree.o: tree/tree.c
	gcc -Wall -c "tree/tree.c"

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm *.o main