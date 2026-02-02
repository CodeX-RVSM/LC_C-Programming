#include <stdio.h>
int main() {
    printf("2D ARRAY \n");
    int n,m;
    printf("Please enter the number of rows:");
    scanf("%d",&n);
    printf("Please enter the number of columns:");
    scanf("%d",&m);
    int arr[n][m];
    printf("Please enter the elements of array:");
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("FIRST ARRAY \n");
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}