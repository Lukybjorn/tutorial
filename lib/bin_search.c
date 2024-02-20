#include <stdio.h>
#include <stdlib.h>

#include "bin_search.h"

int binary_search(int *array, int length, int x){
    int left = 0;
    int right = length - 1;
    while (left <= right){
        int mid  = (left + right) / 2;
        if (array[mid] == x){
            return mid;
        }
        else if (array[mid] > x){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    printf("No %i in the array!\n", x);
    return -1;
}

