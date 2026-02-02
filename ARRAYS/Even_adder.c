#include <stdio.h>

int main() {
    printf("EVEN ARRAY PRINTER \n");
    int a,sum=0;
    int arr[]={10,20,30,40,50,60,70,71,45};

    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]%2==0){
            printf("%d \n",arr[i]);
            sum = sum + arr[i];
        }
    }
    printf("The sum is:%d",sum);
    return 0;
}