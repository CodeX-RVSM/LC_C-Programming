#include <stdio.h>

int main() {
    printf("SQUARE PATTERN \n");
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i = 1;i<= num; i++){
        for(int j=1 ;j <= num; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}