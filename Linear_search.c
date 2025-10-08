#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,62};
    int len =sizeof(arr)/sizeof(arr[0]);

    int key,flag=1; 
    printf("Enter A Key you want To search :");
    scanf("%d",&key);

    for(int i=0;i<len;i++){
        if(arr[i]==key){
            flag=0;
            printf("The key is found at index %d ",i);
            break;
        }
    }if(flag){
        printf("key is not found");
    }


    return 0;
}
