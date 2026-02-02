#include <stdio.h>

int main() {
    printf("BINARY SEARCH \n");
    int arr[]={1,2,3,4,7,8,90,99};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num , flag=1 , start=0 , end=len-1;
    printf("Please enter a number to search:");
    scanf("%d",&num);

    while(start<end){
        int mid = start+end/2;
        if(num == arr[mid]){
            flag = 0;
            printf("\n The number is found at index number %d: \n",mid);
            break;
        }
        else if(arr[mid] < num){
            start = mid + 1;
        }
        else if (arr[mid] > num)
        {
            start = mid - 1;
        }
    }

    if (flag == 1)
    {
        printf("The number is not found");
    }
    

    return 0;
}