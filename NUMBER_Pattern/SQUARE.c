#include <stdio.h>

int main() {
    printf("0101 SQUARE printer\n");    
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf(i%2==0?(j%2==0?"1":"0"):(j%2==0?"0":"1"));
        }
        printf("\n");
    }
    

    return 0;
}