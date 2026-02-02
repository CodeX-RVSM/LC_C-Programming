#include <stdio.h>

int main() {
    // printf("A SINGLE NUMBER IN LINE AND NUMBER IN SQUARE SHAPE PRINTER \n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=((num+1)-i);j++){
              printf(i%2==0?(j%2==0?"0":"1"):(j%2==0?"1":"0"));
            }
            printf("\n");
        }
    return 0;
}