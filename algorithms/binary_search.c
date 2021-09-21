#include "algo.h"
#include <stdio.h>
#include <stdlib.h>

// Binary search for a specific item in a list
// The list should be sorted in ascending order or descending order
int binarySearch(int *list, int size, int item) {
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (list[mid] == item) {
            return mid;
        } else if (list[mid] < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}