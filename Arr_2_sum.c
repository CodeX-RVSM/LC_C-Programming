#include<stdio.h>
//WAP to print even numbers 

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,76,65};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum = arr;
    for(int i=0;i<len;i++){
        if(arr[i]==0){
            printf("%d",arr[i]);
        }

        
    }

    return 0;
}
