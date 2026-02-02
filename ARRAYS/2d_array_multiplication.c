#include <stdio.h>

int main() {
    printf("2D ARRAY MULTIPLICATION \n");

    int m,n,a,b;
    printf("Please enter the number of rows:");
    scanf("%d",&m);
    printf("Please enter the number of column:");
    scanf("%d",&n);
    int multi_array[m][n],array1[m][n],array2[m][n];

    // FIRST ARRAY
    printf("\nPlease enter the elements of first array\n");
    for(int i = 0;i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&array1[i][j]);
        }
    }
    // SECOND ARRAY
    printf("\nPlease enter the elements of second array\n");
    for(int i = 0;i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&array2[i][j]);
        }
    }

    // MULTIPLICATION ARRAY
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a = 0,multi_array[i][j] = 0;
            for(int k = 0; k < n; k++){
                a = array1[i][k] * array2[k][j];
                multi_array[i][j] += a;
            }
        }
    }

    for(int i = 0; i<m ; i++){
        for(int j = 0; j<n;j++){
            printf("%d ",multi_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}