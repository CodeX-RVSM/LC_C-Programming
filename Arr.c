#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
    printf("%d",len);

    return 0;
}
