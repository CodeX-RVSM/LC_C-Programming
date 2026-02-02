#include <stdio.h>

int main() {
    printf("FOR LOOP \n");

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i = 0;i <= num; i++){
        printf("%d \n",i);
    }
    return 0;
}