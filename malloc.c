//takes number of bytes to be allocated & returns a pointer of type void.

// ptr = (*int)malloc(5*sizeof(int));   'sizeof' is a function which returns the size of datatype.



#include <stdio.h>
#include <stdlib.h> //library for DMA
int main(){

    //int *ptr; 
    float *ptr;
/*    ptr = (int *)malloc(5*sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 6;
    ptr[4] = 9;
    for(int i=0;i<5;i++){
        printf("%d\n", ptr[i]);
    }
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(char));

}; */

//WAP to aallocate memory to store 5 prices.

ptr = (float *)malloc(5*sizeof(float));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 6;
    ptr[4] = 9;
    for(int i=0;i<5;i++){
        printf("%f\n", ptr[i]);
    }

}