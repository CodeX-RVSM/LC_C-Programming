#include <stdio.h>

int main() {
    printf("DIAMOND PATTERN \n");

    int num;
    printf("Please enter a number to print the rows of diamond:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for (int k =(num - 1); k >= i; k--)
        {
            printf(" ");
        }
        for(int j = 1;j<=((i*2)-1);j++){
            printf("*");
        }
        
        printf("\n");
    }
        for(int i=(num -1);i>=1;i--){
        for (int k =(num - 1); k >= i; k--)
        {
            printf(" ");
        }
        for(int j = 1;j<=((i*2)-1);j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}