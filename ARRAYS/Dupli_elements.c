#include<stdio.h>

int main(){

    int array[] = {1,1,2,3,4,5,5,5,6,7,8,9,9};
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i < size ; i++){
        int j = i+1;
        while(j < size){  //second for loop fails for more than 1 duplicate.
            if(array[i]==array[j]){
                for(int k = j; k < size ; k++){
                    array[k] = array[k+1];
                }
                size--;
            }
            else{
                    j++;
                }
        }
    }

    for(int i = 0;i < size ; i++){
        printf("%d \n",array[i]);
    }

    return 0;
}