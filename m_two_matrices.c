//mulitiplication of two matrices
#include <stdio.h>

int a[3][3], b[3][3], c[3][3], i, j, k;

int main()
{
printf("Enter elements of first matrix:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("Enter elements of second matrix:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        scanf("%d", &b[i][j]);
    }
}

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        c[i][j] = 0; // Initialize the element to zero before summation

        for(k = 0; k < 3; k++)
        {
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}

printf("The first matrix is:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t ", a[i][j]);
    }
    printf("\n");
}
printf("The second matrix is:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t ", b[i][j]);
    }
    printf("\n");
}

printf("The product of the matrices is:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t ", c[i][j]);
    }
    printf("\n");

}
}
