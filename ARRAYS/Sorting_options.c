#include <stdio.h>

int main() {
    printf("SORTING OPTIONS \n");

    int option,array_size,flag=1;
    printf("Please enter the array size \n");
    scanf("%d",&array_size);
    
    int array[array_size];
    
    printf("\n Please enter the elements of array: \n");
    for(int i = 0;i < array_size ; i++ ){
        scanf("%d",&array[i]);
    }
    while(flag){
        printf("\n PLEASE SELECT AN OPTION");
        printf("\n 1. BUBBLE SORT");
        printf("\n 2. SLECTION SORT");
        printf("\n 3. INSERTION SORT");
        printf("\n 4. PRINT THE ARRAY");
        printf("\n 5. EXIT");

        printf(" \n Please enter a choice: ");
        scanf("%d",&option);


        switch(option){
            case 1:{
                for(int i = 0;i < array_size ; i++){
                    for(int j = 0;j < array_size ; j++){
                        if(array[j] > array[j+1]){
                            int temp = array[j];
                            array[j] = array[j+1];
                            array[j+1] = temp;
                        }
                    }
                }
                break;
            }

            case 2:{
                for(int i = 0;i < array_size ; i++){
                    int min_index = 0;
                    for(int j = 0;j < array_size ; j++){
                        if( min_index > array[j]){
                            min_index = j;
                        }
                    }
                    int temp = array[i];
                    array[i] = array[min_index];
                    array[min_index] = temp;
                }
                break;
            }

            case 3:{
                for(int i = 0;i < array_size ; i++){
                    int key = array[i];
                    int j = i - 1;
                    while(j >= 0 && key < array[j]){
                        array[j+1] = array[j];
                        j--;
                    }
                    array[j+1] = key;
                }
                break;
            }

            case 4:{
                printf("\nSorted ARRAY \n");
                for(int i = 0; i<array_size;i++){
                    printf("%d \n",array[i]);
                }
                break;
            }
            
            case 5:{
                printf("\nThankyou User");
                flag = 0;
                break;
            }
        }
    }
    return 0;
}