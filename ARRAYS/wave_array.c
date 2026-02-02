#include <stdio.h>

int main() {
    printf("WAVE ARRAY \n");
        int arr[] = {1,2,5,4,3,6,7};
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

        if(arr[i] % 2 == 0){
            int temp2 = arr[i];
            arr[i]=arr[i-1];
            arr[i-1] = temp2;            
        }
    }
    printf("\n");
    printf("WAVE Number array \n");
    for(int i = 0;i < len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}