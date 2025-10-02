// Calculate sum, avg, max, min, even and odd numbers of an array

#include <stdio.h>

int main(){
    int a[10], i, sum = 0,  max, min, even = 0, odd = 0;
    float avg;

    printf("Enter 10 student marks: \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    
    avg= sum/10;

    max = a[0];
    min = a[0];

    for ( i = 0; i < 10; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
        
    
    for ( i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) even += 1;
        if (a[i] % 2 == 1) odd += 1;
    }
    
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    

    return 0;
}