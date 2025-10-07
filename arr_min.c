#include<stdio.h>
int main()
 
{
    int n;
    printf("Enter the size of arr :");
    scanf("%d",&n);

    int arr[n];
    printf("ENter a values for array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    
    return 0;
}
