//initializes with 0.
// ptr = (*int)calloc(5,sizeof(int)); 
// 5 is the no. of location we want, sizeof is what size we need per location in form of INT(as specidied).
// calloc will return void ptr and we typecasted it into int ptr.

#include <stdio.h>
#include <stdlib.h> //library for DMA
int main(){

    /*float *ptr;

    ptr = (float *)calloc(5,sizeof(float));
    for(int i=0;i<5;i++){
        printf("%f\n", ptr[i]);
    }
}
*/
//WAP to allocate memory of size n, where n is entered by the user.

int *ptr;
int n;
printf("enter a number n: %d \n");
scanf("%d", &n);

ptr = (int *)calloc(n, sizeof(int));
for(int i=0;i<n;i++){
    printf("%d \n", ptr[i]);
}

}
