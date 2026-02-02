#include <stdio.h>

int main() {
    printf("USER INPUT ARRAY \n");

    int num;
    printf("Please enter the size of array:");
    scanf("%d",&num);

    int arr[num];
    printf("Please enter the elements of array:");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n ALL array values assigned \n");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}