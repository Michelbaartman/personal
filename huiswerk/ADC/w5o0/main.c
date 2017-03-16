#include <stdio.h>

int som(int n){
    if(n==1){
        return 1;
        printf("\nend");
    } else {
        return som(n-1)+n;
    }
}

void print_array(int *array, int size, int location){
    if(location == size){
        return 1;
    } else {
        printf("[%d]", array[location]);
        return print_array(array, size, location+1);
    }
}

int main(int argc, char **argv)
{
	printf("hello world");
    
    int s = 6;
    int intArray[6] = {1, 5, 4, 9, 8, 0};
    int n = som(5);
    printf("\n%d\n", n);
    
    print_array(intArray, s, 0);
    
	return 0;
}
