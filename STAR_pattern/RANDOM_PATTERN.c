#include <stdio.h>

int main() {
    printf("RANDOM BOX PATTERN \n");

    int num;
    printf("Please enter the size of box:");
    scanf("%d",&num);

    if(num%2==0){
        printf("WRONG INPUT");
    }
    else{
        for(int i=1;i<=num;i++){
            for(int j=1;j<=num;j++){
                // if(i==1||i==num||j==1||j==num||j==((num/2)+1)||i==((num/2)+1)||i==j){
                if (i==1 || i==num || j==1 || j==num || j==((num/2)+1) || i==((num/2)+1) || i==j || (i + j == num + 1)){
                printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}