#include<stdio.h>
int main()
{
    //needs sorted array
    int arr[]={10,20,30,40,50,62};
    int len =sizeof(arr)/sizeof(arr[0]);
    int key,flag=1; 
    printf("Enter A Key you want To search :");
    scanf("%d",&key);
    int start =1,end=len-1,falg=1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
        flag=0;
        printf("The key is fount at index %d",mid);
        break;
    }else if(arr[mid]<key){
        start=mid+1;

    }else if(arr[mid]>key){
        end=mid-1;
    }
    if(flag){
        printf("key is not found");
    }


    return 0;
    }
}