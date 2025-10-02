// sum of indivisual row and column of 2d array
#include <stdio.h>

int main(){
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; 
    int i, j, sr, sc;


      printf("The 2D array is:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

    for(i=0; i<3; i++)
    {
        sr =0;
        sc =0;

        for(j=0; j<3; j++)
        {
            sr= sr + a[i][j]; 
            sc= sc + a[j][i];
        }

        printf("\n");

        printf("Sum of row %d is %d\n", i, sr);
        printf("Sum of column %d is %d\n", i, sc);
    }

    return 0;
}