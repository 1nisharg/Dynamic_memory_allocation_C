#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, n, i;
    ptr = (int *)malloc(n*sizeof(int));
    printf("\n enter size of int: ");
    scanf("%d", &n);
    printf("enter the elements of array: ");
    scanf("%d", ptr+i);

    for(i=0;i<n;i++){
        printf("the elements of array: ");
        printf("\n %d", *(ptr));
    }

}