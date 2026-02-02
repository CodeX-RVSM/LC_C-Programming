#include <stdio.h>

int main() {
    printf("SELECTION SORT ON ARRAY \n");
    
    int arr[] = {1,99,33,24,53,23,19,98};
        int len = sizeof(arr)/sizeof(arr[0]);

    printf("Orignal Number array \n");
    for(int i = 0;i < len;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i < len;i++){
        int mininmum_index = i;
        for(int j = i+1;j< len;j++){
            if(arr[mininmum_index]>arr[j]){
                mininmum_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mininmum_index];
        arr[mininmum_index] = temp;
    }
    printf("\n");
    printf("SORTED Number array \n");
    for(int i = 0;i < len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}