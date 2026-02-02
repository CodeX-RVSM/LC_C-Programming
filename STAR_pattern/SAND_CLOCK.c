#include <stdio.h>

int main() {
    printf("SAND CLOCK \n");

    int num;
    printf("Please enter the size of watch:");
    scanf("%d",&num);
    
        for(int i=num;i>=1;i--){
        for(int j=(num-1);j>=i;j--){
            printf(" ");
        }
        for(int k =1;k<=i;k++){
            // printf("*");
            if(i==1||i==num||k==1||k==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for(int i=2;i<=num;i++){
        for(int j=(num-1);j>=i;j--){
            printf(" ");
        }
        for(int k =1;k<=i;k++){
            // printf("*");
            if(i==1||i==num||k==1||k==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
