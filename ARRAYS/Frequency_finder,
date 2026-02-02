#include <stdio.h>

int main() {
    printf("FREQUENCY FINDER OF ELEMENTS OF ARRAY \n");

    int array[] = {1,1,1,1,2,4,3,5,6,3,2,7,7,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i < size; i++){
        int counter = 1;
        int j = i+1;
        while(j < size){
            if(array[i] == array[j]){
                for(int k = j;k < size-1;k++){
                    array[k] = array[k+1];
                }
                counter++;
                size--;
            }
            else{
                j++;
            }
        }
        printf("\n %d Frequency:%d",array[i],counter);
    }
    return 0;
}