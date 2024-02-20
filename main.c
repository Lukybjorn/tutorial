#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array_print.h"
#include "bin_search.h"
#include "quickSort.h"

int main(int argc, char **argv){
	srand(time(NULL)); // initilize the random seed
    int length;
    int target;
    if (argc < 2){
        length = (rand() % 10) * 20;
        while (length <1){
            length = (rand() % 10) * 20;
        }
        target = (rand() % 10) * (rand() % 10);
        printf("Array length not specified, set to %i.\nTarget not specified, set to %i.\n", length, target);
    }
    else if (argc == 2){
        printf("You need to enter 0 or 2 variables\n");
        return 1;
    }
    else {
        length = atoi(argv[1]);
        target = atoi(argv[2]);
    }
    
    int my_array[length];
    int number = rand() % 10;
    while (number < 1){
        number = rand() % 10;
    }
    for (int i = 0; i <= length; i++){
        my_array[i] = i * number;
    }
    print_int_array(my_array, length); 
    int index = binary_search(my_array, length, target);
    if (index >= 0){
        printf("Found %i in index %i\n", target, index);
    }
    printf("\n\nquicksort test:\n");

    int new_array[length];
    for (int i = 0; i <= length; i++){
        new_array[i] = rand() % 100 + 1;
    }
    print_int_array(new_array, length);
    quicksort(new_array, 0, length);
    print_int_array(new_array, length);
	return 0;
}
