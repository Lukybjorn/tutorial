#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array_print.h"
#include "bin_search.h"

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
    printf("Found %i in index %i\n", target, index);
	return 0;
}
