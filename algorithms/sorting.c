#include "algo.h"
#include <stdio.h>
#include <stdlib.h>

// Sorting a given list of integers
// Runs in order N^2
void sort(int *list, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

// Optimized merge sort algorithm
// Runs in order N log N
void merge_sort(int *list, int size) {
    int i, j, k;
    int *left = malloc(sizeof(int) * size);
    int *right = malloc(sizeof(int) * size);
    int *merged = malloc(sizeof(int) * size);

    // Split the list into two parts
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            left[i] = list[i];
        } else {
            right[i - 1] = list[i];
        }
    }
    
    // Recursively sort the two parts
    merge_sort(left, size / 2);
    merge_sort(right, size / 2);

    // Merge the two parts
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            merged[i] = left[i / 2];
        } else {
            merged[i] = right[i / 2];
        }
    }
    
    // Copy the merged list back to the original list
    for (i = 0; i < size; i++) {
        list[i] = merged[i];
    }

    // Clear the Memory to avoid Memory leaks
    free(left);
    free(right);
    free(merged);
}