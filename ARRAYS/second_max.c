#include <stdio.h>

int main() {
    printf("MAX OF ARRAY PRINTER \n");
    int arr[]={10,20,30,70,40,50};
    int a,max = arr[0],max2=0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max2 = max;
            max=arr[i];
        }
        else if(arr[i]>max2 && max2<max){
            max2 = arr[i];
        }
    }
    printf("MAX NUMBER:%d \n",max);
    printf("2nd MAX NUMBER:%d",max2);
    return 0;
}

// {10,98,20,99,-40,50,60,-70,71,45};