#include <stdio.h>
#include <stdlib.h>

#include "array_print.h"

void print_int_array(int *array, int length){
    if (length < 1){
        printf("[]\n");
    }
    else {
        printf("[");
        for (int i = 0; i < length - 1; i++){
            printf("%i, ",array[i]);
        }
        printf("%i]\n", array[length]);
    }
}

