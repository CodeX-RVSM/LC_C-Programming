#include<stdio.h>
int main()
//WAP to print arr in a reverse order 
{
    int arr[]={10,20,30,40,50,60,70,80,76,65};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=len-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}