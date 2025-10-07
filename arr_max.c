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
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    
    return 0;
}
