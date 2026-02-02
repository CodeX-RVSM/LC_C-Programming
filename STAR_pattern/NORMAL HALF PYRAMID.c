#include <stdio.h>

int main() {
    printf("STAR PYRAMID PATTERN PRINTER\n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i = 1; i <= num;i++){
        for (int j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}