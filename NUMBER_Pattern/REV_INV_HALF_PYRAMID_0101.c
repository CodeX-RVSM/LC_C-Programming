#include <stdio.h>

int main() {
    // printf("A SINGLE NUMBER IN LINE AND NUMBER IN SQUARE SHAPE PRINTER \n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=num;i>=1;i--){
        for(int j=((num+1)-i);j<=num;j++){
            // printf("%d",j);
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}