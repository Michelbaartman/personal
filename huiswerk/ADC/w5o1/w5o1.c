/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 5 opdracht 1
/* --------------------------- */
/// @file
/// w5o1 Week 5 Opdracht 1
/// Checkes if array is sorted or not, counting upwards and starting from the back.


#include <stdio.h>
#include <stdbool.h>

/*! \brief is_sorted
 *  goes by array a[] and returns either a true or false if the array is sorted or not, counting upwards.
 */
 bool is_sorted(int a[], int size) { // size is lengte van a
    if(size <= 1){
        printf("[end found, returning true]");
        return true;
    }else if(size == 2){
        if(a[size] < a[size-1]){
            printf("\n[aSize-1 %d < aSize %d, return false]", a[size], a[size-1]);
            return false;
        }
        return true;
    } else {
        if(a[size] < a[size-1]){
            printf("\n[aSize-1 %d < aSize %d, return false]", a[size-1], a[size]);
            return false;
        }
        return is_sorted(a, size-1);
    }
 }

/*! \brief main
 *  creates 3 arrays with variety of data. checks wether these are sorted.
 */
int main(int argc, char **argv)
{
	printf("hello world\n");
    int s = 5;
    int a[5] = {1, 2, 3, 5, 6};
    bool state = is_sorted(a, s-1);
    printf("\nstate = %d", state);
    
    int a2[5] = {1, 2, 3, 4, 5};
    state = is_sorted(a2, s-1);
    printf("\nstate = %d", state);
    
    int a3[5] = {4, 2, 1, 8, 4};
    state = is_sorted(a3, s-1);
    printf("\nstate = %d", state);
    
	return 0;
}
