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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int y,z;
    printf("Please enter the number of rows:");
    scanf("%d",&y);
    printf("Please enter the number of columns:");
    scanf("%d",&z);
    int arr1[y][z];
    printf("Please enter the elements of array:");
    for(int i = 0;i < y; i++){
        for(int j = 0;j < z;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("SECOND ARRAY \n");
    for(int i = 0;i < y; i++){
        for(int j = 0;j < z;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    if(m==y&&n==z){
        printf("ADDITION ARRAY \n");
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arr[i][j] + arr1[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}