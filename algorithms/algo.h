#ifndef _ALGORITHM_H
#define _ALGORITHM_H
#include <stdio.h>
#include <stdlib.h>


// Binary search for a specific item in a list
// The list should be sorted in ascending order or descending order
int binarySearch(int *list, int size, int item);

// Sorting
void merge_sort(int *list, int size);
void sort(int *list, int size);


#endif