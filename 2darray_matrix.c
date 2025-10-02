//printing 2d array in matrix and calculating sum of 2d array

#include <stdio.h>
int main() {
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; 
    int i, j, sum = 0;
    printf("The 2D array is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("The sum of the 2D array is: %d\n", sum);
   


    // printing transpose of 2d array
    printf("The transpose of the 2D array is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

     return 0;
}