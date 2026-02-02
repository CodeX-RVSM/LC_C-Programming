#include <stdio.h>

int main() {
    printf("1 FOR ODD AND 0 FOR EVEN ROWS\n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i%2==0){
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