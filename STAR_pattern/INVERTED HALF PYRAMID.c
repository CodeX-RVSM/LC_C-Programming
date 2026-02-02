#include <stdio.h>

int main() {
    printf("INVERTED PYRAMID PATTERN \n");
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);//5

    for(int i = num; i >= 1; i--){
        for(int j= 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}