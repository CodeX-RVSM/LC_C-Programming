#include <stdio.h>

int main() {
    printf("NUMBER IN SQUARE SHAPE PRINTER \n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}