#include <stdio.h>

int main() {
    printf("REVERSE ARRAY PRINTER \n");
    int arr[]={10,20,30,40,50,60,70};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=length-1;i>=0;i--){
        printf("%d \n",arr[i]);
    }

    return 0;
}