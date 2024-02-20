#include <stdio.h> 
#include <stdlib.h>

#include "partition.h"
#include "array_print.h"

int partition(int array[], int left, int right){
    int x = array[left];
    int i = left - 1;
    int j = right + 1;
    while (1){
        while (array[++i] < x);
        while (array[--j] > x);
        if (i < j){
            int placeholder = array[i];
            array[i] = array[j];
            array[j] = placeholder;
        }
        else {
            return j;
        }
    }
    return 0;
}    
