//sum of two matrices
#include <stdio.h>

int a[2][3], b[2][3], c[2][3], i, j;

int main()
{
printf("Enter elemtents of first matrix:\n");
for(i=0; i<2; i++)
{
for(j=0; j<3; j++)
{
    scanf("%d", &a[i][j]);
}
}
printf("Enter elemtents of second matrix:\n");
for (i=0; i<2; i++)
{
for(j=0; j<3; j++)
{
    scanf("%d", &b[i][j]);
}
}

for(i=0; i<2; i++)
{
for(j=0; j<3; j++)
{
    c[i][j] = a[i][j] + b[i][j];
}
}

printf("\n");

printf("First matrix (a):\n");
for(i=0; i<2; i++) {
    for(j=0; j<3; j++) {
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}

printf("\nSecond matrix (b):\n");
for(i=0; i<2; i++) {
    for(j=0; j<3; j++) {
        printf("%d\t", b[i][j]);
    }
    printf("\n");
}

printf("\nSum matrix (c):\n");
for(i=0; i<2; i++) {
    for(j=0; j<3; j++) {
        printf("%d\t", c[i][j]);
    }
    printf("\n");
}

return 0;

}