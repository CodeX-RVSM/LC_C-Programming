#include <stdio.h>

int main() {
    printf("HOLLOW DIAMON \n");

    int num;
    printf("Please enter the number");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=(num-1);j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=((i*2)-1);k++){
            // printf("* ");
            if(k==1||k==(i*2 - 1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        }
        // printf("\n");
    
        for(int i=(num-1);i>=1;i--){
        for(int j=(num-1);j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=((i*2)-1);k++){
            // printf("*");
            if(k==1||k==(i*2 - 1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}