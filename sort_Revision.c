#include<stdio.h>

// void printArray(int arr[],int len){
//     for(int i=0;i<len;i++){
        
//         printf("%d",arr[i]);
        
//     }

// }

// int main()
// {
//     int arr[]={3,1,2,5,4};
//     int len= sizeof(arr)/sizeof(arr[0]);

//     printArray(arr,len);
//     printf("\n");
//     // bubble Sort

    // for(int i=0;i<len;i++){
    //     for(int j=0;j<len;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // // }
    
    // printArray(arr,len);

    // //Selection sort 
    // for(int i=0;i<len;i++){
    //     int minindex=i;
    //     for(int j=i+1;j<len;j++){
    //         if(arr[minindex]>arr[j]){
    //             minindex=j;
    //         }
    //     }
    //     int temp=arr[i];
    //     arr[i]=arr[minindex];
    //     arr[minindex]=temp;
    // }
    // printArray(arr,len);

    //insertion sort
    // int j;
    // for(int i=1;i<len;i++){
    //     int key=arr[i];
    //     for(j=i-1;j>=0&&arr[j]>key;j--){
    //         arr[j+1]=arr[j];
    //     }
    //     arr[j+1]=key;
    // }
    // printArray(arr,len);

    // return 0;

    void countingSort(int arr[],int len,int max){
        int counting[max+1];
        for(int i=0;i<max+1;i++){
            counting[i]=0;

        }
        for(int i =0;i<len;i++){
            counting[arr[i]++];
        }
    }

    int getMax(int arr[],int len){
        int max=arr[0];
        for(int i=0;i<len;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    


int main(){
    int arr[]={4,3,4,2,6,8,5,1,2};
    int len=sizeof(arr)/sizeof(arr[0]);

    int max=getMax(arr,len);
    countingSort(arr,len,max);
    printf("%d",max);
    


    return 0;
}