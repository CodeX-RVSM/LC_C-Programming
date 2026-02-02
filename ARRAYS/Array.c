#include <stdio.h>

int main() {
    printf("ARRAY \n");
    int a;
    int arr[]={10,20,30,40,50,60,70};

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}