#include <stdio.h>

int main() {
    printf("REVERSE STAR PYRRAMID PATTERN \n");

    int num;
    printf("Plese enter a number:");
    scanf("%d",&num);
    printf("\n");

 for(int i = 1;i <= num;i++){
    for(int j=num;j>=i;j--){
        printf(" ");
    }
    for(int k = 1;k <= i; k++){
        printf("*");
    }
    printf("\n");
 }

    return 0;
}