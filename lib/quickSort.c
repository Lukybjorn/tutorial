#include <stdio.h> 
#include <stdlib.h>

#include "quickSort.h"
#include "partition.h"
#include "array_print.h"

void quicksort(int array[], int left, int right){
    if (left < right){
        int q = partition(array, left, right);
        quicksort(array, left, q);
        quicksort(array, q + 1, right);
    }
}    
