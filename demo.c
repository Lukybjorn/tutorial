#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
    printf("No %i in the array\n", x);
    exit(1);
}

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


int main(int argc, char **argv){
    int length;
    int target;
    if (argc < 2){
        length = 10;
        target = 9;
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
    
	srand(time(NULL));
    int my_array[length];
    /*
    int number = rand() % 10;
    for (int i = 0; i <= length; i++){
        my_array[i] = rand() % 10;
    }
    */
    int number = rand() % 10;
    for (int i = 0; i <= length; i++){
        my_array[i] = i * 3;
    }
    print_int_array(my_array, length); 
    int index = binary_search(my_array, length, target);
    printf("Found %i in index %i\n", target, index);
	return 0;
}
