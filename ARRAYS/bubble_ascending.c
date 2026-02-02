#include <stdio.h>

int main() {
    printf("BUBBLE SORT IN ASCENDING ORDER \n");

    int arr[] = {1,88,2,99.3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Orignal Number array \n");
    for(int i = 0;i < len;i++){
        printf("%d ",arr[i]);
    }

    for(int i = 0;i < len;i++){
        for(int j = 0;j< len-1;j++){
                if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = temp;
            }

        }
    }
    printf("\n");
    printf("SORTED Number array \n");
    for(int i = 0;i < len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}