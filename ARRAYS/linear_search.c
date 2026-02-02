#include <stdio.h>

int main() {
    printf("LINEAR SEARCH \n");
    int arr[]={1,2,3,4,56,7,8,90,99};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num,flag=1;
    printf("Please enter a number to search:");
    scanf("%d",&num);

    for(int i =0;i<len;i++){
        if (num == arr[i])
        {
            flag = 0;
            printf("The number is found at:%d",i);
        }        
    }
    if(flag){
        printf("The number is not in array");
    }

    return 0;
}