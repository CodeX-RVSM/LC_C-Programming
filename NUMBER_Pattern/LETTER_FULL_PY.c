#include <stdio.h>

int main() {
    printf("NORMAL PYRAMID \n");
    int num,j;
    char ch='A';
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=(num - 1);j>=i;j--){
            printf("  ");
        }
        char ch='A';
        for(int k=1;k<=(i*2)-1;k++){
           printf("%c ",ch++);
        }
        printf("\n");
    }

    return 0;
}