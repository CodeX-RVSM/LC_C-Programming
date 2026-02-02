#include<stdio.h>

int main(){
    printf("COMMON NUMBER PRINTER IN TWO ARRAYS \n");
    int spider[] = {1,2,3,4,5,6,7,8,9};
    int bat[] = {7,8,9,10,11,12,13,14,15};

    int size_spider = sizeof(spider)/sizeof(spider[0]);
    int size_bat = sizeof(bat)/sizeof(bat[0]);

    for(int i = 0;i < size_spider;i++){
        for(int j = 0;j < size_bat;j++){
            if(spider[i]==bat[j]){
                printf("%d Is common Number in two arrays. \n",spider[i]);
            }
        }
    }
    return 0;
}