#include <stdio.h>

int main() {
    printf("NORMAL PYRAMID \n");
    int num,j;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i =num;i>=1;i--){
        for(int j=num;j>=i;j--){
            printf(" ");
        }
        for(int k =1;k<=i*2-1;k++){
            printf(i%2==0?"0":"1");
        }
        printf("\n");
    }
        for(int i =2;i<=num;i++){
        for(int j=num;j>=i;j--){
            printf(" ");
        }
        for(int k =1;k<=i*2-1;k++){
            printf(i%2==0?"0":"1");
        }
        printf("\n");
    }
    return 0;
}