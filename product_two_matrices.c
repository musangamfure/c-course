//product of two matrices
#include <stdio.h>
#define N 50

int main() {
    int a[N][N], b[N][N], c[N][N], m,n, p,q, i, j, k;

    printf("Enter rows and columns of first matrix:\n");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix:\n");
    scanf("%d %d", &p, &q);
    printf("Enter elements of second matrix:\n");
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if(n != p) {
        printf("Matrix multiplication not possible because columns of first matrix not equal to rows of second matrix.\n");
        return 0;
    }
    for(i=0; i<m; i++) {
        for(j=0; j<q; j++) {
            c[i][j] = 0; // Initialize the element to zero before summation
            for(k=0; k<n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("First matrix (a):\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix (b):\n");
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("Product matrix (c):\n");
    for(i=0; i<m; i++) {
        for(j=0; j<q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;

  

   
}

