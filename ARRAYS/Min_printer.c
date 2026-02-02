#include <stdio.h>

int main() {
    printf("MIN OF ARRAY PRINTER \n");
    int arr[]={1012,20,9999,-40,50,60,-70,71,45};
    int a,max= arr[0];
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("MINIMUM NUMBER IS:%d",max);
    return 0;
}