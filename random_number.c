#include<stdio.h>


void main(){
    int a[7], i;

    printf("Enter 7 numbers: \n");
    for(i = 0; i < 7; i++){
        scanf("%d", &a[i]);
    }

    for( i=0; i<7; i++)
    {
        printf("Array element at index %d: is %d\n", i, a[i]);
    }

    printf(" Reversing the array\n");
    for (i = 6; i >= 0; i--){
        printf("Array element at index: %d is: %d\n", i, a[i]);
    }

}