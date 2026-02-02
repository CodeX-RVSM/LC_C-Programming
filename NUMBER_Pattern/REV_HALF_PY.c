#include <stdio.h>

int main() {
    printf("REVERSE HALF PYRAMID \n");
    int num;
    printf("Please enter the number of rows:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j =(num+1)-i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}