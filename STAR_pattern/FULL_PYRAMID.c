#include <stdio.h>

int main() {
    printf("NORMAL PYRAMID \n");
    int num,j;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=(num - 1);j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=(i*2)-1;k++){
           printf("*");
        }
        printf("\n");
    }

    return 0;
}

//  if(i==1||i==num||k==1||k==i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }