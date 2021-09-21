main: linkedlist.o tree.o sorting.o binary_search.o main.o
	gcc linkedlist.o tree.o sorting.o binary_search.o main.o -o main

linkedlist.o: linkedlist/linkedlist.c
	gcc -Wall -c "linkedlist/linkedlist.c"

tree.o: tree/tree.c
	gcc -Wall -c "tree/tree.c"

sorting.o: algorithms/sorting.c
	gcc -Wall -c "algorithms/sorting.c"

binary_search.o: algorithms/binary_search.c
	gcc -Wall -c "algorithms/binary_search.c"

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm *.o main