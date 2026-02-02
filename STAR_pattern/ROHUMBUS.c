#include <stdio.h>

int main() {
    printf("ROHUMBUS PATTERN \n");
    int num;
    printf("PLEASE ENTER A NUMBER");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=num;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}